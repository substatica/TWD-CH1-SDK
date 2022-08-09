#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "TWDSerializedSaveSlot.h"
#include "TWDSerializedProfile.generated.h"

UCLASS()
class TWD_API UTWDSerializedProfile : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FTWDSerializedSaveSlot> SlotData;
    
    UTWDSerializedProfile();
};

