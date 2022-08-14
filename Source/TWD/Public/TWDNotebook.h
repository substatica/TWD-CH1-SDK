#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDInteractiveBookActor.h"
#include "ETWDNotebookSectionIndex.h"
#include "Engine/EngineTypes.h"
#include "ESDIInteractiveInteractType.h"
#include "UObject/NoExportTypes.h"
#include "ESDIInteractRangeType.h"
#include "SavedLookatNotebookData.h"
#include "ETWDSavedNoteCategory.h"
#include "TWDNotebook.generated.h"

class UPrimitiveComponent;
class USceneComponent;
class UBoxComponent;
class UTWDNonVRNotebookWidget;
class ASDIInventoryActor;
class ASDIPlayerHand;
class UTWDTask;

UCLASS(Blueprintable)
class TWD_API ATWDNotebook : public ATWDInteractiveBookActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETWDNotebookSectionIndex CurrentSectionIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LeftTabsRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TabTasksCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TabTrackingCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TabCharacterCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RightTabsRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TabMapCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TabNotesCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TabExtraCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTWDNonVRNotebookWidget> NonVRNotebookWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNonVRInputActive;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInsideOnRep_bRepInsideInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UPrimitiveComponent*, bool> PreviousVisibility;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<UPrimitiveComponent*, TEnumAsByte<ECollisionEnabled::Type>> PreviousCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTWDNonVRNotebookWidget* NonVRNotebookWidget;
    
public:
    ATWDNotebook();
    UFUNCTION(BlueprintCallable)
    void StopNonVRInteraction();
    
    UFUNCTION(BlueprintCallable)
    void StartNonVRInteraction();
    
    UFUNCTION(BlueprintCallable)
    ASDIInventoryActor* SpawnNoteActor(TSubclassOf<ASDIInventoryActor> NoteClass, FTransform SpawnLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldGrabSavedNoteInsteadOfInteract(ESDIInteractiveInteractType Type, ASDIPlayerHand* hand, ESDIInteractRangeType RangeType, UPrimitiveComponent* Component) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSetupSection();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTabCollision(UPrimitiveComponent* Component) const;
    
    UFUNCTION(BlueprintCallable)
    void InputNonVRPageRight();
    
    UFUNCTION(BlueprintCallable)
    void InputNonVRPageLeft();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTWDTask*> GetTasksSorted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTWDTask*> GetTasks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSavedLookatNotebookData> GetNotesSorted(ETWDSavedNoteCategory Category) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSavedLookatNotebookData> GetNotes(ETWDSavedNoteCategory Category) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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

