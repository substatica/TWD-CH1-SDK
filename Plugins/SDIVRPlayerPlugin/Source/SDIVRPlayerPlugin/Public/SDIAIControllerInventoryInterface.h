#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Interface.h"
#include "InputCoreTypes.h"
#include "ESDIInteractiveInteractType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIAIControllerInventoryInterface.generated.h"

class ASDIWeaponFirearm;
class ASDIInventoryActor;
class ASDIHeldActor;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class SDIVRPLAYERPLUGIN_API USDIAIControllerInventoryInterface : public UInterface {
    GENERATED_BODY()
};

class SDIVRPLAYERPLUGIN_API ISDIAIControllerInventoryInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool WeaponStopFire(EControllerHand hand, ESDIInteractiveInteractType Firemode) PURE_VIRTUAL(WeaponStopFire, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void WeaponStopAllFire(EControllerHand hand, bool bImmediately) PURE_VIRTUAL(WeaponStopAllFire,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool WeaponStartFire(EControllerHand hand, ESDIInteractiveInteractType Firemode) PURE_VIRTUAL(WeaponStartFire, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void WeaponReload(EControllerHand hand) PURE_VIRTUAL(WeaponReload,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool WeaponNeedsReload(EControllerHand hand) PURE_VIRTUAL(WeaponNeedsReload, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool WeaponIsReadyToFire(EControllerHand hand, ESDIInteractiveInteractType Firemode) PURE_VIRTUAL(WeaponIsReadyToFire, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool WeaponIsFiring(EControllerHand hand, ESDIInteractiveInteractType Firemode) PURE_VIRTUAL(WeaponIsFiring, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 WeaponGetClipSize(EControllerHand hand) const PURE_VIRTUAL(WeaponGetClipSize, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 WeaponGetAmmoCount(EControllerHand hand) const PURE_VIRTUAL(WeaponGetAmmoCount, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool WeaponFireSingleShot(EControllerHand hand, ESDIInteractiveInteractType Firemode) PURE_VIRTUAL(WeaponFireSingleShot, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 RemoveInventoryItemsByGuid(const FGuid& InvGuid, TArray<ASDIInventoryActor*>& RemovedInventory, bool bExact, bool bDestroy) PURE_VIRTUAL(RemoveInventoryItemsByGuid, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 RemoveInventoryItems(TSubclassOf<ASDIInventoryActor> InvClass, TArray<ASDIInventoryActor*>& RemovedInventory, bool bExact, bool bDestroy) PURE_VIRTUAL(RemoveInventoryItems, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GrabItemFromInventory(ASDIInventoryActor* InvActor, EControllerHand PrimaryHand, EControllerHand SecondaryHand) PURE_VIRTUAL(GrabItemFromInventory, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GrabHeldActor(ASDIHeldActor* HeldActor, EControllerHand PrimaryHand, EControllerHand SecondaryHand, bool bAddToInventory) PURE_VIRTUAL(GrabHeldActor, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GrabClassFromInventory(TSubclassOf<ASDIInventoryActor> InvClass, EControllerHand PrimaryHand, EControllerHand SecondaryHand, bool bExact) PURE_VIRTUAL(GrabClassFromInventory, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual FTransform GetShotTransform(ASDIWeaponFirearm* Weapon, const FTransform& inShotTransform) PURE_VIRTUAL(GetShotTransform, return FTransform{};);
    
    UFUNCTION(BlueprintCallable)
    virtual ASDIInventoryActor* GetNextInventory(ASDIInventoryActor* Current, int32 Dir, TSubclassOf<ASDIInventoryActor> InvClass, bool bExact, bool bLoop) const PURE_VIRTUAL(GetNextInventory, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetInventoryOfType(TSubclassOf<ASDIInventoryActor> InvClass, TArray<ASDIInventoryActor*>& OutInventory, bool bExact) const PURE_VIRTUAL(GetInventoryOfType, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetInventoryByGuid(const FGuid& InvGuid, TArray<ASDIInventoryActor*>& OutInventory, bool bExact) const PURE_VIRTUAL(GetInventoryByGuid, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual ASDIHeldActor* GetHeldActor(EControllerHand hand) const PURE_VIRTUAL(GetHeldActor, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool DropHeldActor(ASDIHeldActor* HeldActor, bool bReturnToInventory, bool bRemoveFromInventory) PURE_VIRTUAL(DropHeldActor, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual ASDIInventoryActor* AddInventoryItem(TSubclassOf<ASDIInventoryActor> InvClass, int32 Count) PURE_VIRTUAL(AddInventoryItem, return NULL;);
    
};

