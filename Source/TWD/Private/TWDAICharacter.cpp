#include "TWDAICharacter.h"
#include "Components/MaterialBillboardComponent.h"
#include "Components/TextRenderComponent.h"
#include "TWDAIPerceptionStimuliSource.h"

class AVolume;
class UAnimSequence;

void ATWDAICharacter::UpdateThreatMeter(float DeltaSeconds) {
}

void ATWDAICharacter::UnregisterMenace() {
}

void ATWDAICharacter::SetStimIgnoreVolumes(TArray<AVolume*> Volumes) {
}

void ATWDAICharacter::SetStimAllowVolumes(TArray<AVolume*> Volumes) {
}

void ATWDAICharacter::SetDebugTextEnable(bool bEnable) {
}

void ATWDAICharacter::SetDebugTextColor(FColor Color) {
}

void ATWDAICharacter::SetDebugText(const FText& Text) {
}





void ATWDAICharacter::RemoveAllPathTags() {
}

void ATWDAICharacter::RegisterMenace() {
}

void ATWDAICharacter::OnPauseAI(bool bPause) {
}

bool ATWDAICharacter::IsStimLocationAllowed(const FVector& Location) const {
    return false;
}

bool ATWDAICharacter::IsLocationInStimIgnoreVolume(const FVector& Location) const {
    return false;
}

bool ATWDAICharacter::IsLocationInStimAllowVolume(const FVector& Location) const {
    return false;
}

bool ATWDAICharacter::HasBeenLongSinceLastSeenByPlayer(float ThresholdSeconds) const {
    return false;
}

TArray<AVolume*> ATWDAICharacter::GetStimIgnoreVolumes() const {
    return TArray<AVolume*>();
}

TArray<AVolume*> ATWDAICharacter::GetStimAllowVolumes() const {
    return TArray<AVolume*>();
}

TArray<FTWDAIReactionStateData> ATWDAICharacter::GetReactionStateDataList() {
    return TArray<FTWDAIReactionStateData>();
}

UAnimSequence* ATWDAICharacter::GetAnimSequence(const ETWDCharacterAIAnimationTypes AnimType, bool& ResultFound) const {
    return NULL;
}


void ATWDAICharacter::ComputeDirection(const FVector& Forward, const FVector& Right, const FVector& DirectionWorldSpace, FRotator& OutForwardRotator, ETWDCharacterHitDirection& OutHitDirection) {
}

void ATWDAICharacter::ClearStimVolumes() {
}

void ATWDAICharacter::ClearStimIgnoreVolumes() {
}

void ATWDAICharacter::ClearStimAllowVolumes() {
}

void ATWDAICharacter::AddPathTag(const FGameplayTag& PathTag) {
}

ATWDAICharacter::ATWDAICharacter() {
    this->bFullyAwareOfPlayerUntilSeen = false;
    this->bHasSeenPlayer = false;
    this->DebugInfo = CreateDefaultSubobject<UTextRenderComponent>(TEXT("DebugInfo"));
    this->AIPerceptionStimuliSource = CreateDefaultSubobject<UTWDAIPerceptionStimuliSource>(TEXT("AIPerceptionStimuliSource"));
    this->ThreatMeterIconComponent = CreateDefaultSubobject<UMaterialBillboardComponent>(TEXT("ThreatMeterIconComponent"));
    this->StatusIconState = EStatusIconState::None;
    this->ThreatMeterIconMaterial = NULL;
    this->DialogueIconMaterial = NULL;
    this->ThreatMeterFadeTime = 0.20f;
    this->ThreatMeterAttackHoldTime = 1.00f;
    this->ThreatMeterIconScale = 16.00f;
    this->bThreatMeterEnabled = true;
    this->CurrentTargetKeyName = TEXT("CurrentTarget");
    this->SuspicionStateKeyName = TEXT("SuspicionState");
    this->UROVisibleDistanceFactors.AddDefaulted(4);
    this->bDebugShowSignificance = false;
    this->bDebugShowLOD = false;
    this->AliveAvoidanceGroupMask = 0;
    this->DeadAvoidanceGroupMask = -2147483648;
    this->PathObject = NULL;
    this->CurrentPathId = -1;
    this->PreviousPathID = -1;
    this->BaseHitProbability = 0.50f;
    this->HitAccuracyMultiplier = 1.00f;
    this->bAlwaysSignificant = false;
    this->bNeverSignificant = false;
    this->MenaceRadius = 500.00f;
    this->bIsInGrappleProcess = false;
}

