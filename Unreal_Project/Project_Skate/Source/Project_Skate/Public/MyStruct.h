// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyStruct.generated.h"

USTRUCT(BlueprintType)
struct PROJECT_SKATE_API FMyStruct
{
public:
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int health;
	
	FMyStruct();
	~FMyStruct();
};
