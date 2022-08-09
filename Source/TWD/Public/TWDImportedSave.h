#pragma once
#include "CoreMinimal.h"
#include "TWDSaveGame.h"
#include "TWDImportedSave.generated.h"

UCLASS(Blueprintable)
class TWD_API UTWDImportedSave : public UTWDSaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DebugMenuText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LiveSaveNameOverride;
    
    UTWDImportedSave();
};

