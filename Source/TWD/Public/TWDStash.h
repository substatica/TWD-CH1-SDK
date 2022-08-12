#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDStashPage.h"
#include "TWDInventoryHolderActor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TWDStash.generated.h"

class ATWDPlayerInventorySlot;
class USceneComponent;
class ASDIInventoryActor;
class UBoxComponent;
class AActor;
class ASDIInventorySlot;

UCLASS(Blueprintable)
class TWD_API ATWDStash : public ATWDInventoryHolderActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATWDPlayerInventorySlot> InventorySlotBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* InventorySlotRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector InventorySlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D InventorySlotSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InventorySlotRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTWDStashPage> InventoryPages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATWDPlayerInventorySlot*> BlueprintCreatedSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ASDIInventoryActor>> SalvageMaterialClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActivePageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AvailablePages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* NextPageCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* PrevPageCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* InventoryWallRoot;
    
public:
    ATWDStash();
    UFUNCTION(BlueprintCallable)
    void SaveStashToProgression();
    
    UFUNCTION(BlueprintCallable)
    void SalvageItem(AActor* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStashContentChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSalvageMaterialAdded(UClass* SalvageMatClass, const FText& SalvageMatName, int32 SalvageMatCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPageFlip(int32 PrevPageIndex, int32 CurrentPageIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnInventorySlotContentChanged(ATWDPlayerInventorySlot* InvSlot, ASDIInventoryActor* CurrentInventory);
    
    UFUNCTION(BlueprintCallable)
    void LoadStashFromProgression();
    
    UFUNCTION(BlueprintCallable)
    void InitStolenStashSequence();
    
    UFUNCTION(BlueprintCallable)
    void GoToPrevPage();
    
    UFUNCTION(BlueprintCallable)
    void GoToPage(int32 PageIndex);
    
    UFUNCTION(BlueprintCallable)
    void GoToNextPage();
    
    UFUNCTION(BlueprintPure)
    ATWDPlayerInventorySlot* GetInventorySlotByIdx(uint8 slotIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ATWDPlayerInventorySlot*> GetAllStashInventory() const;
    
    UFUNCTION(BlueprintCallable)
    ASDIInventorySlot* FindEmptyInventorySlot(ASDIInventoryActor* InventoryActor, int32& OutPage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSalvage(const AActor* Item) const;
    
    UFUNCTION(BlueprintCallable)
    bool AutoPlaceInventory(ASDIInventoryActor* InventoryActor, bool bForceCheckOnlyDontPlace);
    
};

