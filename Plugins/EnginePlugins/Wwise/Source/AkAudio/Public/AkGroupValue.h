#pragma once
#include "CoreMinimal.h"
#include "AkAudioType.h"
#include "AkGroupValue.generated.h"

class UAkMediaAsset;

UCLASS()
class AKAUDIO_API UAkGroupValue : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<TSoftObjectPtr<UAkMediaAsset>> MediaDependencies;
    
    UPROPERTY(AssetRegistrySearchable, VisibleAnywhere)
    uint32 GroupShortID;
    
    UAkGroupValue();
};

