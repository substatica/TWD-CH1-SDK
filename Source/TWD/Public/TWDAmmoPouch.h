#pragma once
#include "CoreMinimal.h"
#include "TWDInteractiveHighlightInterface.h"
#include "SDIInventorySlot.h"
#include "ETWDPlayerCharacterTickInventory.h"
#include "TWDAmmoPouchItemInfo.h"
#include "TWDAmmoPouch.generated.h"

class ATWDWeaponGun;
class UCapsuleComponent;
class ATWDWeaponBowV2;
class UMaterialInstanceDynamic;
class UStaticMeshComponent;
class USceneComponent;
class UTWDWidgetComponent;
class UObject;
class ATWDWeaponBow;

UCLASS()
class TWD_API ATWDAmmoPouch : public ASDIInventorySlot, public ITWDInteractiveHighlightInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ATWDWeaponGun* HeldGunLeft;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ATWDWeaponGun* HeldGunRight;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ATWDWeaponGun* ActiveGun;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bOwnerHoldingAmmo;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ATWDWeaponBowV2* HeldBowLeft;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ATWDWeaponBowV2* HeldBowRight;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ATWDWeaponBowV2* ActiveBow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RangedGrabOverrideRadius;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    ETWDPlayerCharacterTickInventory InventorySlotTickGroup;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* PouchRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* PouchMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* SlotMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCapsuleComponent* SlotCollision;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UMaterialInstanceDynamic* AmmoIconMatInst;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UTWDWidgetComponent* AmmoInfoWidget;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UStaticMeshComponent* AmmoIconMesh;
    
    UPROPERTY(Transient)
    FTWDAmmoPouchItemInfo CurrentItemInfo;
    
public:
    ATWDAmmoPouch();
    UFUNCTION(BlueprintPure)
    bool WasPouchRecentlyRendered(float Tolerance) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateItemInfo(const FTWDAmmoPouchItemInfo& ItemInfo);
    
    UFUNCTION(BlueprintCallable)
    int32 GetArrowPropCurrencyCount(UObject* InventoryHolder, ATWDWeaponBow* Bow);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAmmoPropCurrencyCount(UObject* InventoryHolder, ATWDWeaponGun* Gun);
    
    
    // Fix for true pure virtual functions not being implemented
};

