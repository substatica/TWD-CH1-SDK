#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDIHeldActor.h"
#include "RIntExp.h"
#include "UObject/NoExportTypes.h"
#include "SDIAttachmentInfo.h"
#include "InputCoreTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIInventoryActor.generated.h"

class USceneComponent;
class ASDIInventoryActor;
class ASDIInventorySlot;
class AActor;
class ASDIPlayerHand;
class APawn;

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDIInventoryActor : public ASDIHeldActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient)
    int32 RepInitialRepCountHack;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOverrideInitialRepCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRIntExp InitialRepCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, ReplicatedUsing=OnRep_RepCount)
    int32 RepCount;
    
    UPROPERTY(EditDefaultsOnly)
    bool bMergeOnAddToInventory;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ASDIInventoryActor> MergeClassOverride;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCanDetachComponentsWhenInsideInventory;
    
    UPROPERTY(EditDefaultsOnly)
    bool bReturnOnDrop;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCanBePutInInventorySlot;
    
    UPROPERTY(EditAnywhere)
    bool bLockGripOnGrab;
    
    UPROPERTY(EditDefaultsOnly)
    float DropReturnTime;
    
    UPROPERTY(EditDefaultsOnly)
    float PlayerDropReturnTime;
    
    UPROPERTY(EditDefaultsOnly)
    float DropReturnRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float PlayerDropReturnRadius;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ASDIInventorySlot* Slot;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_RepInventoryOwner)
    AActor* RepInventoryOwner;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AActor* LocalInventoryOwner;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bLocalInventoryOwnerEverSet;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_bRepInsideInventory)
    bool bRepInsideInventory;
    
    UPROPERTY(Transient)
    bool bLocalInsideInventory;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bLocalInsideInventoryEverSet;
    
    UPROPERTY(Transient)
    bool bRemoveOnDrop;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ASDIPlayerHand> LockedHand;
    
    UPROPERTY(Transient)
    FVector PreInventorySlotScale;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    TArray<USceneComponent*> NonDetachableComponents;
    
    UPROPERTY(Transient)
    TMap<USceneComponent*, FSDIAttachmentInfo> InsideInventoryDetachedComponents;
    
public:
    ASDIInventoryActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintPure)
    bool ShouldMergeOnAddToInventory() const;
    
    UFUNCTION(BlueprintCallable)
    void SetSlot(ASDIInventorySlot* NewSlot);
    
    UFUNCTION(BlueprintCallable)
    void SetReturnToInventoryTimer(float Time);
    
    UFUNCTION(BlueprintCallable)
    int32 SetCount(int32 NewCount);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetCount(int32 NewCount);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerReturnToInventory(bool bFromTimer);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRemoveFromInventory();
    
public:
    UFUNCTION()
    void ReturnToInventoryTimer();
    
    UFUNCTION(BlueprintNativeEvent)
    void ReturnToInventory(bool bFromTimer);
    
    UFUNCTION(BlueprintPure)
    bool ReturnOnDrop() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveFromOwner();
    
protected:
    UFUNCTION()
    void OnRep_RepInventoryOwner(AActor* OldRepInventoryOwner);
    
    UFUNCTION()
    void OnRep_RepCount(int32 OldRepCount);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnRep_bRepInsideInventory(bool OldbRepInsideInventory);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnCountChanged(int32 OldCount, int32 NewCount);
    
    UFUNCTION(BlueprintPure)
    bool IsReturnToInventoryTimerActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOwnedByPlayer() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOwnedByAI() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInsideInventory() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool GrabFromInventory(AActor* Grabber, EControllerHand hand, bool bPrimary, ASDIPlayerHand* HandPtr);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GiveTo(AActor* NewOwner);
    
    UFUNCTION(BlueprintNativeEvent)
    void GivenTo(AActor* NewOwner, AActor* OldOwner);
    
    UFUNCTION(BlueprintPure)
    ASDIInventorySlot* GetSlot() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    float GetReturnToInventoryTime() const;
    
public:
    UFUNCTION(BlueprintPure)
    APawn* GetOwnedByPawn() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<ASDIInventoryActor> GetMergeClass() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FTransform GetInventorySlotGripTransform(ASDIInventorySlot* InvSlot, USceneComponent*& GripPoint) const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetInventoryOwner() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCount() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    bool DropFromInventory();
    
    UFUNCTION(BlueprintCallable)
    void ClearReturnToInventoryTimer();
    
    UFUNCTION(BlueprintPure)
    bool CanBePutInInventorySlot() const;
    
    UFUNCTION(BlueprintCallable)
    int32 ApplyCountDelta(int32 Delta);
    
    UFUNCTION(BlueprintCallable)
    void AddDirectlyToInventory(AActor* NewOwner, ASDIInventorySlot* NewSlot);
    
};

