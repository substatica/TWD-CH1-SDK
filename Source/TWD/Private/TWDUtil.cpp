#include "TWDUtil.h"

class UTWDGameEntitlements;
class USkeletalMeshComponent;
class UObject;
class AActor;
class UAkAudioEvent;
class UBTNode;
class UDataTable;
class UTWDMapManager;
class UCurveFloat;
class ATWDPlayerCharacter;
class ATWDCharacter;
class UPrimitiveComponent;
class UTWDGameProgression;
class UTWDGameInstance;
class UTWDGameAchievements;
class ASDIHeldActor;
class UTWDPlayerBuffManager;
class UBlendSpaceBase;
class UAkComponent;

void UTWDUtil::UpdateSkeletalMeshCollision(USkeletalMeshComponent* Mesh, const TArray<FName>& DisabledBones, const TArray<FName>& EnabledBones, TArray<int32>& EnabledBonesOut, bool bDisableStrictlyBelow) {
}

void UTWDUtil::SwitchOnFactionReactionToPlayer(const UObject* WorldContextObject, EFaction Faction, EFactionReaction& Reactions) {
}

bool UTWDUtil::PublicCheatsAllowed() {
    return false;
}

bool UTWDUtil::PostAkEvent(UAkAudioEvent* AudioEvent, AActor* Actor) {
    return false;
}

bool UTWDUtil::PlaySoundObjectAttached(AActor* AttachActor, UObject* SoundObj) {
    return false;
}

bool UTWDUtil::PlaySoundObjectAtLocation(UObject* WorldContextObject, UObject* SoundObj, const FVector& Location) {
    return false;
}

FRotator UTWDUtil::OrientToNormal(const FVector& Normal, TEnumAsByte<EAxis::Type> OrientAxis, FRotator InRotation) {
    return FRotator{};
}

FBlackboardKeySelector UTWDUtil::MakeBlackboardKeySelector(UBTNode* NodeOwner, FName KeyName) {
    return FBlackboardKeySelector{};
}

void UTWDUtil::LoadDialogueLine(FDialogueLine& DialogueLine) {
}

void UTWDUtil::LoadDataTablesAsDialogueLines(const TArray<UDataTable*>& DataTables) {
}

FVector UTWDUtil::K2ComputeProjectileAimAssistanceTargetHead(UObject* WorldContextObject, const FVector& StartLocation, const FVector& InitialVelocity, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<ECollisionChannel> CollisionChannel, float PathCollisionRadius, float PathCollisionTime, float TargetRadius, const UCurveFloat* TargetRadiusCurve, float TargetZOffset, const UCurveFloat* TargetZOffsetCurve, float MinResultSpeed, bool bAdjustForTargetVelocity, float DebugRenderTime) {
    return FVector{};
}

bool UTWDUtil::IsFriendlyInLOF(ATWDCharacter* Shooter, ATWDCharacter* Target) {
    return false;
}

bool UTWDUtil::IsCombatEnemy(const ATWDCharacter* RelationSubject, const ATWDCharacter* RelationObject) {
    return false;
}

bool UTWDUtil::IsCombatAlly(const ATWDCharacter* RelationSubject, const ATWDCharacter* RelationObject) {
    return false;
}

bool UTWDUtil::HasLOS(ATWDCharacter* Character, UPrimitiveComponent* ComponentToTest) {
    return false;
}

bool UTWDUtil::HasActiveAkEvents(AActor* Actor) {
    return false;
}

UTWDMapManager* UTWDUtil::GetTWDMapManager(const UObject* WorldContextObject) {
    return NULL;
}

UTWDGameProgression* UTWDUtil::GetTWDGameProgression(const UObject* WorldContextObject) {
    return NULL;
}

UTWDGameInstance* UTWDUtil::GetTWDGameInstance(const UObject* WorldContextObject) {
    return NULL;
}

UTWDGameEntitlements* UTWDUtil::GetTWDGameEntitlements(const UObject* WorldContextObject) {
    return NULL;
}

UTWDGameAchievements* UTWDUtil::GetTWDGameAchievements(const UObject* WorldContextObject) {
    return NULL;
}

FBox UTWDUtil::GetTargetBounds(const USkeletalMeshComponent* Target, FName TargetSocketName) {
    return FBox{};
}

TArray<UDataTable*> UTWDUtil::GetReferencedDataTables(const FName PackageName) {
    return TArray<UDataTable*>();
}

ATWDPlayerCharacter* UTWDUtil::GetLocalPlayerCharacter(const UObject* WorldContextObject) {
    return NULL;
}

UTWDPlayerBuffManager* UTWDUtil::GetHoldingPlayerBuffManager(const ASDIHeldActor* HeldActor) {
    return NULL;
}

EDemoModeType UTWDUtil::GetDemoMode(const UObject* WorldContextObject) {
    return EDemoModeType::DemoMode_None;
}

void UTWDUtil::GetCombatRelation(const ATWDCharacter* RelationSubject, const ATWDCharacter* RelationObject, bool& bIsAlly, bool& bIsEnemy) {
}

ETWDCharacterHitRegion UTWDUtil::GetCharacterHitRegion(USkeletalMeshComponent* Mesh, FName BoneName) {
    return ETWDCharacterHitRegion::None;
}

void UTWDUtil::GetBuildConfiguration(FString& outConfiguration) {
}

float UTWDUtil::GetAnimationLength(UBlendSpaceBase* BlendSpace, FVector BlendInput) {
    return 0.0f;
}

void UTWDUtil::GetActiveStream(const UObject* WorldContextObject, bool& bValidStream, FRandomStream& ActiveStream) {
}

FText UTWDUtil::FormatTextForGender(const UObject* WorldContextObject, FText InText) {
    return FText::GetEmpty();
}

void UTWDUtil::EnableAutoSaving(const UObject* WorldContextObject, bool bForce) {
}

void UTWDUtil::DisableAutoSavingForDuration(const UObject* WorldContextObject, float Duration) {
}

void UTWDUtil::DisableAutoSaving(const UObject* WorldContextObject) {
}

bool UTWDUtil::DebugMenuAllowed() {
    return false;
}

void UTWDUtil::CreateNoise(AActor* Instigator, const FVector& Location, float Radius, float VolumeMultiplier, UAkAudioEvent* AudioEvent, UAkComponent* InAkComponent, FName Tag) {
}

FVector UTWDUtil::ClampPointToCapsule(const FVector& Point, const FTransform& CapsuleTransform, float CapsuleHalfHeight, float CapsuleRadius, float FudgeFactor) {
    return FVector{};
}

void UTWDUtil::CheckPoint(const UObject* WorldContextObject, bool bBeforeThisMoment) {
}

void UTWDUtil::ApplySphericalRadiusImpulses(UObject* WorldContextObject, const FVector& Location, float ImpulseRadius, float ImpulseStrength, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<ERadialImpulseFalloff> FalloffMode) {
}

void UTWDUtil::AddSuspendedLevelSaveContext(const UObject* WorldContextObject, const FString& SaveContext) {
}

FBox UTWDUtil::Add(FBox A, FBox B) {
    return FBox{};
}

UTWDUtil::UTWDUtil() {
}

