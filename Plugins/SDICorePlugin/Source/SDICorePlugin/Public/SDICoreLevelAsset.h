#pragma once
#include "CoreMinimal.h"
#include "RInt.h"
#include "SDIExportAsset.h"
#include "UObject/NoExportTypes.h"
#include "SDICoreLevelAsset.generated.h"

UCLASS(EditInlineNew)
class SDICOREPLUGIN_API USDICoreLevelAsset : public USDIExportAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FRInt NumPlayers;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<FGuid> SupportedGameModeGUIDs;
    
public:
    USDICoreLevelAsset();
};

