#pragma once
#include "CoreMinimal.h"
#include "AkAudioType.h"
#include "AkGroupValue.generated.h"

class UAkMediaAsset;

UCLASS(Blueprintable)
class AKAUDIO_API UAkGroupValue : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAkMediaAsset>> MediaDependencies;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    uint32 GroupShortID;
    
    UAkGroupValue();
};

