#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "UObject/NoExportTypes.h"
#include "TWDLightFlashNotifyState.generated.h"

class UCurveFloat;
class APointLight;

UCLASS(CollapseCategories, EditInlineNew)
class TWD_API UTWDLightFlashNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName AttachSocket;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* IntensityCurve;
    
    UPROPERTY(EditAnywhere)
    FLinearColor Color;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
private:
    UPROPERTY()
    APointLight* Light;
    
public:
    UTWDLightFlashNotifyState();
};

