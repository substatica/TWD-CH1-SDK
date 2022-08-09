#pragma once
#include "CoreMinimal.h"
#include "SDIInventorySlot.h"
#include "UObject/NoExportTypes.h"
#include "ETWDInventoryType.h"
#include "UObject/NoExportTypes.h"
#include "ETWDPlayerCharacterTickInventory.h"
#include "InventorySlotContentChangedDelegate.h"
#include "ESlotType.h"
#include "ETWDInventorySlot.h"
#include "InputCoreTypes.h"
#include "TWDPlayerInventorySlot.generated.h"

class ASDIInventoryActor;
class UCapsuleComponent;
class UStaticMeshComponent;
class UMaterialInstanceDynamic;
class ATWDBackpack;
class ASDIPlayerHand;
class ASDIHeldActor;
class AActor;
class UMaterialInterface;

UCLASS(Blueprintable)
class ATWDPlayerInventorySlot : public ASDIInventorySlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* SlotCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETWDInventoryType InventoryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InventoryReplacementDropOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreSlotScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateVisualOnTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayInvalidNotificationOnOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor UIIndicator_SlotFullColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor UIIndicator_DefaultColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UIIndicator_SlotFullOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UIIndicator_HighlightOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UIIndicator_DefaultOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETWDPlayerCharacterTickInventory InventorySlotTickGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATWDBackpack* BackpackOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETWDInventoryType> LimitTheseTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* UIIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASDIPlayerHand*> OverlappingHands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASDIInventoryActor* PendingInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSlotFull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInvalidItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bValidItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHighlightValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMeshHighlighted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInteractionHighlight;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventorySlotContentChanged OnCurrentInventoryChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASDIHeldActor* LeftHeldActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASDIHeldActor* RightHeldActor;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ASDIInventoryActor> PreviousInventory;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SlotMesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlotType SlotType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETWDInventorySlot::Type> slotIdx;
    
public:
    ATWDPlayerInventorySlot();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasSlotRecentlyRendered(float Tolerance) const;
    
    UFUNCTION(BlueprintCallable)
    void UpdateVisual(bool bForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void UpdateValidState();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMeshHighlighting(bool bForceUpdate);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMeshColors();
    
    UFUNCTION(BlueprintCallable)
    void SetSlotHighlightActive(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void SetSlotActive(bool bActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateValidState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMeshHighlightedChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldActorGrabbed(ASDIHeldActor* HeldActor, AActor* GrabbedBy, EControllerHand hand, ASDIPlayerHand* PlayerHand);
    
    UFUNCTION(BlueprintCallable)
    void OnHeldActorDropped(ASDIHeldActor* HeldActor, AActor* GrabbedBy, EControllerHand hand, ASDIPlayerHand* PlayerHand);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeldActorChanged(bool bValidHeldActorExists, ASDIHeldActor* LeftHandHeldActor, ASDIHeldActor* RightHandHeldActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsValidInventory(ASDIInventoryActor* Inventory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveInventorySlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InventoryTypeAllowed(ASDIInventoryActor* Inv) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMaterialInterface* GetSheathedInventoryMaterial(ASDIInventoryActor* InvActor);
    
};

