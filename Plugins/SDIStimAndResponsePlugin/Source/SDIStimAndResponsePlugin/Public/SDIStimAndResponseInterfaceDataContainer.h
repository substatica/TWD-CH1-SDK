#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SDIStimAndResponseInterfaceDataContainer.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct SDISTIMANDRESPONSEPLUGIN_API FSDIStimAndResponseInterfaceDataContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer StimulusFilter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StimulusTickInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bStartStimulusTickWhenStimulated;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bStopStimulusTickWhenNotStimulated;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUpdateStimuliOnTick;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TArray<UPrimitiveComponent*> OnOverlapComponents;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FGameplayTagContainer LastReplicatedStimuli;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FGameplayTagContainer LatentUpdateStimuli;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LastTickTimeStamp;
    
    FSDIStimAndResponseInterfaceDataContainer();
};

