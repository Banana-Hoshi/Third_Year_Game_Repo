#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/NoExportTypes.h"
#include "CharacterData.h"
#include "GameFramework/PlayerController.h"
#include "PlayerInfo.generated.h"

USTRUCT(BlueprintType)
struct PROJECT_SKATE_API FPlayerInfo : public FTableRowBase
{
public:
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName username;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	APlayerController* PlayerController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharacterData character;

	FPlayerInfo();
	~FPlayerInfo();
};
