#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TWDSuspendedLevelCharacterData.h"
#include "TWDPersistentLevelItemData.h"
#include "UObject/NoExportTypes.h"
#include "TWDSuspendedLevelSaveData.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDSuspendedLevelSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bValid;
    
    UPROPERTY()
    TMap<FGuid, FTWDSuspendedLevelCharacterData> Characters;
    
    UPROPERTY()
    TMap<FGuid, FTWDPersistentLevelItemData> items;
    
    UPROPERTY()
    FTransform PlayerPosition;
    
    UPROPERTY()
    TArray<FString> Context;
    
    UPROPERTY()
    float HordeTimer;
    
    FTWDSuspendedLevelSaveData();
};

