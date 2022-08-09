#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SDIAnimNotifyState_NonVRHandGrip.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class USDIAnimNotifyState_NonVRHandGrip : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    bool bLeftHand;
    
    UPROPERTY(EditAnywhere)
    bool bRightHand;
    
public:
    USDIAnimNotifyState_NonVRHandGrip();
};

