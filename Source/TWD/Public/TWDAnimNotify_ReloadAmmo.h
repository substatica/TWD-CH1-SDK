#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TWDAnimNotify_ReloadAmmo.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UTWDAnimNotify_ReloadAmmo : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EControllerHand hand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Socket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGrab;
    
public:
    UTWDAnimNotify_ReloadAmmo();
};

