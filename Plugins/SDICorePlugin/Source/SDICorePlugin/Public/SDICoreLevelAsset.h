#pragma once
#include "CoreMinimal.h"
#include "SDIExportAsset.h"
#include "RInt.h"
#include "UObject/NoExportTypes.h"
#include "SDICoreLevelAsset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SDICOREPLUGIN_API USDICoreLevelAsset : public USDIExportAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRInt NumPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> SupportedGameModeGUIDs;
    
public:
    USDICoreLevelAsset();
};

