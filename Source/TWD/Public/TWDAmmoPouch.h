#pragma once
#include "CoreMinimal.h"
#include "TWDInteractiveHighlightInterface.h"
#include "SDIInventorySlot.h"
#include "ETWDPlayerCharacterTickInventory.h"
#include "TWDAmmoPouchItemInfo.h"
#include "TWDAmmoPouch.generated.h"

class UCapsuleComponent;
class ATWDWeaponGun;
class ATWDWeaponBowV2;
class UMaterialInstanceDynamic;
class UStaticMeshComponent;
class USceneComponent;
class UTWDWidgetComponent;
class UObject;
class ATWDWeaponBow;

UCLASS(Blueprintable)
class TWD_API ATWDAmmoPouch : public ASDIInventorySlot, public ITWDInteractiveHighlightInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDWeaponGun* HeldGunLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDWeaponGun* HeldGunRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDWeaponGun* ActiveGun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOwnerHoldingAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDWeaponBowV2* HeldBowLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDWeaponBowV2* HeldBowRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDWeaponBowV2* ActiveBow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangedGrabOverrideRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETWDPlayerCharacterTickInventory InventorySlotTickGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* PouchRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PouchMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SlotMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* SlotCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* AmmoIconMatInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTWDWidgetComponent* AmmoInfoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* AmmoIconMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTWDAmmoPouchItemInfo CurrentItemInfo;
    
public:
    ATWDAmmoPouch();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasPouchRecentlyRendered(float Tolerance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateItemInfo(const FTWDAmmoPouchItemInfo& ItemInfo);
    
    UFUNCTION(BlueprintCallable)
    int32 GetArrowPropCurrencyCount(UObject* InventoryHolder, ATWDWeaponBow* Bow);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAmmoPropCurrencyCount(UObject* InventoryHolder, ATWDWeaponGun* Gun);
    
    
    // Fix for true pure virtual functions not being implemented
};

