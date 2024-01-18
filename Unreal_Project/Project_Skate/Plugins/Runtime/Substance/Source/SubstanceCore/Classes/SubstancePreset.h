// Copyright 2023 All rights reserved.
// File: SubstancePreset.h

#pragma once

#ifdef SUBSTANCE_FRAMEWORK_INCLUDED
#include "substance/framework/framework.h"
#endif

#include "Materials/MaterialLayersFunctions.h"
#include "SubstancePreset.generated.h"

class USubstanceGraphInstance;

USTRUCT()
struct FSubstancePreset
{
	GENERATED_BODY()
	FSubstancePreset() {}
	FSubstancePreset(const SubstanceAir::Preset& preset);
	bool operator==(const FSubstancePreset& lPreset) {
		return lPreset.preset.mLabel == preset.mLabel &&
			lPreset.preset.mDescription == preset.mDescription;
	}

public:
	void SetPreset(const SubstanceAir::Preset& preset);

	SUBSTANCECORE_API FString GetPresetDescription() const;
	SUBSTANCECORE_API FString GetPresetLabel() const;
	SUBSTANCECORE_API FString GetPresetString() const;
	SUBSTANCECORE_API void Apply(USubstanceGraphInstance* graph);
	SUBSTANCECORE_API void Update(USubstanceGraphInstance* graph);

	// Recreate the substance air preset using the string
	void GeneratePresetFromString();

private:
	// Stores the preset
	SubstanceAir::Preset preset;

	// Used to serialize the preset
	UPROPERTY()
	FString SavedPresetString;
};