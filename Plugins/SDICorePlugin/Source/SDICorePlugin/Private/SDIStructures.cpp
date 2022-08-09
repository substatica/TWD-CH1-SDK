#include "SDIStructures.h"

class USceneComponent;
class UObject;
class UAkComponent;
class AActor;
class APlayerController;
class AController;

bool USDIStructures::UpdateSDICameraShakeSettingsInstScale(FSDICameraShakeSettingsInst& Shake, float InScale) {
    return false;
}

FVector USDIStructures::UpdateRubberBandVectorTwo(FSDIRubberBandVector& RubberBand, FVector PullTarget, FVector RetractTarget, float DeltaSeconds) {
    return FVector{};
}

FVector USDIStructures::UpdateRubberBandVector(FSDIRubberBandVector& RubberBand, FVector Target, float DeltaSeconds) {
    return FVector{};
}

float USDIStructures::UpdateRubberBandFloatTwo(FSDIRubberBandFloat& RubberBand, float PullTarget, float RetractTarget, float DeltaSeconds) {
    return 0.0f;
}

float USDIStructures::UpdateRubberBandFloat(FSDIRubberBandFloat& RubberBand, float Target, float DeltaSeconds) {
    return 0.0f;
}

FVector USDIStructures::UpdateDoubleRubberBandVectorRetract(FSDIDoubleRubberBandVector& RubberBand, FVector Target, float DeltaSeconds) {
    return FVector{};
}

FVector USDIStructures::UpdateDoubleRubberBandVectorPull(FSDIDoubleRubberBandVector& RubberBand, FVector Target, float DeltaSeconds) {
    return FVector{};
}

FVector USDIStructures::UpdateDoubleRubberBandVector(FSDIDoubleRubberBandVector& RubberBand, FVector PullTarget, FVector RetractTarget, float DeltaSeconds) {
    return FVector{};
}

float USDIStructures::UpdateDoubleRubberBandFloatRetract(FSDIDoubleRubberBandFloat& RubberBand, float Target, float DeltaSeconds) {
    return 0.0f;
}

float USDIStructures::UpdateDoubleRubberBandFloatPull(FSDIDoubleRubberBandFloat& RubberBand, float Target, float DeltaSeconds) {
    return 0.0f;
}

float USDIStructures::UpdateDoubleRubberBandFloat(FSDIDoubleRubberBandFloat& RubberBand, float PullTarget, float RetractTarget, float DeltaSeconds) {
    return 0.0f;
}

void USDIStructures::UnbindTimestampInputButtonOnReleased(FSDITimestampInputButton& Button, FSDIInputButtonReleasedSignature OnReleased) {
}

void USDIStructures::UnbindTimestampInputButtonOnPressed(FSDITimestampInputButton& Button, FSDIInputButtonPressedSignature OnPressed) {
}

void USDIStructures::UnbindInputButtonOnReleased(FSDIInputButton& Button, FSDIInputButtonReleasedSignature OnReleased) {
}

void USDIStructures::UnbindInputButtonOnPressed(FSDIInputButton& Button, FSDIInputButtonPressedSignature OnPressed) {
}

bool USDIStructures::TimestampInputButtonReleased(const FSDITimestampInputButton& Button, float& OutPressedTime) {
    return false;
}

bool USDIStructures::TimestampInputButtonPressed(const FSDITimestampInputButton& Button, float& OutReleasedTime, bool& bOutDoubleTap) {
    return false;
}

float USDIStructures::TimestampInputButtonLongHeldPercent(const FSDITimestampInputButton& Button) {
    return 0.0f;
}

bool USDIStructures::TimestampInputButtonLongHeld(const FSDITimestampInputButton& Button, float& OutTime) {
    return false;
}

bool USDIStructures::TimestampInputButtonHeldFor(const FSDITimestampInputButton& Button, float HoldTime) {
    return false;
}

bool USDIStructures::TimestampInputButtonHeld(const FSDITimestampInputButton& Button, float& OutTime) {
    return false;
}

bool USDIStructures::TimestampInputButtonDoubleTapPossible(const FSDITimestampInputButton& Button) {
    return false;
}

bool USDIStructures::TimestampInputButtonDoubleTapped(const FSDITimestampInputButton& Button) {
    return false;
}

float USDIStructures::TimestampInputButtonDoubleTapLongHeldPercent(const FSDITimestampInputButton& Button) {
    return 0.0f;
}

bool USDIStructures::TimestampInputButtonDoubleTapLongHeld(const FSDITimestampInputButton& Button, float& OutTime) {
    return false;
}

bool USDIStructures::TimestampInputButtonDoubleTapHeldFor(const FSDITimestampInputButton& Button, float HoldTime) {
    return false;
}

bool USDIStructures::TimestampInputButtonDoubleTapHeld(const FSDITimestampInputButton& Button, float& OutTime) {
    return false;
}

float USDIStructures::TickSpringFloat(FSpringFloat& Spring, float DeltaSeconds) {
    return 0.0f;
}

FVector USDIStructures::TickSphericalOscillator(FSphericalOscillator& Oscillator, float DeltaSeconds) {
    return FVector{};
}

float USDIStructures::TickSDICurveAnimation(FSDICurveAnimation& Anim, bool bEngaged, float DeltaTime, float DefaultValue, bool& bOutIsAnimating) {
    return 0.0f;
}

void USDIStructures::TickInputButton(FSDIInputButton& Button, float DeltaSeconds) {
}

float USDIStructures::TickFloatRandomOscillator(FFloatRandomOscillator& Oscillator, float DeltaSeconds, float& OutDelta) {
    return 0.0f;
}

float USDIStructures::TickFloatOscillator(FFloatOscillator& Oscillator, float DeltaSeconds) {
    return 0.0f;
}

void USDIStructures::StopSDICameraShakeSettingsInst(FSDICameraShakeSettingsInst& Shake, bool bImmediately) {
}

void USDIStructures::StopSDIAkAudioEventPairDynamicLoop(FSDIAkAudioEventPairDynamicLoop& Loop) {
}

void USDIStructures::SetVectorPIDProportionalGain(FSDIVectorPIDController& VectorPID, float NewProportionalGain) {
}

void USDIStructures::SetVectorPIDIntegralGain(FSDIVectorPIDController& VectorPID, float NewIntegralGain) {
}

void USDIStructures::SetVectorPIDDerivativeGain(FSDIVectorPIDController& VectorPID, float NewDerivativeGain) {
}

void USDIStructures::SetupComponentReplacement(FSDIComponentReplacement& Replacement, USceneComponent* Comp) {
}

void USDIStructures::SetupAdvComponentReplacement(FSDIComponentReplacement& Replacement, USceneComponent* Comp, USceneComponent* InParent, FName inParentSocket) {
}

void USDIStructures::SetTimestampInputButtonOwner(FSDITimestampInputButton& Button, UObject* Owner) {
}

bool USDIStructures::SetSDIAkAudioEventPairDynamicLoopPlaying(FSDIAkAudioEventPairDynamicLoop& Loop, bool bPlaying, UAkComponent* Component, AActor* Instigator) {
    return false;
}

void USDIStructures::SetRubberBandVectorVelocity(FSDIRubberBandVector& RubberBand, FVector Velocity) {
}

void USDIStructures::SetRubberBandVectorPosition(FSDIRubberBandVector& RubberBand, FVector Position) {
}

void USDIStructures::SetRubberBandFloatVelocity(FSDIRubberBandFloat& RubberBand, float Velocity) {
}

void USDIStructures::SetRubberBandFloatPosition(FSDIRubberBandFloat& RubberBand, float Position) {
}

void USDIStructures::SetReplicatedName(FSDIReplicatedName& Name, FName NewName) {
}

void USDIStructures::SetQuatPIDProportionalGain(FSDIQuatPIDController& QuatPID, float NewProportionalGain) {
}

void USDIStructures::SetQuatPIDIntegralGain(FSDIQuatPIDController& QuatPID, float NewIntegralGain) {
}

void USDIStructures::SetQuatPIDDerivativeGain(FSDIQuatPIDController& QuatPID, float NewDerivativeGain) {
}

void USDIStructures::SetFloatPIDProportionalGain(FSDIFloatPIDController& FloatPID, float NewProportionalGain) {
}

void USDIStructures::SetFloatPIDIntegralGain(FSDIFloatPIDController& FloatPID, float NewIntegralGain) {
}

void USDIStructures::SetFloatPIDDerivativeGain(FSDIFloatPIDController& FloatPID, float NewDerivativeGain) {
}

void USDIStructures::SetDoubleRubberBandVectorVelocity(FSDIDoubleRubberBandVector& RubberBand, FVector Velocity) {
}

void USDIStructures::SetDoubleRubberBandVectorPosition(FSDIDoubleRubberBandVector& RubberBand, FVector Position) {
}

void USDIStructures::SetDoubleRubberBandFloatVelocity(FSDIDoubleRubberBandFloat& RubberBand, float Velocity) {
}

void USDIStructures::SetDoubleRubberBandFloatPosition(FSDIDoubleRubberBandFloat& RubberBand, float Position) {
}

void USDIStructures::SetAttachmentInfo(FSDIAttachmentInfo& AttachmentInfo, USceneComponent* Parent, const FName& SocketName, const FTransform& RelTransform) {
}

bool USDIStructures::SDICameraShakeSettingsInstIsPlaying(const FSDICameraShakeSettingsInst& Shake) {
    return false;
}

void USDIStructures::ResetVectorPID(FSDIVectorPIDController& VectorPID) {
}

FVector USDIStructures::ResetSphericalOscillator(FSphericalOscillator& Oscillator, bool bRandom) {
    return FVector{};
}

void USDIStructures::ResetSDICurveAnimation(FSDICurveAnimation& Anim, bool bAtBeginning) {
}

void USDIStructures::ResetRubberBandVector(FSDIRubberBandVector& RubberBand, FVector Position) {
}

void USDIStructures::ResetRubberBandFloat(FSDIRubberBandFloat& RubberBand, float Position) {
}

void USDIStructures::ResetQVectorExp(FQVectorExp& QVectorExp) {
}

void USDIStructures::ResetQVector2DExp(FQVector2DExp& QVector2DExp) {
}

void USDIStructures::ResetQVector2D(FQVector2D& QVector2D) {
}

void USDIStructures::ResetQVector(FQVector& QVector) {
}

void USDIStructures::ResetQuatPID(FSDIQuatPIDController& QuatPID) {
}

void USDIStructures::ResetQRotatorExp(FQRotatorExp& QRotatorExp) {
}

void USDIStructures::ResetQRotator(FQRotator& QRotator) {
}

void USDIStructures::ResetQIntExp(FQIntExp& QIntExp) {
}

void USDIStructures::ResetQInt(FQInt& QInt) {
}

void USDIStructures::ResetQFloatExp(FQFloatExp& QFloatExp) {
}

void USDIStructures::ResetQFloat(FQFloat& QFloat) {
}

void USDIStructures::ResetMotionHistoryAfter(FSDIMotionHistory& History, float Timespan, bool bReserve) {
}

void USDIStructures::ResetMotionHistory(FSDIMotionHistory& History, bool bReserve) {
}

void USDIStructures::ResetFloatPID(FSDIFloatPIDController& FloatPID) {
}

float USDIStructures::ResetFloatOscillator(FFloatOscillator& Oscillator, bool bRandom) {
    return 0.0f;
}

void USDIStructures::ResetDoubleRubberBandVector(FSDIDoubleRubberBandVector& RubberBand, FVector Position) {
}

void USDIStructures::ResetDoubleRubberBandFloat(FSDIDoubleRubberBandFloat& RubberBand, float Position) {
}

void USDIStructures::ResetAttachmentInfo(FSDIAttachmentInfo& AttachmentInfo) {
}

void USDIStructures::ReplicatedMap_FName_Float_ToMap(const FSDIReplicatedMap_FName_Float& Map, TMap<FName, float>& OutMap) {
}

void USDIStructures::ReplicatedMap_FName_Float_Remove(FSDIReplicatedMap_FName_Float& Map, FName Key) {
}

void USDIStructures::ReplicatedMap_FName_Float_FromMap(FSDIReplicatedMap_FName_Float& Map, const TMap<FName, float>& InMap) {
}

bool USDIStructures::ReplicatedMap_FName_Float_Find(const FSDIReplicatedMap_FName_Float& Map, FName Key, float& OutValue) {
    return false;
}

void USDIStructures::ReplicatedMap_FName_Float_Empty(FSDIReplicatedMap_FName_Float& Map) {
}

void USDIStructures::ReplicatedMap_FName_Float_Add(FSDIReplicatedMap_FName_Float& Map, FName Key, float Value) {
}

void USDIStructures::ReleaseTimestampInputButton(FSDITimestampInputButton& Button) {
}

void USDIStructures::ReleaseInputButton(FSDIInputButton& Button) {
}

int32 USDIStructures::ReferenceCounterGetRefCount(FSDIReferenceCounter& RefCount) {
    return 0;
}

int32 USDIStructures::ReferenceCounterDecRef(FSDIReferenceCounter& RefCount) {
    return 0;
}

int32 USDIStructures::ReferenceCounterAddRef(FSDIReferenceCounter& RefCount) {
    return 0;
}

void USDIStructures::PressTimestampInputButton(FSDITimestampInputButton& Button) {
}

void USDIStructures::PressInputButton(FSDIInputButton& Button) {
}

bool USDIStructures::PointInsideTransformCollisionShape(const FVector& Point, const FSDITransformCollisionShape& Shape) {
    return false;
}

bool USDIStructures::PlaySDICameraShakeSettingsInst(FSDICameraShakeSettingsInst& Shake, APlayerController* PC, float InScale, bool bRestartIfPlaying) {
    return false;
}

bool USDIStructures::PlaySDIAkAudioEventPairDynamicLoop(FSDIAkAudioEventPairDynamicLoop& Loop, UAkComponent* Component, AActor* Instigator) {
    return false;
}

bool USDIStructures::PlaySDIAkAudioEventPairAtLocation(const FSDIAkAudioEventPair& Event, UObject* WorldContextObject, FVector Location, AActor* Instigator) {
    return false;
}

bool USDIStructures::PlaySDIAkAudioEventPair(const FSDIAkAudioEventPair& Event, UAkComponent* Component, AActor* Instigator) {
    return false;
}

bool USDIStructures::MotionHistoryHasContinuousVelocityOnAxis(const FSDIMotionHistory& History, float Timespan, float MinVelocity, ESDIAxis Axis) {
    return false;
}

bool USDIStructures::MotionHistoryHasContinuousVelocity(const FSDIMotionHistory& History, float Timespan, float MinVelocity, FVector Direction) {
    return false;
}

FSDITransform_NetQuantize USDIStructures::MakeTransformNetQuantize(const FTransform& InTransform) {
    return FSDITransform_NetQuantize{};
}

FSDITimestampTransform_NetQuantize USDIStructures::MakeTimestampTransformNetQuantize(const FTransform& InTransform, float InTimestamp) {
    return FSDITimestampTransform_NetQuantize{};
}

FSDITransformCollisionShape USDIStructures::MakeSphereTransformCollisionShape(float SphereRadius, FVector ShapeLocation, FRotator ShapeRotation) {
    return FSDITransformCollisionShape{};
}

FSDICollisionShape USDIStructures::MakeSphereCollisionShape(float SphereRadius) {
    return FSDICollisionShape{};
}

FSDIReplicatedName USDIStructures::MakeReplicatedName(FName InName) {
    return FSDIReplicatedName{};
}

FSDITransformCollisionShape USDIStructures::MakeCapsuleTransformCollisionShape(float CapsuleRadius, float CapsuleHalfHeight, FVector ShapeLocation, FRotator ShapeRotation) {
    return FSDITransformCollisionShape{};
}

FSDICollisionShape USDIStructures::MakeCapsuleCollisionShape(float CapsuleRadius, float CapsuleHalfHeight) {
    return FSDICollisionShape{};
}

FSDITransformCollisionShape USDIStructures::MakeBoxTransformCollisionShape(FVector BoxHalfExtent, FVector ShapeLocation, FRotator ShapeRotation) {
    return FSDITransformCollisionShape{};
}

FSDICollisionShape USDIStructures::MakeBoxCollisionShape(FVector BoxHalfExtent) {
    return FSDICollisionShape{};
}

FSDIDotLerpFloat USDIStructures::LerpDotLerpFloat(const FSDIDotLerpFloat& A, const FSDIDotLerpFloat& B, float Alpha) {
    return FSDIDotLerpFloat{};
}

bool USDIStructures::IsValidFSDIEnumTypeHandle(const FSDIEnumTypeHandle& A) {
    return false;
}

bool USDIStructures::IsTargetBetterThan(const FSDITargetSearchEntry& Entry, const FSDITargetSearchEntry& Other, const FSDITransformCollisionShape& InnerShape, const FSDITransformCollisionShape& OuterShape) {
    return false;
}

bool USDIStructures::IsSDIAkAudioEventPairDynamicLoopPlaying(const FSDIAkAudioEventPairDynamicLoop& Loop) {
    return false;
}

bool USDIStructures::IsNotEqualFSDIEnumTypeHandle(const FSDIEnumTypeHandle& A, const FSDIEnumTypeHandle& B) {
    return false;
}

bool USDIStructures::IsEqualEqualFSDIEnumTypeHandle(const FSDIEnumTypeHandle& A, const FSDIEnumTypeHandle& B) {
    return false;
}

bool USDIStructures::IsEmptyFSDIEnumTypeHandle(const FSDIEnumTypeHandle& A) {
    return false;
}

bool USDIStructures::InputButtonReleased(const FSDIInputButton& Button, float& OutPressedTime) {
    return false;
}

bool USDIStructures::InputButtonPressed(const FSDIInputButton& Button, float& OutReleasedTime, bool& bOutDoubleTap) {
    return false;
}

float USDIStructures::InputButtonLongHeldPercent(const FSDIInputButton& Button) {
    return 0.0f;
}

bool USDIStructures::InputButtonLongHeld(const FSDIInputButton& Button, float& OutTime) {
    return false;
}

bool USDIStructures::InputButtonHeldFor(const FSDIInputButton& Button, float HoldTime) {
    return false;
}

bool USDIStructures::InputButtonHeld(const FSDIInputButton& Button, float& OutTime) {
    return false;
}

bool USDIStructures::InputButtonDoubleTapPossible(const FSDIInputButton& Button) {
    return false;
}

bool USDIStructures::InputButtonDoubleTapped(const FSDIInputButton& Button) {
    return false;
}

float USDIStructures::InputButtonDoubleTapLongHeldPercent(const FSDIInputButton& Button) {
    return 0.0f;
}

bool USDIStructures::InputButtonDoubleTapLongHeld(const FSDIInputButton& Button, float& OutTime) {
    return false;
}

bool USDIStructures::InputButtonDoubleTapHeldFor(const FSDIInputButton& Button, float HoldTime) {
    return false;
}

bool USDIStructures::InputButtonDoubleTapHeld(const FSDIInputButton& Button, float& OutTime) {
    return false;
}

void USDIStructures::InitFloatRandomOscillator(FFloatRandomOscillator& Oscillator, float DesiredDirection) {
}

bool USDIStructures::HasDamageValues(const FSDIDamageData& Damage) {
    return false;
}

FVector USDIStructures::GetVectorPIDManipulatedValue(FSDIVectorPIDController& VectorPID, FVector SetPoint, FVector ProcessValue, float DeltaTime) {
    return FVector{};
}

FVector USDIStructures::GetSphericalOscillator(const FSphericalOscillator& Oscillator) {
    return FVector{};
}

float USDIStructures::GetSDICurveAnimationTime(const FSDICurveAnimation& Anim) {
    return 0.0f;
}

float USDIStructures::GetSDICurveAnimationPercent(const FSDICurveAnimation& Anim) {
    return 0.0f;
}

float USDIStructures::GetSDICurveAnimationDuration(const FSDICurveAnimation& Anim) {
    return 0.0f;
}

FVector USDIStructures::GetRVectorExpAt(const FRVectorExp& RVectorExp, float Interp) {
    return FVector{};
}

FVector USDIStructures::GetRVectorExp(const FRVectorExp& RVectorExp) {
    return FVector{};
}

FVector USDIStructures::GetRVectorAt(const FRVector& RVector, float Interp) {
    return FVector{};
}

FVector2D USDIStructures::GetRVector2DExpAt(const FRVector2DExp& RVector2DExp, float Interp) {
    return FVector2D{};
}

FVector2D USDIStructures::GetRVector2DExp(const FRVector2DExp& RVector2DExp) {
    return FVector2D{};
}

FVector2D USDIStructures::GetRVector2DAt(const FRVector2D& RVector2D, float Interp) {
    return FVector2D{};
}

FVector2D USDIStructures::GetRVector2D(const FRVector2D& RVector2D) {
    return FVector2D{};
}

FVector USDIStructures::GetRVector(const FRVector& RVector) {
    return FVector{};
}

FVector USDIStructures::GetRubberBandVectorVelocity(FSDIRubberBandVector& RubberBand) {
    return FVector{};
}

FVector USDIStructures::GetRubberBandVectorPosition(FSDIRubberBandVector& RubberBand) {
    return FVector{};
}

float USDIStructures::GetRubberBandFloatVelocity(FSDIRubberBandFloat& RubberBand) {
    return 0.0f;
}

float USDIStructures::GetRubberBandFloatPosition(FSDIRubberBandFloat& RubberBand) {
    return 0.0f;
}

FRotator USDIStructures::GetRRotatorExpAt(const FRRotatorExp& RRotatorExp, float Interp) {
    return FRotator{};
}

FRotator USDIStructures::GetRRotatorExp(const FRRotatorExp& RRotatorExp) {
    return FRotator{};
}

FRotator USDIStructures::GetRRotatorAt(const FRRotator& RRotator, float Interp) {
    return FRotator{};
}

FRotator USDIStructures::GetRRotator(const FRRotator& RRotator) {
    return FRotator{};
}

int32 USDIStructures::GetRIntPct(const FRInt& RInt, int32 Value) {
    return 0;
}

int32 USDIStructures::GetRIntExpPct(const FRIntExp& RIntExp, int32 Value) {
    return 0;
}

int32 USDIStructures::GetRIntExpAt(const FRIntExp& RIntExp, float Interp) {
    return 0;
}

int32 USDIStructures::GetRIntExp(const FRIntExp& RIntExp) {
    return 0;
}

int32 USDIStructures::GetRIntAt(const FRInt& RInt, float Interp) {
    return 0;
}

int32 USDIStructures::GetRInt(const FRInt& RInt) {
    return 0;
}

float USDIStructures::GetRFloatPct(const FRFloat& RFloat, float Value) {
    return 0.0f;
}

float USDIStructures::GetRFloatExpPct(const FRFloatExp& RFloatExp, float Value) {
    return 0.0f;
}

float USDIStructures::GetRFloatExpAt(const FRFloatExp& RFloatExp, float Interp) {
    return 0.0f;
}

float USDIStructures::GetRFloatExp(const FRFloatExp& RFloatExp) {
    return 0.0f;
}

float USDIStructures::GetRFloatAt(const FRFloat& RFloat, float Interp) {
    return 0.0f;
}

float USDIStructures::GetRFloat(const FRFloat& RFloat) {
    return 0.0f;
}

FName USDIStructures::GetReplicatedName(const FSDIReplicatedName& Name) {
    return NAME_None;
}

FVector USDIStructures::GetQVectorExp(FQVectorExp& QVectorExp) {
    return FVector{};
}

FVector2D USDIStructures::GetQVector2DExp(FQVector2DExp& QVector2DExp) {
    return FVector2D{};
}

FVector2D USDIStructures::GetQVector2D(FQVector2D& QVector2D) {
    return FVector2D{};
}

FVector USDIStructures::GetQVector(FQVector& QVector) {
    return FVector{};
}

FQuat USDIStructures::GetQuatPIDManipulatedValue(FSDIQuatPIDController& QuatPID, FQuat SetPoint, FQuat ProcessValue, float DeltaTime) {
    return FQuat{};
}

FRotator USDIStructures::GetQRotatorExp(FQRotatorExp& QRotatorExp) {
    return FRotator{};
}

FRotator USDIStructures::GetQRotator(FQRotator& QRotator) {
    return FRotator{};
}

int32 USDIStructures::GetQIntExp(FQIntExp& QIntExp) {
    return 0;
}

int32 USDIStructures::GetQInt(FQInt& QInt) {
    return 0;
}

float USDIStructures::GetQFloatExp(FQFloatExp& QFloatExp) {
    return 0.0f;
}

float USDIStructures::GetQFloat(FQFloat& QFloat) {
    return 0.0f;
}

void USDIStructures::GetMotionHistoryVelocityInfo(const FSDIMotionHistory& History, float Timespan, FVector& MinVel, FVector& AvgVel, FVector& MaxVel, float& ScalarMinVel, float& ScalarAvgVel, float& ScalarMaxVel) {
}

FTransform USDIStructures::GetMotionHistoryTransform(const FSDIMotionHistory& History, float Time) {
    return FTransform{};
}

float USDIStructures::GetMotionHistoryTime(const FSDIMotionHistory& History) {
    return 0.0f;
}

FRotator USDIStructures::GetMotionHistoryRotation(const FSDIMotionHistory& History, float Time) {
    return FRotator{};
}

FQuat USDIStructures::GetMotionHistoryQuat(const FSDIMotionHistory& History, float Time) {
    return FQuat{};
}

FVector USDIStructures::GetMotionHistoryMinVelocity(const FSDIMotionHistory& History, float Timespan, float& ScalarVel) {
    return FVector{};
}

FVector USDIStructures::GetMotionHistoryMinAngularVelocity(const FSDIMotionHistory& History, float Timespan, float& ScalarAngVel) {
    return FVector{};
}

FVector USDIStructures::GetMotionHistoryMinAcceleration(const FSDIMotionHistory& History, float Timespan, float& ScalarAcc) {
    return FVector{};
}

FVector USDIStructures::GetMotionHistoryMaxVelocity(const FSDIMotionHistory& History, float Timespan, float& ScalarVel) {
    return FVector{};
}

float USDIStructures::GetMotionHistoryMaxTime(const FSDIMotionHistory& History) {
    return 0.0f;
}

FVector USDIStructures::GetMotionHistoryMaxAngularVelocity(const FSDIMotionHistory& History, float Timespan, float& ScalarAngVel) {
    return FVector{};
}

FVector USDIStructures::GetMotionHistoryMaxAcceleration(const FSDIMotionHistory& History, float Timespan, float& ScalarAcc) {
    return FVector{};
}

FVector USDIStructures::GetMotionHistoryLocation(const FSDIMotionHistory& History, float Time) {
    return FVector{};
}

FSDIMotionHistoryEntry USDIStructures::GetMotionHistoryLastEntry(const FSDIMotionHistory& History) {
    return FSDIMotionHistoryEntry{};
}

FBox USDIStructures::GetMotionHistoryBounds(const FSDIMotionHistory& History, float Timespan) {
    return FBox{};
}

FVector USDIStructures::GetMotionHistoryAverageVelocity(const FSDIMotionHistory& History, float Timespan, float& ScalarVel) {
    return FVector{};
}

FVector USDIStructures::GetMotionHistoryAverageAngularVelocity(const FSDIMotionHistory& History, float Timespan, float& ScalarAngVel) {
    return FVector{};
}

FVector USDIStructures::GetMotionHistoryAverageAcceleration(const FSDIMotionHistory& History, float Timespan, float& ScalarAcc) {
    return FVector{};
}

void USDIStructures::GetMotionHistoryAngularVelocityInfo(const FSDIMotionHistory& History, float Timespan, FVector& MinAngVel, FVector& AvgAngVel, FVector& MaxAngVel, float& ScalarMinVel, float& ScalarAvgVel, float& ScalarMaxVel) {
}

void USDIStructures::GetMotionHistoryAccelerationInfo(const FSDIMotionHistory& History, float Timespan, FVector& MinAcc, FVector& AvgAcc, FVector& MaxAcc, float& ScalarMinAcc, float& ScalarAvgAcc, float& ScalarMaxAcc) {
}

int32 USDIStructures::GetFSDIEnumTypeHandleNumericalValue(const FSDIEnumTypeHandle& A) {
    return 0;
}

float USDIStructures::GetFloatRandomOscillator(const FFloatRandomOscillator& Oscillator) {
    return 0.0f;
}

float USDIStructures::GetFloatPIDManipulatedValue(FSDIFloatPIDController& FloatPID, float SetPoint, float ProcessValue, float DeltaTime) {
    return 0.0f;
}

float USDIStructures::GetFloatOscillator(const FFloatOscillator& Oscillator) {
    return 0.0f;
}

FVector USDIStructures::GetDoubleRubberBandVectorVelocity(FSDIDoubleRubberBandVector& RubberBand) {
    return FVector{};
}

FVector USDIStructures::GetDoubleRubberBandVectorPosition(FSDIDoubleRubberBandVector& RubberBand) {
    return FVector{};
}

float USDIStructures::GetDoubleRubberBandFloatVelocity(FSDIDoubleRubberBandFloat& RubberBand) {
    return 0.0f;
}

float USDIStructures::GetDoubleRubberBandFloatPosition(FSDIDoubleRubberBandFloat& RubberBand) {
    return 0.0f;
}

FTransform USDIStructures::GetComponentReplacementWorldTransform(const FSDIComponentReplacement& Replacement) {
    return FTransform{};
}

void USDIStructures::GetAttachmentInfoFromComponent(FSDIAttachmentInfo& AttachmentInfo, USceneComponent* Comp) {
}

void USDIStructures::GetAttachmentInfoFromActor(FSDIAttachmentInfo& AttachmentInfo, AActor* Actor) {
}

void USDIStructures::DrawDebugCurvedWedgeGeometry(const UObject* WorldContextObject, const FSDICurvedWedgeGeometry& Wedge, const FTransform& Transform, FLinearColor Color, float Step, bool bDrawCenterLine, bool bPersistent, float LifeTime) {
}

float USDIStructures::DotLerpFloat(const FSDIDotLerpFloat& DotLerp, float DotP) {
    return 0.0f;
}

float USDIStructures::DistanceToTransformCollisionShape(const FVector& Point, const FSDITransformCollisionShape& Shape) {
    return 0.0f;
}

bool USDIStructures::CurvedWedgeGeometryIsShapeInside(const FSDICurvedWedgeGeometry& Wedge, const FTransform& Transform, const FSDITransformCollisionShape& CollisionShape, bool bUseClosestPoint, FVector& OutPoint) {
    return false;
}

bool USDIStructures::CurvedWedgeGeometryIsPointInside(const FSDICurvedWedgeGeometry& Wedge, const FTransform& Transform, const FVector& Point) {
    return false;
}

bool USDIStructures::CurvedWedgeGeometryIsComponentInside(const FSDICurvedWedgeGeometry& Wedge, const FTransform& Transform, const USceneComponent* Component, bool bUseClosestPoint, FVector& OutPoint) {
    return false;
}

bool USDIStructures::CurvedWedgeGeometryIsActorInside(const FSDICurvedWedgeGeometry& Wedge, const FTransform& Transform, const AActor* Actor, bool bUseClosestPoint, FVector& OutPoint, USceneComponent*& OutComponent) {
    return false;
}

float USDIStructures::ComputeSpreadSettingsDegrees(const FSDISpreadSettings& Settings, int32 NumRoundsFired, int32 Shot, int32 NumShots, float AdditionalSpread) {
    return 0.0f;
}

bool USDIStructures::ComponentReplacementAttachChildComponentWorldTransform(const FSDIComponentReplacement& Replacement, USceneComponent* InChild, const FTransform& WorldTransform) {
    return false;
}

bool USDIStructures::ComponentReplacementAttachChildComponentWorld(const FSDIComponentReplacement& Replacement, USceneComponent* InChild) {
    return false;
}

bool USDIStructures::ComponentReplacementAttachChildComponentRelativeTransform(const FSDIComponentReplacement& Replacement, USceneComponent* InChild, const FTransform& RelativeTransform) {
    return false;
}

bool USDIStructures::ComponentReplacementAttachChildComponentRelative(const FSDIComponentReplacement& Replacement, USceneComponent* InChild) {
    return false;
}

bool USDIStructures::ComponentReplacementAttachChildActorWorldTransform(const FSDIComponentReplacement& Replacement, AActor* InChild, const FTransform& WorldTransform) {
    return false;
}

bool USDIStructures::ComponentReplacementAttachChildActorWorld(const FSDIComponentReplacement& Replacement, AActor* InChild) {
    return false;
}

bool USDIStructures::ComponentReplacementAttachChildActorRelativeTransform(const FSDIComponentReplacement& Replacement, AActor* InChild, const FTransform& RelativeTransform) {
    return false;
}

bool USDIStructures::ComponentReplacementAttachChildActorRelative(const FSDIComponentReplacement& Replacement, AActor* InChild) {
    return false;
}

FVector USDIStructures::ClosestPointOnTransformCollisionShape(const FVector& Point, const FSDITransformCollisionShape& Shape, bool bClampToOutside) {
    return FVector{};
}

void USDIStructures::ClearSDICurveAnimation(FSDICurveAnimation& Anim) {
}

void USDIStructures::BindTimestampInputButtonOnReleased(FSDITimestampInputButton& Button, FSDIInputButtonReleasedSignature OnReleased) {
}

void USDIStructures::BindTimestampInputButtonOnPressed(FSDITimestampInputButton& Button, FSDIInputButtonPressedSignature OnPressed) {
}

void USDIStructures::BindInputButtonOnReleased(FSDIInputButton& Button, FSDIInputButtonReleasedSignature OnReleased) {
}

void USDIStructures::BindInputButtonOnPressed(FSDIInputButton& Button, FSDIInputButtonPressedSignature OnPressed) {
}

void USDIStructures::AttachUsingSDIAttachmentSettingsEntry(const FSDIAttachmentSettingsEntry& Entry, AActor* Child, AActor* Parent) {
}

void USDIStructures::AttachUsingSDIAttachmentSettings(const FSDIAttachmentSettings& Settings, AActor* Child, AActor* Parent) {
}

FTransform USDIStructures::ApplySpreadSettingsDegrees(const FSDISpreadSettings& Settings, float SpreadDegrees, const FTransform& ShotTransform, int32 NumRoundsFired, int32 Shot, int32 NumShots) {
    return FTransform{};
}

FTransform USDIStructures::ApplySpreadSettings(const FSDISpreadSettings& Settings, const FTransform& ShotTransform, int32 NumRoundsFired, int32 Shot, int32 NumShots, float AdditionalSpread) {
    return FTransform{};
}

int32 USDIStructures::ApplyRadialDamageData(const FSDIDamageData& Damage, const FVector& InOrigin, TArray<AActor*>& DamagedActors, AController* EventInstigator, AActor* DamageCauser, const TArray<AActor*>& IgnoreActors, float RadialDamageMultiplier, int32 DamageID) {
    return 0;
}

float USDIStructures::ApplyDirectDamageDataTo(const FSDIDamageData& Damage, AActor* Actor, const FVector& InShotDirection, AController* EventInstigator, AActor* DamageCauser, const FVector& InImpactVelocity, float InImpactMass, float HitReactImpulseMultiplier, float InHitReactMinSpeed, float DirectDamageCurveInput, float DirectDamageMultiplier, bool bApplyDirectDamageCurveInputToNonCurve, int32 DamageID) {
    return 0.0f;
}

float USDIStructures::ApplyDirectDamageData(const FSDIDamageData& Damage, const FHitResult& InHitInfo, const FVector& InShotDirection, AController* EventInstigator, AActor* DamageCauser, const FVector& InImpactVelocity, float InImpactMass, float HitReactImpulseMultiplier, float InHitReactMinSpeed, float DirectDamageCurveInput, float DirectDamageMultiplier, bool bApplyDirectDamageCurveInputToNonCurve, int32 DamageID) {
    return 0.0f;
}

int32 USDIStructures::ApplyDamageDataTo(const FSDIDamageData& Damage, AActor* Actor, const FVector& InShotDirection, TArray<AActor*>& DamagedActors, AController* EventInstigator, AActor* DamageCauser, const TArray<AActor*>& IgnoreActors, const FVector& InImpactVelocity, float InImpactMass, float HitReactImpulseMultiplier, float InHitReactMinSpeed, float DirectDamageCurveInput, float DirectDamageMultiplier, float RadialDamageMultiplier, bool bApplyDirectDamageCurveInputToNonCurve, int32 DamageID) {
    return 0;
}

int32 USDIStructures::ApplyDamageData(const FSDIDamageData& Damage, const FHitResult& InHitInfo, const FVector& InShotDirection, TArray<AActor*>& DamagedActors, AController* EventInstigator, AActor* DamageCauser, const TArray<AActor*>& IgnoreActors, const FVector& InImpactVelocity, float InImpactMass, float HitReactImpulseMultiplier, float InHitReactMinSpeed, float DirectDamageCurveInput, float DirectDamageMultiplier, float RadialDamageMultiplier, bool bApplyDirectDamageCurveInputToNonCurve, int32 DamageID) {
    return 0;
}

FTransform USDIStructures::ApplyBlendedSpreadSettingsArr(const TArray<FSDISpreadSettings>& Arr, float Alpha, const FTransform& ShotTransform, int32 NumRoundsFired, int32 Shot, int32 NumShots, float AdditionalSpread) {
    return FTransform{};
}

FTransform USDIStructures::ApplyBlendedSpreadSettings(const FSDISpreadSettings& A, const FSDISpreadSettings& B, float Alpha, const FTransform& ShotTransform, int32 NumRoundsFired, int32 Shot, int32 NumShots, float AdditionalSpread) {
    return FTransform{};
}

void USDIStructures::ApplyAttachmentInfoToComponent(const FSDIAttachmentInfo& AttachmentInfo, USceneComponent* Comp) {
}

void USDIStructures::ApplyAttachmentInfoToActor(const FSDIAttachmentInfo& AttachmentInfo, AActor* Actor) {
}

void USDIStructures::AddTransformToMotionHistoryDeltaTime(FSDIMotionHistory& History, const FTransform& Transform, float DeltaSeconds) {
}

void USDIStructures::AddTransformToMotionHistory(FSDIMotionHistory& History, const FTransform& Transform, float Timestamp, float DeltaSeconds) {
}

void USDIStructures::AddToMotionHistoryDeltaTime(FSDIMotionHistory& History, const FTransform& Transform, const FVector& Velocity, const FVector& Acceleration, const FVector& AngularVelocity, float DeltaSeconds) {
}

void USDIStructures::AddToMotionHistory(FSDIMotionHistory& History, const FTransform& Transform, const FVector& Velocity, const FVector& Acceleration, const FVector& AngularVelocity, float Timestamp, float DeltaSeconds) {
}

void USDIStructures::AddLocationToMotionHistoryDeltaTime(FSDIMotionHistory& History, const FVector& Location, float DeltaSeconds) {
}

void USDIStructures::AddLocationToMotionHistory(FSDIMotionHistory& History, const FVector& Location, float Timestamp, float DeltaSeconds) {
}

USDIStructures::USDIStructures() {
}

