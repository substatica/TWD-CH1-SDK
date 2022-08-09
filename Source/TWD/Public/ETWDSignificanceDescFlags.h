#pragma once
#include "CoreMinimal.h"
#include "ETWDSignificanceDescFlags.generated.h"

UENUM()
enum class ETWDSignificanceDescFlags {
    SC_Start,
    SC_AlwaysSignificanct = 0x0,
    SC_Visibility,
    SC_InCombatWithPlayer,
    SC_IsInCombatRingWithPlayer,
    SC_IsInCombatWithAI,
    SC_IsInCombatRingWithAI,
    SC_MinClamped,
    SC_Misc,
    SC_End,
    RecentlyRendered,
};

