#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InputCoreTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESDITransformSpace.h"
#include "SDIPlayerHandPawnInterface.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class SDIVRPLAYERPLUGIN_API USDIPlayerHandPawnInterface : public UInterface {
    GENERATED_BODY()
};

class SDIVRPLAYERPLUGIN_API ISDIPlayerHandPawnInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual FTransform GetHMDTransform(ESDITransformSpace Space) const PURE_VIRTUAL(GetHMDTransform, return FTransform{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FTransform GetHandTransform(EControllerHand hand, ESDITransformSpace Space) const PURE_VIRTUAL(GetHandTransform, return FTransform{};);
    
};

