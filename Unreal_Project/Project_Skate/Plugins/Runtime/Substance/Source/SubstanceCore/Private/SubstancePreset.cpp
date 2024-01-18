// Copyright 2023. All rights reserved.
// File: SubstanceOutputData.cpp

#include "SubstancePreset.h"
#include "SubstanceGraphInstance.h"
#include "SubstanceCorePrivatePCH.h"

#include <substance/framework/preset.h>

FSubstancePreset::FSubstancePreset(const SubstanceAir::Preset& preset) {
	SetPreset(preset);
}

void FSubstancePreset::SetPreset(const SubstanceAir::Preset& currentPreset)
{
	preset = currentPreset;
	SubstanceAir::stringstream SS;
	SS << preset;
	SavedPresetString = FString(SS.str().c_str());
}

void FSubstancePreset::GeneratePresetFromString()
{
	SubstanceAir::parsePreset(preset, TCHAR_TO_ANSI(*SavedPresetString));
}

FString FSubstancePreset::GetPresetDescription() const
{
	return FString(preset.mDescription.c_str());
}

FString FSubstancePreset::GetPresetLabel() const
{
	return FString(preset.mLabel.c_str());
}

FString FSubstancePreset::GetPresetString() const {
	SubstanceAir::stringstream SS;
	SS << preset;
	return FString(SS.str().c_str());
}

void FSubstancePreset::Apply(USubstanceGraphInstance* Graph)
{
	preset.apply(*Graph->Instance, SubstanceAir::Preset::Apply_Reset);
}

void FSubstancePreset::Update(USubstanceGraphInstance* Graph)
{
	preset.fill(*Graph->Instance);
}
