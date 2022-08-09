#pragma once
#include "CoreMinimal.h"
#include "ESeverBouquetAttachSide.generated.h"

UENUM(BlueprintType)
enum class ESeverBouquetAttachSide : uint8 {
    Left,
    Right,
    Front,
    Back,
    Top,
    Bottom,
};

