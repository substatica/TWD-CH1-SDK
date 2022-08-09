#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDInventoryHolderActor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TWDStashPage.h"
#include "TWDStash.generated.h"

class USceneComponent;
class ATWDPlayerInventorySlot;
class ASDIInventorySlot;
class UBoxComponent;
class ASDIInventoryActor;
class AActor;

UCLASS()
class TWD_API ATWDStash : public ATWDInventoryHolderActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATWDPlayerInventorySlot> InventorySlotBlueprint;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* InventorySlotRoot;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FIntVector InventorySlotCount;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D InventorySlotSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float InventorySlotRadius;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<FTWDStashPage> InventoryPages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ATWDPlayerInventorySlot*> BlueprintCreatedSlots;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<TSubclassOf<ASDIInventoryActor>> SalvageMaterialClasses;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 ActivePageIndex;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 AvailablePages;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBoxComponent* NextPageCollision;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBoxComponent* PrevPageCollision;
    
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* InventoryWallRoot;
    
public:
    ATWDStash();
    UFUNCTION()
    void SaveStashToProgression();
    
    UFUNCTION(BlueprintCallable)
    void SalvageItem(AActor* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStashContentChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSalvageMaterialAdded(UClass* SalvageMatClass, const FText& SalvageMatName, int32 SalvageMatCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPageFlip(int32 PrevPageIndex, int32 CurrentPageIndex);
    
    UFUNCTION()
    void OnInventorySlotContentChanged(ATWDPlayerInventorySlot* InvSlot, ASDIInventoryActor* CurrentInventory);
    
    UFUNCTION()
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
    
    UFUNCTION(BlueprintPure)
    TArray<ATWDPlayerInventorySlot*> GetAllStashInventory() const;
    
    UFUNCTION()
    ASDIInventorySlot* FindEmptyInventorySlot(ASDIInventoryActor* InventoryActor, int32& OutPage);
    
    UFUNCTION(BlueprintPure)
    bool CanSalvage(const AActor* Item) const;
    
    UFUNCTION(BlueprintCallable)
    bool AutoPlaceInventory(ASDIInventoryActor* InventoryActor, bool bForceCheckOnlyDontPlace);
    
};

