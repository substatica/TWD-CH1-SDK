#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDWeaponActor.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TWDBackpackUIMeshElement.h"
#include "UObject/NoExportTypes.h"
#include "TWDBackpackPage.h"
#include "ESDIInteractRangeType.h"
#include "Engine/EngineTypes.h"
#include "ESDIInteractiveInteractType.h"
#include "EUIDirection.h"
#include "TWDBackpack.generated.h"

class ASDIInventorySlot;
class UBoxComponent;
class UAkAudioEvent;
class UMaterialInstanceDynamic;
class UStaticMeshComponent;
class USDIPointGripComponent;
class ATWDPlayerInventorySlot;
class UChildActorComponent;
class UTWDNonVRBackpackWidget;
class ASDIInventoryActor;
class USceneComponent;
class UPrimitiveComponent;
class ATWDStash;
class ASDIPlayerHand;
class ATWDBackpackInventorySlot;

UCLASS()
class TWD_API ATWDBackpack : public ATWDWeaponActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* BackpackMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* UIMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float SlotCollisionRadius;
    
    UPROPERTY(Transient)
    bool bDuringGrabAction;
    
    UPROPERTY(Transient)
    bool bIsGrabDelayed;
    
    UPROPERTY(Transient)
    FTimerHandle RepInsideInventoryDelayTimer;
    
    UPROPERTY(Transient)
    bool bDelayOldRepInsideInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* AudioBagOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* AudioBagClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* AudioItemRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* AudioItemPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* AudioItemRemoveSpecial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* AudioItemPlaceSpecial;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 AvailablePages;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ActivePageIndex;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBoxComponent* NextPageCollision;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBoxComponent* PrevPageCollision;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USDIPointGripComponent* PointGripLeft;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USDIPointGripComponent* PointGripRight;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<ATWDPlayerInventorySlot*> InventorySlots;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<ATWDPlayerInventorySlot*> LargeSlots;
    
    UPROPERTY(Export, VisibleAnywhere)
    UChildActorComponent* QuickSlotComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATWDPlayerInventorySlot> InventorySlotBlueprint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATWDPlayerInventorySlot> SpecialInventorySlotBlueprint;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTWDNonVRBackpackWidget> NonVRBackpackWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSoftClassPtr<ASDIInventoryActor>> LowPriorityKeyItemClasses;
    
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* InventorySlotRoot;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FIntVector InventorySlotCount;
    
    UPROPERTY(Transient)
    TArray<FTWDBackpackUIMeshElement> UIMeshElements;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* UIMeshMaterialInstance;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    int32 LeftArrowMeshElementIndex;
    
    UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
    int32 RightArrowMeshElementIndex;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLinearColor ArrowMeshElementBaseColor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLinearColor ArrowMeshElementHighlightedColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bNonVRInputActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ActiveNonVRSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PrevNonVRSlotIndex;
    
private:
    UPROPERTY(EditDefaultsOnly)
    FVector2D InventorySlotSpacing;
    
    UPROPERTY()
    TArray<FTWDBackpackPage> InventoryPages;
    
    UPROPERTY()
    FTWDBackpackPage SpecialInventoryPage;
    
    UPROPERTY()
    ATWDPlayerInventorySlot* QuickInventorySlot;
    
    UPROPERTY(Transient)
    bool bInsideOnRep_bRepInsideInventory;
    
    UPROPERTY(Transient)
    TMap<UPrimitiveComponent*, bool> PreviousVisibility;
    
    UPROPERTY(Transient)
    TMap<UPrimitiveComponent*, TEnumAsByte<ECollisionEnabled::Type>> PreviousCollision;
    
    UPROPERTY(Export, Transient)
    UTWDNonVRBackpackWidget* NonVRBackpackWidget;
    
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    TSoftObjectPtr<ATWDStash> StashActor;
    
    ATWDBackpack();
protected:
    UFUNCTION()
    void UpdateSlotIndexForCurrentPage();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopNonVRInteraction();
    
    UFUNCTION(BlueprintCallable)
    void StartNonVRInteraction();
    
    UFUNCTION(BlueprintPure)
    bool ShouldGrabInventoryInsteadOfInteract(ESDIInteractiveInteractType Type, ASDIPlayerHand* hand, ESDIInteractRangeType RangeType, UPrimitiveComponent* Component) const;
    
    UFUNCTION(BlueprintCallable)
    void SetUIMeshElementVisible(int32 MeshElementIndex, bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetUIMeshElementColor(int32 MeshElementIndex, const FLinearColor& Color);
    
    UFUNCTION(BlueprintCallable)
    void SetSlotUIMeshElementVisible(ATWDBackpackInventorySlot* InvSlot, bool bVisible, bool bAuxVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetAvailablePages(int32 NewAvailablePages);
    
    UFUNCTION(BlueprintCallable)
    void RefreshBackpackSlots();
    
private:
    UFUNCTION()
    void QuickInventorySlotChanged(ATWDPlayerInventorySlot* InventorySlot, ASDIInventoryActor* CurrentInventory);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnShow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPageFlip(int32 PrevPageIndex, int32 CurrentPageIndex);
    
    UFUNCTION()
    void OnInventorySlotContentChanged(ATWDPlayerInventorySlot* InvSlot, ASDIInventoryActor* CurrentInventory);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBackpackContentChanged(ASDIInventorySlot* InvSlot, ASDIInventoryActor* CurrentInventory);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAutoPlaceSpecialInventory(ASDIInventorySlot* InvSlot, ASDIInventoryActor* CurrentInventory, bool bShowHMDNotification);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAutoPlaceAmmo(ASDIInventoryActor* InventoryActor);
    
protected:
    UFUNCTION()
    void NonVRNavigate(EUIDirection Direction);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsUIMeshElementVisible(int32 MeshElementIndex) const;
    
    UFUNCTION(BlueprintPure)
    bool IsScrapEnabled() const;
    
protected:
    UFUNCTION()
    void InputNonVRScrap();
    
    UFUNCTION()
    void InputNonVRPageRight();
    
    UFUNCTION()
    void InputNonVRPageLeft();
    
    UFUNCTION()
    void InputNonVRNavUp();
    
    UFUNCTION()
    void InputNonVRNavRight();
    
    UFUNCTION()
    void InputNonVRNavLeft();
    
    UFUNCTION()
    void InputNonVRNavDown();
    
    UFUNCTION()
    void InputNonVRInteract();
    
    UFUNCTION()
    void InputNonVRDrop();
    
    UFUNCTION()
    void InputNonVRCancel();
    
    UFUNCTION()
    void InputNonVRBackpackButton();
    
public:
    UFUNCTION(BlueprintPure)
    bool HasUIMesh() const;
    
    UFUNCTION(BlueprintCallable)
    void GoToPrevPage();
    
    UFUNCTION(BlueprintCallable)
    void GoToPage(int32 PageIndex);
    
    UFUNCTION(BlueprintCallable)
    void GoToNextPage();
    
    UFUNCTION(BlueprintPure)
    FLinearColor GetUIMeshElementColor(int32 MeshElementIndex) const;
    
    UFUNCTION(BlueprintPure)
    ATWDPlayerInventorySlot* GetQuickSlot() const;
    
    UFUNCTION(BlueprintCallable)
    UTWDNonVRBackpackWidget* GetNonVRBackpackWidget();
    
    UFUNCTION(BlueprintPure)
    ATWDPlayerInventorySlot* GetInventorySlotByIdx(uint8 slotIdx) const;
    
    UFUNCTION(BlueprintPure)
    TArray<ASDIInventoryActor*> GetBackpackInventoryActors() const;
    
    UFUNCTION()
    ASDIInventorySlot* FindEmptyInventorySlot(ASDIInventoryActor* InventoryActor, int32& OutPage);
    
    UFUNCTION(BlueprintCallable)
    bool AutoPlaceInventory(ASDIInventoryActor* InventoryActor, bool bForceCheckOnlyDontPlace, bool bDisableGotoPage);
    
    UFUNCTION(BlueprintCallable)
    void ActivateNonVRInteraction();
    
};

