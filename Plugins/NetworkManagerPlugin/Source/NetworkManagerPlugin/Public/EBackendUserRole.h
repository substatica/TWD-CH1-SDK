#pragma once
#include "CoreMinimal.h"
#include "EBackendUserRole.generated.h"

UENUM(BlueprintType)
enum EBackendUserRole {
    BUR_DEVELOPER,
    BUR_USER,
    BUR_PLAYER,
    BUR_CUSTOMER_SERVICE,
    BUR_GAME_MODERATOR,
    BUR_GAME_ADMIN,
    BUR_GAME_SERVER,
    BUR_MAX UMETA(Hidden),
};

