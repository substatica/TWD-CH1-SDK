#include "SDICoreSpectatorPawn.h"

class APlayerState;
class APawn;

bool ASDICoreSpectatorPawn::IsSpectatingReplay(float& OutTime, float& OutDuration, float& OutSpeed, int32& OutSpeedStep) const {
    return false;
}

void ASDICoreSpectatorPawn::InputReleaseReplaySlower() {
}

void ASDICoreSpectatorPawn::InputReleaseReplaySkip() {
}

void ASDICoreSpectatorPawn::InputReleaseReplayRewind() {
}

void ASDICoreSpectatorPawn::InputReleaseReplayPause() {
}

void ASDICoreSpectatorPawn::InputReleaseReplayFaster() {
}

void ASDICoreSpectatorPawn::InputReleasePrevPlayer() {
}

void ASDICoreSpectatorPawn::InputReleasePlayer_9() {
}

void ASDICoreSpectatorPawn::InputReleasePlayer_8() {
}

void ASDICoreSpectatorPawn::InputReleasePlayer_7() {
}

void ASDICoreSpectatorPawn::InputReleasePlayer_6() {
}

void ASDICoreSpectatorPawn::InputReleasePlayer_5() {
}

void ASDICoreSpectatorPawn::InputReleasePlayer_4() {
}

void ASDICoreSpectatorPawn::InputReleasePlayer_3() {
}

void ASDICoreSpectatorPawn::InputReleasePlayer_2() {
}

void ASDICoreSpectatorPawn::InputReleasePlayer_1() {
}

void ASDICoreSpectatorPawn::InputReleasePlayer_0() {
}

void ASDICoreSpectatorPawn::InputReleasePlayer(int32 Index) {
}

void ASDICoreSpectatorPawn::InputReleaseNextPlayer() {
}

void ASDICoreSpectatorPawn::InputPressReplaySlower() {
}

void ASDICoreSpectatorPawn::InputPressReplaySkip() {
}

void ASDICoreSpectatorPawn::InputPressReplayRewind() {
}

void ASDICoreSpectatorPawn::InputPressReplayPause() {
}

void ASDICoreSpectatorPawn::InputPressReplayFaster() {
}

void ASDICoreSpectatorPawn::InputPressPrevPlayer() {
}

void ASDICoreSpectatorPawn::InputPressPlayer_9() {
}

void ASDICoreSpectatorPawn::InputPressPlayer_8() {
}

void ASDICoreSpectatorPawn::InputPressPlayer_7() {
}

void ASDICoreSpectatorPawn::InputPressPlayer_6() {
}

void ASDICoreSpectatorPawn::InputPressPlayer_5() {
}

void ASDICoreSpectatorPawn::InputPressPlayer_4() {
}

void ASDICoreSpectatorPawn::InputPressPlayer_3() {
}

void ASDICoreSpectatorPawn::InputPressPlayer_2() {
}

void ASDICoreSpectatorPawn::InputPressPlayer_1() {
}

void ASDICoreSpectatorPawn::InputPressPlayer_0() {
}

void ASDICoreSpectatorPawn::InputPressPlayer(int32 Index) {
}

void ASDICoreSpectatorPawn::InputPressNextPlayer() {
}

APlayerState* ASDICoreSpectatorPawn::GetViewPlayerState() const {
    return NULL;
}

APawn* ASDICoreSpectatorPawn::GetViewPawn() const {
    return NULL;
}

ASDICoreSpectatorPawn::ASDICoreSpectatorPawn() {
    this->ReplaySkipTime = 30.00f;
    this->ReplayRewindTime = 30.00f;
    this->ReplaySpeedStep = 0;
}

