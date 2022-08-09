#include "TWDGameState.h"

class ULevel;
class UWorld;

void ATWDGameState::StopMusic_Implementation() {
}

void ATWDGameState::StopHordeTimer() {
}

void ATWDGameState::RushBells(float NewDelay) {
}

void ATWDGameState::ReviveTimer() {
}

void ATWDGameState::OnPreHordeTimerComplete() {
}

void ATWDGameState::OnLevelChanged(ULevel* Level, UWorld* World) {
}

void ATWDGameState::OnHordeTimerComplete() {
}

void ATWDGameState::OnBellAlarmTimerComplete() const {
}

void ATWDGameState::MulticastExecuteRingBellsDelegate_Implementation() {
}

void ATWDGameState::K2_StartHordeTimer(float NewDelay) {
}

bool ATWDGameState::IsHordeTimerActive() const {
    return false;
}

bool ATWDGameState::IsAlarmTimerActive() const {
    return false;
}

float ATWDGameState::GetTimeUntilBells() const {
    return 0.0f;
}

float ATWDGameState::GetTimeUntilBellAlarm() const {
    return 0.0f;
}

float ATWDGameState::GetStartTimeUntilBells() {
    return 0.0f;
}

float ATWDGameState::GetPreHordeAutosaveCutoff() const {
    return 0.0f;
}

bool ATWDGameState::GetCharacterSwitchToken() {
    return false;
}

ATWDGameState::ATWDGameState() {
    this->DefaultTimeUntilBells = 1800.00f;
    this->BellAlarmTime = 60.00f;
    this->PreHordeBellTime = 6.00f;
    this->PreHordeAutosaveCutoff = 180.00f;
    this->ActiveSurvivorsMax = 0;
    this->ActiveTotalCharactersMax = 0;
    this->SurvivorMaxSeenSignifanceBucket[0] = 0;
    this->SurvivorMaxSeenSignifanceBucket[1] = 0;
    this->SurvivorMaxSeenSignifanceBucket[2] = 0;
    this->SurvivorMaxSeenSignifanceBucket[3] = 0;
    this->WalkerMaxSeenSignifanceBucket[0] = 0;
    this->WalkerMaxSeenSignifanceBucket[1] = 0;
    this->WalkerMaxSeenSignifanceBucket[2] = 0;
    this->WalkerMaxSeenSignifanceBucket[3] = 0;
    this->ReviveBeforeHordeTimerDelay = 300.00f;
    this->ReviveAfterHordeTimerDelay = 60.00f;
    this->HordeTimerStartTimestamp = 0.00f;
    this->LeastSignificance = 0.00f;
    this->MaxFullsignificanceAllowed = 20;
    this->MaxCharactersSwitchAllowed = 2;
    this->CurrentCharactersSwitch = 0;
}

