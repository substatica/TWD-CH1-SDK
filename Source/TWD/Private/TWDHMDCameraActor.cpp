#include "TWDHMDCameraActor.h"
#include "Templates/SubclassOf.h"
#include "TWDWidgetComponent.h"
#include "Components/SphereComponent.h"

class UAkAudioEvent;
class UTexture2D;
class UTWDRecipe;
class ATWDPlayerController;
class ATWDPlayerCharacter;



bool ATWDHMDCameraActor::ShouldShowHealthStamina() const {
    return false;
}

void ATWDHMDCameraActor::SelectDialogueSelectionWithName(const FName& OptionName) {
}

void ATWDHMDCameraActor::QueueCustomNotification(FText Status, FText Title, UTexture2D* CustomUIIcon, UAkAudioEvent* CustomUIAudio) {
}

void ATWDHMDCameraActor::OnTrackRecipe_Implementation(TSubclassOf<UTWDRecipe> RecipeClass) {
}

void ATWDHMDCameraActor::OnTrackedRecipeUpdate_Implementation(TSubclassOf<UTWDRecipe> RecipeClass) {
}

void ATWDHMDCameraActor::OnScavengingListUpdated_Implementation() {
}

void ATWDHMDCameraActor::OnSaveNote_Implementation(FSavedLookatNotebookData NoteData) {
}

void ATWDHMDCameraActor::OnNotificationComplete() {
}

void ATWDHMDCameraActor::OnNewNotification_Implementation(FTWDUINotification Notification) {
}




bool ATWDHMDCameraActor::IsDialogueSkipVisible() const {
    return false;
}


ATWDPlayerController* ATWDHMDCameraActor::GetPlayerController() const {
    return NULL;
}

float ATWDHMDCameraActor::GetDialogueSkipPercent() const {
    return 0.0f;
}

ATWDPlayerCharacter* ATWDHMDCameraActor::GetControlledPlayerCharacter() const {
    return NULL;
}

ATWDHMDCameraActor::ATWDHMDCameraActor() {
    this->HeadCollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("HeadCollisionSphere"));
    this->bGrappleUIEnabled = true;
    this->bGutsModeUIEnabled = true;
    this->bFoodConsumptionUIEnabled = true;
    this->bPlayerHealthUIEnabled = true;
    this->bPlayerInventoryMessageUIEnabled = true;
    this->bWaveModeCombatUIEnabled = false;
    this->PlayerCharacter = NULL;
    this->PlayerHealthPercent = 0.00f;
    this->PlayerStaminaPercent = 0.00f;
    this->LastPlayerHealthPercent = 0.00f;
    this->LastPlayerStaminaPercent = 0.00f;
    this->bLastSaveRunnableIsActive = false;
    this->SubtitleWidgetComponent = CreateDefaultSubobject<UTWDWidgetComponent>(TEXT("SubtitleWidgetComponent"));
    this->DialogueSelectionWidgetComponent = CreateDefaultSubobject<UTWDWidgetComponent>(TEXT("DialogueSelectionWidgetComponent"));
    this->DialogueAvailabilityWidgetComponent = CreateDefaultSubobject<UTWDWidgetComponent>(TEXT("DialogueAvailabilityWidgetComponent"));
    this->TimeRemainingPercent = -1.00f;
    this->DialogueWidgetLocationSpeed = 4.50f;
    this->DialogueWidgetRotationSpeed = 6.00f;
    this->bFixedDialogueWidgetScale = false;
    this->bAlwaysSnapDialogueWidget = true;
    this->TranslucencySortPriority = 50;
    this->SubtitleAutoDepthMaxDistance = 200.00f;
    this->SubtitleAutoDepthInterpolationSpeed = 2.80f;
    this->SubtitleAutoDepthTraceInterval = 0.28f;
    this->SubtitleWidget = NULL;
    this->DialogueSelectionWidget = NULL;
    this->DialogueAvailabilityWidget = NULL;
    this->bDialogueSelectionWidgetWasVisible = false;
    this->bDialogueAvailabilityWidgetWasVisible = false;
}

