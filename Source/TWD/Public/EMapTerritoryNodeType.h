#pragma once
#include "CoreMinimal.h"
#include "EMapTerritoryNodeType.generated.h"

UENUM(BlueprintType)
enum class EMapTerritoryNodeType : uint8 {
    None,
    Hub,
    Mansion,
    FootballHouse,
    BougieMafiaHouse,
    TheDuplex,
    OldTown,
    Industrial1,
    Industrial2,
    School1,
    School2,
    FrenchQuarter,
    COUNT,
};

