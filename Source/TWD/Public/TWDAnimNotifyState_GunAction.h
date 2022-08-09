#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ETWDGunAction.h"
#include "TWDAnimNotifyState_GunAction.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UTWDAnimNotifyState_GunAction : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    ETWDGunAction Action;
    
public:
    UTWDAnimNotifyState_GunAction();
};

