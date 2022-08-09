#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDIInteractiveActor.h"
#include "ESDIInteractRangeType.h"
#include "SDIAttachmentInfo.h"
#include "UObject/NoExportTypes.h"
#include "SDIInventorySlot.generated.h"

class ASDIInventoryActor;
class UPrimitiveComponent;
class USceneComponent;
class AActor;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIInventorySlot : public ASDIInteractiveActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASDIInventoryActor> DefaultInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideAttachedInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInterpolateAttachedInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoSetToNextItemOnItemRemoval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowInventoryCollisionForDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowInventoryCollisionForGrab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoManageAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBodyMounted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireCloseLOS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireRangedLOS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASDIInventoryActor* CurrentInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDefaultInventorySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInventoryPutInSlotFailed(ASDIInventoryActor* Inv);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlotAttachedTo(USceneComponent* Component) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBodyMounted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool InventoryAllowed(ASDIInventoryActor* Inv, bool bFromHand) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HideAttachedInventory(ASDIInventoryActor* Inv) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    ASDIInventoryActor* GetNextInventory(int32 Dir, bool bLoop) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetInventoryOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    USceneComponent* GetInventoryAttachPoint(ASDIInventoryActor* Inv, FName& SocketName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDIInventoryActor* GetCurrentInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetBodyMountedInteractLocation(UPrimitiveComponent* Component, const FVector& OriginalLocation, ESDIInteractRangeType RangeType, const FVector& HandLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AttachInventory(ASDIInventoryActor* Inv, bool bAllowInterpolation);
    
};

