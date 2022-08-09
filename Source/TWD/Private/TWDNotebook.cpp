#include "TWDNotebook.h"
#include "Templates/SubclassOf.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"

class UPrimitiveComponent;
class ASDIInventoryActor;
class UTWDTask;
class ASDIPlayerHand;

void ATWDNotebook::StopNonVRInteraction() {
}

void ATWDNotebook::StartNonVRInteraction() {
}

ASDIInventoryActor* ATWDNotebook::SpawnNoteActor(TSubclassOf<ASDIInventoryActor> NoteClass, FTransform SpawnLocation) {
    return NULL;
}

bool ATWDNotebook::ShouldGrabSavedNoteInsteadOfInteract(ESDIInteractiveInteractType Type, ASDIPlayerHand* hand, ESDIInteractRangeType RangeType, UPrimitiveComponent* Component) const {
    return false;
}

void ATWDNotebook::OnSetupSection_Implementation() {
}

bool ATWDNotebook::IsTabCollision(UPrimitiveComponent* Component) const {
    return false;
}

void ATWDNotebook::InputNonVRPageRight() {
}

void ATWDNotebook::InputNonVRPageLeft() {
}

TArray<UTWDTask*> ATWDNotebook::GetTasksSorted() const {
    return TArray<UTWDTask*>();
}

TArray<UTWDTask*> ATWDNotebook::GetTasks() const {
    return TArray<UTWDTask*>();
}

TArray<FSavedLookatNotebookData> ATWDNotebook::GetNotesSorted(ETWDSavedNoteCategory Category) const {
    return TArray<FSavedLookatNotebookData>();
}

TArray<FSavedLookatNotebookData> ATWDNotebook::GetNotes(ETWDSavedNoteCategory Category) const {
    return TArray<FSavedLookatNotebookData>();
}

TArray<ASDIInventoryActor*> ATWDNotebook::GetInventory() const {
    return TArray<ASDIInventoryActor*>();
}

void ATWDNotebook::FlipToSection(ETWDNotebookSectionIndex Section) {
}

void ATWDNotebook::FlipToPrevSection() {
}

void ATWDNotebook::FlipToNextSection() {
}

void ATWDNotebook::ActivateNonVRInteraction() {
}

ATWDNotebook::ATWDNotebook() {
    this->CurrentSectionIndex = ETWDNotebookSectionIndex::BEGIN;
    this->LeftTabsRoot = CreateDefaultSubobject<USceneComponent>(TEXT("LeftTabsRoot"));
    this->TabTasksCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("TabTasksCollision"));
    this->TabTrackingCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("TabTrackingCollision"));
    this->TabCharacterCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("TabCharacterCollision"));
    this->RightTabsRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RightTabsRoot"));
    this->TabMapCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("TabMapCollision"));
    this->TabNotesCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("TabNotesCollision"));
    this->TabExtraCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("TabExtraCollision"));
    this->NonVRNotebookWidgetClass = NULL;
    this->bNonVRInputActive = false;
    this->bInsideOnRep_bRepInsideInventory = false;
    this->NonVRNotebookWidget = NULL;
}

