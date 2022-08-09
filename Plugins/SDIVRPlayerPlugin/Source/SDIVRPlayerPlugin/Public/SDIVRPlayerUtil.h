#pragma once
#include "CoreMinimal.h"
#include "SDIUtil.h"
#include "ESDIVRControllerType.h"
#include "InputCoreTypes.h"
#include "SDIVRPlayerUtil.generated.h"

class ASDIPlayerHand;
class ASDIPlayerHandBase;
class UObject;

UCLASS()
class SDIVRPLAYERPLUGIN_API USDIVRPlayerUtil : public USDIUtil {
    GENERATED_BODY()
public:
    USDIVRPlayerUtil();
    UFUNCTION()
    static bool IsEnableOculusOnSteamVR();
    
    UFUNCTION(BlueprintPure)
    static ESDIVRControllerType GetVRControllerTypeTemp_RealOculusTypes();
    
    UFUNCTION(BlueprintPure)
    static ESDIVRControllerType GetVRControllerType();
    
    UFUNCTION(BlueprintPure)
    static ASDIPlayerHandBase* GetPlayerHandBase(const UObject* WorldContextObject, EControllerHand hand);
    
    UFUNCTION(BlueprintPure)
    static ASDIPlayerHand* GetPlayerHand(const UObject* WorldContextObject, EControllerHand hand);
    
    UFUNCTION(BlueprintPure)
    static FString GetHMDDeviceName();
    
};

