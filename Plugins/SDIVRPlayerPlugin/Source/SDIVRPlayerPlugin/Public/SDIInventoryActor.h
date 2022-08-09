#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDIHeldActor.h"
#include "RIntExp.h"
#include "UObject/NoExportTypes.h"
#include "SDIAttachmentInfo.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "SDIInventoryActor.generated.h"

class ASDIInventoryActor;
class ASDIInventorySlot;
class ASDIPlayerHand;
class AActor;
class USceneComponent;
class APawn;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIInventoryActor : public ASDIHeldActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 RepInitialRepCountHack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideInitialRepCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRIntExp InitialRepCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RepCount, meta=(AllowPrivateAccess=true))
    int32 RepCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMergeOnAddToInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASDIInventoryActor> MergeClassOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDetachComponentsWhenInsideInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReturnOnDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBePutInInventorySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockGripOnGrab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropReturnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerDropReturnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropReturnRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerDropReturnRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASDIInventorySlot* Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepInventoryOwner, meta=(AllowPrivateAccess=true))
    AActor* RepInventoryOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* LocalInventoryOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLocalInventoryOwnerEverSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bRepInsideInventory, meta=(AllowPrivateAccess=true))
    bool bRepInsideInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLocalInsideInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLocalInsideInventoryEverSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRemoveOnDrop;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ASDIPlayerHand> LockedHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector PreInventorySlotScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> NonDetachableComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<USceneComponent*, FSDIAttachmentInfo> InsideInventoryDetachedComponents;
    
public:
    ASDIInventoryActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMergeOnAddToInventory() const;
    
    UFUNCTION(BlueprintCallable)
    void SetSlot(ASDIInventorySlot* NewSlot);
    
    UFUNCTION(BlueprintCallable)
    void SetReturnToInventoryTimer(float Time);
    
    UFUNCTION(BlueprintCallable)
    int32 SetCount(int32 NewCount);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetCount(int32 NewCount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReturnToInventory(bool bFromTimer);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRemoveFromInventory();
    
public:
    UFUNCTION(BlueprintCallable)
    void ReturnToInventoryTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReturnToInventory(bool bFromTimer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ReturnOnDrop() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveFromOwner();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RepInventoryOwner(AActor* OldRepInventoryOwner);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepCount(int32 OldRepCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_bRepInsideInventory(bool OldbRepInsideInventory);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCountChanged(int32 OldCount, int32 NewCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReturnToInventoryTimerActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwnedByPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwnedByAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInsideInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GrabFromInventory(AActor* Grabber, EControllerHand hand, bool bPrimary, ASDIPlayerHand* HandPtr);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GiveTo(AActor* NewOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GivenTo(AActor* NewOwner, AActor* OldOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDIInventorySlot* GetSlot() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetReturnToInventoryTime() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetOwnedByPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ASDIInventoryActor> GetMergeClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FTransform GetInventorySlotGripTransform(ASDIInventorySlot* InvSlot, USceneComponent*& GripPoint) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetInventoryOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCount() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    bool DropFromInventory();
    
    UFUNCTION(BlueprintCallable)
    void ClearReturnToInventoryTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBePutInInventorySlot() const;
    
    UFUNCTION(BlueprintCallable)
    int32 ApplyCountDelta(int32 Delta);
    
    UFUNCTION(BlueprintCallable)
    void AddDirectlyToInventory(AActor* NewOwner, ASDIInventorySlot* NewSlot);
    
};

