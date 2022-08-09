#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDIInteractiveActor.h"
#include "SDIAttachmentInfo.h"
#include "ESDIInteractRangeType.h"
#include "UObject/NoExportTypes.h"
#include "SDIInventorySlot.generated.h"

class UPrimitiveComponent;
class ASDIInventoryActor;
class USceneComponent;
class AActor;

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDIInventorySlot : public ASDIInteractiveActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<ASDIInventoryActor> DefaultInventory;
    
    UPROPERTY(EditAnywhere)
    bool bHideAttachedInventory;
    
    UPROPERTY(EditAnywhere)
    bool bInterpolateAttachedInventory;
    
    UPROPERTY(EditAnywhere)
    bool bAutoSetToNextItemOnItemRemoval;
    
    UPROPERTY(EditAnywhere)
    bool bAllowInventoryCollisionForDrop;
    
    UPROPERTY(EditAnywhere)
    bool bAllowInventoryCollisionForGrab;
    
    UPROPERTY(EditAnywhere)
    bool bAutoManageAttachment;
    
    UPROPERTY(EditAnywhere)
    bool bBodyMounted;
    
    UPROPERTY(EditAnywhere)
    bool bRequireCloseLOS;
    
    UPROPERTY(EditAnywhere)
    bool bRequireRangedLOS;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ASDIInventoryActor* CurrentInventory;
    
    UPROPERTY(Transient)
    bool bDefaultInventorySet;
    
    UPROPERTY(Transient)
    FSDIAttachmentInfo SlotAttachment;
    
public:
    ASDIInventorySlot();
    UFUNCTION(BlueprintCallable)
    void SetDefaultInventory(bool bForce);
    
    UFUNCTION(BlueprintCallable)
    ASDIInventoryActor* SetCurrentInventoryToNext(int32 Dir, bool bLoop);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ASDIInventoryActor* SetCurrentInventory(ASDIInventoryActor* Inv);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyMounted(bool bMounted);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoManageAttachment(bool bInAutoManageAttachment);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnInventoryPutInSlotFailed(ASDIInventoryActor* Inv);
    
    UFUNCTION(BlueprintPure)
    bool IsSlotAttachedTo(USceneComponent* Component) const;
    
    UFUNCTION(BlueprintPure)
    bool IsBodyMounted() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool InventoryAllowed(ASDIInventoryActor* Inv, bool bFromHand) const;
    
    UFUNCTION(BlueprintPure)
    bool HideAttachedInventory(ASDIInventoryActor* Inv) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    ASDIInventoryActor* GetNextInventory(int32 Dir, bool bLoop) const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetInventoryOwner() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    USceneComponent* GetInventoryAttachPoint(ASDIInventoryActor* Inv, FName& SocketName) const;
    
    UFUNCTION(BlueprintPure)
    ASDIInventoryActor* GetCurrentInventory() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FVector GetBodyMountedInteractLocation(UPrimitiveComponent* Component, const FVector& OriginalLocation, ESDIInteractRangeType RangeType, const FVector& HandLocation) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool AttachInventory(ASDIInventoryActor* Inv, bool bAllowInterpolation);
    
};

