#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "InputCoreTypes.h"
#include "TWDAnimNotify_ReloadAmmo.generated.h"

UCLASS(CollapseCategories)
class UTWDAnimNotify_ReloadAmmo : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EControllerHand hand;
    
    UPROPERTY(EditAnywhere)
    FName Socket;
    
    UPROPERTY(EditAnywhere)
    bool bGrab;
    
public:
    UTWDAnimNotify_ReloadAmmo();
};

