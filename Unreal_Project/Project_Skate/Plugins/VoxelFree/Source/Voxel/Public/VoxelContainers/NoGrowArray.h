// Copyright 2020 Phyronnaz

#pragma once

#include "CoreMinimal.h"

template<typename T, typename TAllocator = FDefaultAllocator>
using TNoGrowArray = TArray<T, TAllocator>;

template<typename T, typename TAllocator = FDefaultAllocator64>
using TNoGrowArray64 = TArray<T, TAllocator>;