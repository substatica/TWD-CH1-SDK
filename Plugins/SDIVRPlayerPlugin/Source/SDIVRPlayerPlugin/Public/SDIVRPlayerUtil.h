#pragma once
#include "CoreMinimal.h"
#include "SDIUtil.h"
#include "ESDIVRControllerType.h"
#include "InputCoreTypes.h"
#include "SDIVRPlayerUtil.generated.h"

class ASDIPlayerHandBase;
class UObject;
class ASDIPlayerHand;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API USDIVRPlayerUtil : public USDIUtil {
    GENERATED_BODY()
public:
    USDIVRPlayerUtil();
    UFUNCTION(BlueprintCallable)
    static bool IsEnableOculusOnSteamVR();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESDIVRControllerType GetVRControllerTypeTemp_RealOculusTypes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESDIVRControllerType GetVRControllerType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASDIPlayerHandBase* GetPlayerHandBase(const UObject* WorldContextObject, EControllerHand hand);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASDIPlayerHand* GetPlayerHand(const UObject* WorldContextObject, EControllerHand hand);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetHMDDeviceName();
    
};

