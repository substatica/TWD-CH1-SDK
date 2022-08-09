#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SDIAnimNotifyState_NonVRHandGrip.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class USDIAnimNotifyState_NonVRHandGrip : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeftHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRightHand;
    
public:
    USDIAnimNotifyState_NonVRHandGrip();
};

