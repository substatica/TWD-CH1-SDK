#pragma once
#include "CoreMinimal.h"
#include "SDISyncedAnimationPair.generated.h"

class UAnimSequenceBase;

USTRUCT()
struct SDICOREPLUGIN_API FSDISyncedAnimationPair {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UAnimSequenceBase* MasterAnimSequence;
    
    UPROPERTY(EditAnywhere)
    FName MasterSlotName;
    
    UPROPERTY(EditAnywhere)
    UAnimSequenceBase* SlaveAnimSequence;
    
    UPROPERTY(EditAnywhere)
    FName SlaveSlotName;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float PlayRate;
    
public:
    FSDISyncedAnimationPair();
};

