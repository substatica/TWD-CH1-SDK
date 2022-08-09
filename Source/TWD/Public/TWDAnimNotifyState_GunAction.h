#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ETWDGunAction.h"
#include "TWDAnimNotifyState_GunAction.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UTWDAnimNotifyState_GunAction : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETWDGunAction Action;
    
public:
    UTWDAnimNotifyState_GunAction();
};

