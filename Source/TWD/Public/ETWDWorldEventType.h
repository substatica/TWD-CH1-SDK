#pragma once
#include "CoreMinimal.h"
#include "ETWDWorldEventType.generated.h"

UENUM(BlueprintType)
enum class ETWDWorldEventType : uint8 {
    WE_None,
    WE_Story,
    WE_StoryMay,
    WE_StoryCasey,
    WE_NoHerd,
    WE_HerdDelay,
    WE_HerdEarly,
    WE_ModHerd,
    WE_Elite_T,
    WE_Elite_O,
    WE_Squad_T,
    WE_Squad_O,
    WE_Loot_Sg,
    WE_Loot_Ar,
    WE_Spawn_Misc,
    WE_Spawn_Food,
    WE_Spawn_Ammo,
    WE_Spawn_Med,
    WE_Infested,
    COUNT,
};

