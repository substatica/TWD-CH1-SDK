#include "TWDAIDirector.h"
#include "Components/BoxComponent.h"

class ATWDAIController;

void ATWDAIDirector::SpawnRemainingRoamers() {
}

void ATWDAIDirector::SetPlayerAreaCellPercentage(float NewValue) {
}

bool ATWDAIDirector::RemoveGravityWell(FGuid UniqueId) {
    return false;
}

void ATWDAIDirector::RefreshCellData() {
}

void ATWDAIDirector::ModValueTimerComplete(FGuid UniqueId) {
}


FVector ATWDAIDirector::GetNextRoamTarget(ATWDAIController* AIController) {
    return FVector{};
}

FGuid ATWDAIDirector::AddGravityWell(float Value, FVector Location, float Halflife) {
    return FGuid{};
}

ATWDAIDirector::ATWDAIDirector() {
    this->GridSize = 4;
    this->Bounds = CreateDefaultSubobject<UBoxComponent>(TEXT("Bounds"));
    this->AverageCellValue = 0.00f;
    this->MaxPathLength = 400.00f;
    this->bLimitRoamingToPlayerArea = true;
    this->PlayerAreaCellPercentage = 1.00f;
    this->bRespawnInsidePlayerArea = true;
    this->bShowDebugInGame = false;
    this->DebugHeight = 1000;
    this->RemainingRoamersToRespawn = 0;
    this->RefreshTimeInSeconds = 1.00f;
    this->MaxPlayerTargetAgeBeforeDespawn = 5.00f;
}

