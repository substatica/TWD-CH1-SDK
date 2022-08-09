#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "SDISkinReplicationData.h"
#include "TWDSuspendedLevelCharacterData.generated.h"

class ATWDCharacter;
class UTWDCharacterArchetype;

USTRUCT(BlueprintType)
struct TWD_API FTWDSuspendedLevelCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSubclassOf<ATWDCharacter> Class;
    
    UPROPERTY()
    TSubclassOf<UTWDCharacterArchetype> Archetype;
    
    UPROPERTY()
    FSDISkinReplicationData SkinData;
    
    UPROPERTY()
    FTransform Transform;
    
    UPROPERTY()
    float Health;
    
    FTWDSuspendedLevelCharacterData();
};

