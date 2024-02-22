#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Texture2D.h"
#include "Engine/SkeletalMesh.h"
#include "CharacterStats.h"
#include "UObject/Object.h"
#include "UObject/Class.h"
#include "Engine/DataTable.h"
#include "UObject/UnrealType.h"

#include "CharacterData.generated.h"

USTRUCT(BlueprintType)
struct PROJECT_SKATE_API FCharacterData : public FTableRowBase
{
public:
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Profile")
	FName name;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Profile")
	FText description;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Profile")
	UTexture2D* icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Render")
	USkeletalMesh* mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Render")
	TSubclassOf<UObject> animObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	FCharacterStats stats;
	
	FCharacterData();
	~FCharacterData();
};
