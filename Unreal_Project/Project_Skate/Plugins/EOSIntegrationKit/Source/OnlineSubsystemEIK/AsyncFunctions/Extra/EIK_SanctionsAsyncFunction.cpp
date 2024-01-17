﻿//Copyright (c) 2023 Betide Studio. All Rights Reserved.


#include "EIK_SanctionsAsyncFunction.h"

#include "OnlineSubsystem.h"
#include "OnlineSubsystemEOS.h"

UEIK_SanctionsAsyncFunction* UEIK_SanctionsAsyncFunction::GetEikPlayerSanctionsAsyncFunction(FString LocalProductUserID, FString TargetProductUserID)
{
	UEIK_SanctionsAsyncFunction* Ueik_GetSanctionObject = NewObject<UEIK_SanctionsAsyncFunction>();
	Ueik_GetSanctionObject->Var_LocalProductUserID = LocalProductUserID;
	Ueik_GetSanctionObject->Var_TargetProductUserID = TargetProductUserID;
	return Ueik_GetSanctionObject;
}

void UEIK_SanctionsAsyncFunction::Func_GetSanctions()
{
	if(	IOnlineSubsystem* OnlineSub = IOnlineSubsystem::Get())
	{
		if (FOnlineSubsystemEOS* EOSRef = static_cast<FOnlineSubsystemEOS*>(OnlineSub))
		{
			EOS_Sanctions_QueryActivePlayerSanctionsOptions SanctionsOptions;
			SanctionsOptions.ApiVersion = EOS_SANCTIONS_QUERYACTIVEPLAYERSANCTIONS_API_LATEST;
			SanctionsOptions.LocalUserId = EOS_ProductUserId_FromString(TCHAR_TO_UTF8(*Var_LocalProductUserID));
			SanctionsOptions.TargetUserId = EOS_ProductUserId_FromString(TCHAR_TO_UTF8(*Var_TargetProductUserID));
			EOS_Sanctions_QueryActivePlayerSanctions(EOSRef->SanctionsHandle,&SanctionsOptions,this,ReturnFunc);
			return;
		}
	}
	FireFailure();
}

void UEIK_SanctionsAsyncFunction::ReturnFunc(const EOS_Sanctions_QueryActivePlayerSanctionsCallbackInfo* Data)
{
	if(Data->ClientData)
	{
		if(UEIK_SanctionsAsyncFunction* SanctionsFunction = static_cast<UEIK_SanctionsAsyncFunction*>(Data->ClientData))
		{
			if(Data->ResultCode == EOS_EResult::EOS_Success)
			{
				SanctionsFunction->GetFinalValues();
			}
			else
			{
				SanctionsFunction->FireFailure();
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("MySanctionsFunction is null. No callback will be fired"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("ClientData is null. No callback will be fired"));
	}
}

void UEIK_SanctionsAsyncFunction::GetFinalValues()
{
	if(	IOnlineSubsystem* OnlineSub = IOnlineSubsystem::Get())
	{
		if (FOnlineSubsystemEOS* EOSRef = static_cast<FOnlineSubsystemEOS*>(OnlineSub))
		{
			TArray<FSanctionsStruct> SanctionsArray;
			EOS_Sanctions_GetPlayerSanctionCountOptions SanctionsCountOptions;
			SanctionsCountOptions.ApiVersion = EOS_SANCTIONS_GETPLAYERSANCTIONCOUNT_API_LATEST;
			SanctionsCountOptions.TargetUserId = EOS_ProductUserId_FromString(TCHAR_TO_UTF8(*Var_TargetProductUserID));
			uint32_t SanctionsCount = EOS_Sanctions_GetPlayerSanctionCount(EOSRef->SanctionsHandle,&SanctionsCountOptions);
			EOS_Sanctions_CopyPlayerSanctionByIndexOptions SanctionsCopyOptions;
			EOS_Sanctions_PlayerSanction ** OutSanction = new EOS_Sanctions_PlayerSanction*[SanctionsCount];
			SanctionsCopyOptions.ApiVersion = EOS_SANCTIONS_COPYPLAYERSANCTIONBYINDEX_API_LATEST;
			SanctionsCopyOptions.TargetUserId = EOS_ProductUserId_FromString(TCHAR_TO_UTF8(*Var_TargetProductUserID));
			EOS_Sanctions_CopyPlayerSanctionByIndex(EOSRef->SanctionsHandle,&SanctionsCopyOptions,OutSanction);
			if(OutSanction)
			{
				for(int32 i =0; i < (int32)SanctionsCount;i++)
				{
					if (OutSanction[i])
					{
						FSanctionsStruct SanctionStruct;
						SanctionStruct.ApiVersion = OutSanction[i]->ApiVersion;
						SanctionStruct.Action = FString(OutSanction[i]->Action);
						SanctionStruct.ReferenceId = FString(OutSanction[i]->ReferenceId);
						SanctionStruct.TimeExpires = OutSanction[i]->TimeExpires;
						SanctionStruct.TimePlaced = OutSanction[i]->TimePlaced;
						SanctionsArray.Add(SanctionStruct);
					}
				}
				for(int32 i=0; i < (int32)SanctionsCount;i++)
				{
					EOS_Sanctions_PlayerSanction_Release(OutSanction[i]);
				}
			}
			else
			{
				FireFailure();
				return;
			}
			Success.Broadcast(SanctionsArray);
			SetReadyToDestroy();
		}
		else
		{
			FireFailure();
		}
	}
	else
	{
		FireFailure();
	}
}

void UEIK_SanctionsAsyncFunction::FireFailure()
{
	Failure.Broadcast(TArray<FSanctionsStruct>());
	SetReadyToDestroy();
}

void UEIK_SanctionsAsyncFunction::Activate()
{
	Func_GetSanctions();
	Super::Activate();
}
