#pragma once
#include "CoreMinimal.h"
#include "TWDSaveGame.h"
#include "TWDImportedSave.generated.h"

UCLASS()
class TWD_API UTWDImportedSave : public UTWDSaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText DebugMenuText;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString LiveSaveNameOverride;
    
    UTWDImportedSave();
};

