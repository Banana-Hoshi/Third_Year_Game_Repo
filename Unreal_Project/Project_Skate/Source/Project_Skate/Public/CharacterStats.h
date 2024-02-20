#pragma once

#include "CoreMinimal.h"
#include "CharacterStats.generated.h"

USTRUCT(BlueprintType)
struct PROJECT_SKATE_API FCharacterStats
{
public:
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float weight;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float speed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float control;
	
	FCharacterStats();
	~FCharacterStats();
};
