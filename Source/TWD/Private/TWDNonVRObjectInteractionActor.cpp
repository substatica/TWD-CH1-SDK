#include "TWDNonVRObjectInteractionActor.h"

class ASDICorePlayerController;
class ATWDPlayerCharacter;
class AActor;



void ATWDNonVRObjectInteractionActor::OnDeviceChanged(ASDICorePlayerController* PC, bool bIsUsingGamePad) {
}

void ATWDNonVRObjectInteractionActor::InputStoreReleased() {
}

void ATWDNonVRObjectInteractionActor::InputStorePressed() {
}

void ATWDNonVRObjectInteractionActor::InputInteractReleased() {
}

void ATWDNonVRObjectInteractionActor::InputInteractPressed() {
}

void ATWDNonVRObjectInteractionActor::InputDropReleased() {
}

void ATWDNonVRObjectInteractionActor::InputDropPressed() {
}

void ATWDNonVRObjectInteractionActor::InputConsumeReleased() {
}

void ATWDNonVRObjectInteractionActor::InputConsumePressed() {
}

bool ATWDNonVRObjectInteractionActor::HandleEquipInput(ATWDPlayerCharacter* Char, const FSDITimestampInputButton& ButtonInput, ETWDNonVREquipmentSlot Slot) {
    return false;
}

FSDITimestampInputButton ATWDNonVRObjectInteractionActor::GetInputStoreButton() const {
    return FSDITimestampInputButton{};
}

FSDITimestampInputButton ATWDNonVRObjectInteractionActor::GetInputInteractButton() const {
    return FSDITimestampInputButton{};
}

FSDITimestampInputButton ATWDNonVRObjectInteractionActor::GetInputDropButton() const {
    return FSDITimestampInputButton{};
}

FSDITimestampInputButton ATWDNonVRObjectInteractionActor::GetInputConsumeButton() const {
    return FSDITimestampInputButton{};
}

TArray<FTWDNonVRInteractionPrompt> ATWDNonVRObjectInteractionActor::GatherInteractionPrompts(AActor* InteractionActor) const {
    return TArray<FTWDNonVRInteractionPrompt>();
}

void ATWDNonVRObjectInteractionActor::EndConsumeAction() {
}

void ATWDNonVRObjectInteractionActor::BeginConsumeAction() {
}

ATWDNonVRObjectInteractionActor::ATWDNonVRObjectInteractionActor() {
    this->bInBackpackMode = false;
}

