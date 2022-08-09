#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETWDNotebookSectionIndex.h"
#include "TWDInteractiveBookActor.h"
#include "ESDIInteractRangeType.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESDIInteractiveInteractType.h"
#include "SavedLookatNotebookData.h"
#include "ETWDSavedNoteCategory.h"
#include "TWDNotebook.generated.h"

class UTWDNonVRNotebookWidget;
class USceneComponent;
class UBoxComponent;
class ASDIInventoryActor;
class UPrimitiveComponent;
class ASDIPlayerHand;
class UTWDTask;

UCLASS()
class TWD_API ATWDNotebook : public ATWDInteractiveBookActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    ETWDNotebookSectionIndex CurrentSectionIndex;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* LeftTabsRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBoxComponent* TabTasksCollision;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBoxComponent* TabTrackingCollision;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBoxComponent* TabCharacterCollision;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* RightTabsRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBoxComponent* TabMapCollision;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBoxComponent* TabNotesCollision;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UBoxComponent* TabExtraCollision;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTWDNonVRNotebookWidget> NonVRNotebookWidgetClass;
    
    UPROPERTY(BlueprintReadOnly)
    bool bNonVRInputActive;
    
private:
    UPROPERTY(Transient)
    bool bInsideOnRep_bRepInsideInventory;
    
    UPROPERTY(Transient)
    TMap<UPrimitiveComponent*, bool> PreviousVisibility;
    
    UPROPERTY(Transient)
    TMap<UPrimitiveComponent*, TEnumAsByte<ECollisionEnabled::Type>> PreviousCollision;
    
    UPROPERTY(Export, Transient)
    UTWDNonVRNotebookWidget* NonVRNotebookWidget;
    
public:
    ATWDNotebook();
    UFUNCTION(BlueprintCallable)
    void StopNonVRInteraction();
    
    UFUNCTION(BlueprintCallable)
    void StartNonVRInteraction();
    
    UFUNCTION(BlueprintCallable)
    ASDIInventoryActor* SpawnNoteActor(TSubclassOf<ASDIInventoryActor> NoteClass, FTransform SpawnLocation);
    
    UFUNCTION(BlueprintPure)
    bool ShouldGrabSavedNoteInsteadOfInteract(ESDIInteractiveInteractType Type, ASDIPlayerHand* hand, ESDIInteractRangeType RangeType, UPrimitiveComponent* Component) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSetupSection();
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsTabCollision(UPrimitiveComponent* Component) const;
    
    UFUNCTION()
    void InputNonVRPageRight();
    
    UFUNCTION()
    void InputNonVRPageLeft();
    
public:
    UFUNCTION(BlueprintPure)
    TArray<UTWDTask*> GetTasksSorted() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UTWDTask*> GetTasks() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FSavedLookatNotebookData> GetNotesSorted(ETWDSavedNoteCategory Category) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FSavedLookatNotebookData> GetNotes(ETWDSavedNoteCategory Category) const;
    
    UFUNCTION(BlueprintPure)
    TArray<ASDIInventoryActor*> GetInventory() const;
    
    UFUNCTION(BlueprintCallable)
    void FlipToSection(ETWDNotebookSectionIndex Section);
    
    UFUNCTION(BlueprintCallable)
    void FlipToPrevSection();
    
    UFUNCTION(BlueprintCallable)
    void FlipToNextSection();
    
    UFUNCTION(BlueprintCallable)
    void ActivateNonVRInteraction();
    
};

