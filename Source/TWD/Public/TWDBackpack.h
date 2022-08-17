#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "TWDWeaponActor.h"
#include "TWDBackpackPage.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TWDBackpackUIMeshElement.h"
#include "UObject/NoExportTypes.h"
#include "ESDIInteractiveInteractType.h"
#include "ESDIInteractRangeType.h"
#include "EUIDirection.h"
#include "TWDBackpack.generated.h"

class UBoxComponent;
class ATWDStash;
class UAkAudioEvent;
class UMaterialInstanceDynamic;
class UStaticMeshComponent;
class USDIPointGripComponent;
class ATWDPlayerInventorySlot;
class UChildActorComponent;
class ASDIInventorySlot;
class UTWDNonVRBackpackWidget;
class ASDIInventoryActor;
class USceneComponent;
class UPrimitiveComponent;
class ASDIPlayerHand;
class ATWDBackpackInventorySlot;

UCLASS(Blueprintable)
class TWD_API ATWDBackpack : public ATWDWeaponActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BackpackMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* UIMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlotCollisionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDuringGrabAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsGrabDelayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle RepInsideInventoryDelayTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDelayOldRepInsideInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioBagOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioBagClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioItemRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioItemPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioItemRemoveSpecial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudioItemPlaceSpecial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AvailablePages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActivePageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* NextPageCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* PrevPageCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDIPointGripComponent* PointGripLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDIPointGripComponent* PointGripRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATWDPlayerInventorySlot*> InventorySlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATWDPlayerInventorySlot*> LargeSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* QuickSlotComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATWDPlayerInventorySlot> InventorySlotBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATWDPlayerInventorySlot> SpecialInventorySlotBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTWDNonVRBackpackWidget> NonVRBackpackWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ASDIInventoryActor>> LowPriorityKeyItemClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* InventorySlotRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector InventorySlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTWDBackpackUIMeshElement> UIMeshElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* UIMeshMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LeftArrowMeshElementIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RightArrowMeshElementIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ArrowMeshElementBaseColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ArrowMeshElementHighlightedColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNonVRInputActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveNonVRSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrevNonVRSlotIndex;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D InventorySlotSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTWDBackpackPage> InventoryPages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDBackpackPage SpecialInventoryPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDPlayerInventorySlot* QuickInventorySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInsideOnRep_bRepInsideInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UPrimitiveComponent*, bool> PreviousVisibility;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<UPrimitiveComponent*, TEnumAsByte<ECollisionEnabled::Type>> PreviousCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTWDNonVRBackpackWidget* NonVRBackpackWidget;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ATWDStash> StashActor;
    
    ATWDBackpack(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateSlotIndexForCurrentPage();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopNonVRInteraction();
    
    UFUNCTION(BlueprintCallable)
    void StartNonVRInteraction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    UFUNCTION(BlueprintCallable)
    void QuickInventorySlotChanged(ATWDPlayerInventorySlot* InventorySlot, ASDIInventoryActor* CurrentInventory);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShow();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPageFlip(int32 PrevPageIndex, int32 CurrentPageIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnInventorySlotContentChanged(ATWDPlayerInventorySlot* InvSlot, ASDIInventoryActor* CurrentInventory);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBackpackContentChanged(ASDIInventorySlot* InvSlot, ASDIInventoryActor* CurrentInventory);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAutoPlaceSpecialInventory(ASDIInventorySlot* InvSlot, ASDIInventoryActor* CurrentInventory, bool bShowHMDNotification);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAutoPlaceAmmo(ASDIInventoryActor* InventoryActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NonVRNavigate(EUIDirection Direction);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUIMeshElementVisible(int32 MeshElementIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScrapEnabled() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void InputNonVRScrap();
    
    UFUNCTION(BlueprintCallable)
    void InputNonVRPageRight();
    
    UFUNCTION(BlueprintCallable)
    void InputNonVRPageLeft();
    
    UFUNCTION(BlueprintCallable)
    void InputNonVRNavUp();
    
    UFUNCTION(BlueprintCallable)
    void InputNonVRNavRight();
    
    UFUNCTION(BlueprintCallable)
    void InputNonVRNavLeft();
    
    UFUNCTION(BlueprintCallable)
    void InputNonVRNavDown();
    
    UFUNCTION(BlueprintCallable)
    void InputNonVRInteract();
    
    UFUNCTION(BlueprintCallable)
    void InputNonVRDrop();
    
    UFUNCTION(BlueprintCallable)
    void InputNonVRCancel();
    
    UFUNCTION(BlueprintCallable)
    void InputNonVRBackpackButton();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUIMesh() const;
    
    UFUNCTION(BlueprintCallable)
    void GoToPrevPage();
    
    UFUNCTION(BlueprintCallable)
    void GoToPage(int32 PageIndex);
    
    UFUNCTION(BlueprintCallable)
    void GoToNextPage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetUIMeshElementColor(int32 MeshElementIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDPlayerInventorySlot* GetQuickSlot() const;
    
    UFUNCTION(BlueprintCallable)
    UTWDNonVRBackpackWidget* GetNonVRBackpackWidget();
    
    UFUNCTION(BlueprintPure)
    ATWDPlayerInventorySlot* GetInventorySlotByIdx(uint8 slotIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASDIInventoryActor*> GetBackpackInventoryActors() const;
    
    UFUNCTION(BlueprintCallable)
    ASDIInventorySlot* FindEmptyInventorySlot(ASDIInventoryActor* InventoryActor, int32& OutPage);
    
    UFUNCTION(BlueprintCallable)
    bool AutoPlaceInventory(ASDIInventoryActor* InventoryActor, bool bForceCheckOnlyDontPlace, bool bDisableGotoPage);
    
    UFUNCTION(BlueprintCallable)
    void ActivateNonVRInteraction();
    
};

