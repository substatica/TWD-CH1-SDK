#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "TWDSerializedSaveSlot.h"
#include "TWDSerializedProfile.generated.h"

UCLASS(Blueprintable)
class TWD_API UTWDSerializedProfile : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTWDSerializedSaveSlot> SlotData;
    
    UTWDSerializedProfile();
};

