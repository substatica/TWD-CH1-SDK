#pragma once
#include "CoreMinimal.h"
#include "TWDSuspendedLevelCharacterData.h"
#include "UObject/NoExportTypes.h"
#include "TWDPersistentLevelItemData.h"
#include "UObject/NoExportTypes.h"
#include "TWDSuspendedLevelSaveData.generated.h"

USTRUCT(BlueprintType)
struct TWD_API FTWDSuspendedLevelSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FTWDSuspendedLevelCharacterData> Characters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FTWDPersistentLevelItemData> items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform PlayerPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HordeTimer;
    
    FTWDSuspendedLevelSaveData();
};

