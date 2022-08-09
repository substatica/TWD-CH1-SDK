#pragma once
#include "CoreMinimal.h"
#include "SDIInputButtonPressedSignatureDelegate.h"
#include "SDIRubberBandVector.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RInt.h"
#include "SDIReplicatedName.h"
#include "SDICameraShakeSettingsInst.h"
#include "SDIDotLerpFloat.h"
#include "UObject/NoExportTypes.h"
#include "SDIComponentReplacement.h"
#include "SDIRubberBandFloat.h"
#include "QFloatExp.h"
#include "SDIDoubleRubberBandVector.h"
#include "SDITimestampInputButton.h"
#include "SDIDoubleRubberBandFloat.h"
#include "UObject/NoExportTypes.h"
#include "SDIInputButtonReleasedSignatureDelegate.h"
#include "SDIInputButton.h"
#include "SpringFloat.h"
#include "UObject/NoExportTypes.h"
#include "SphericalOscillator.h"
#include "SDICurveAnimation.h"
#include "SDIFloatPIDController.h"
#include "FloatRandomOscillator.h"
#include "QInt.h"
#include "SDIAttachmentInfo.h"
#include "FloatOscillator.h"
#include "SDIAkAudioEventPairDynamicLoop.h"
#include "SDIVectorPIDController.h"
#include "QIntExp.h"
#include "QVector2D.h"
#include "SDIQuatPIDController.h"
#include "QVectorExp.h"
#include "QVector2DExp.h"
#include "QVector.h"
#include "QRotator.h"
#include "QRotatorExp.h"
#include "QFloat.h"
#include "SDIMotionHistory.h"
#include "SDIReplicatedMap_FName_Float.h"
#include "SDIReferenceCounter.h"
#include "SDITargetSearchEntry.h"
#include "SDITransformCollisionShape.h"
#include "SDIAkAudioEventPair.h"
#include "ESDIAxis.h"
#include "SDITimestampTransform_NetQuantize.h"
#include "SDITransform_NetQuantize.h"
#include "UObject/NoExportTypes.h"
#include "SDICollisionShape.h"
#include "SDIEnumTypeHandle.h"
#include "SDIDamageData.h"
#include "RVector.h"
#include "RVectorExp.h"
#include "RVector2D.h"
#include "RVector2DExp.h"
#include "RRotatorExp.h"
#include "RRotator.h"
#include "RIntExp.h"
#include "RFloatExp.h"
#include "RFloat.h"
#include "UObject/NoExportTypes.h"
#include "SDIMotionHistoryEntry.h"
#include "UObject/NoExportTypes.h"
#include "SDICurvedWedgeGeometry.h"
#include "UObject/NoExportTypes.h"
#include "SDISpreadSettings.h"
#include "SDIAttachmentSettingsEntry.h"
#include "SDIAttachmentSettings.h"
#include "Engine/EngineTypes.h"
#include "SDIStructures.generated.h"

class AActor;
class APlayerController;
class USceneComponent;
class UObject;
class UAkComponent;
class AController;

UCLASS(Blueprintable)
class SDICOREPLUGIN_API USDIStructures : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USDIStructures();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool UpdateSDICameraShakeSettingsInstScale(UPARAM(Ref) FSDICameraShakeSettingsInst& Shake, float InScale);
    
    UFUNCTION(BlueprintCallable)
    static FVector UpdateRubberBandVectorTwo(UPARAM(Ref) FSDIRubberBandVector& RubberBand, FVector PullTarget, FVector RetractTarget, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    static FVector UpdateRubberBandVector(UPARAM(Ref) FSDIRubberBandVector& RubberBand, FVector Target, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    static float UpdateRubberBandFloatTwo(UPARAM(Ref) FSDIRubberBandFloat& RubberBand, float PullTarget, float RetractTarget, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    static float UpdateRubberBandFloat(UPARAM(Ref) FSDIRubberBandFloat& RubberBand, float Target, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    static FVector UpdateDoubleRubberBandVectorRetract(UPARAM(Ref) FSDIDoubleRubberBandVector& RubberBand, FVector Target, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    static FVector UpdateDoubleRubberBandVectorPull(UPARAM(Ref) FSDIDoubleRubberBandVector& RubberBand, FVector Target, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    static FVector UpdateDoubleRubberBandVector(UPARAM(Ref) FSDIDoubleRubberBandVector& RubberBand, FVector PullTarget, FVector RetractTarget, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    static float UpdateDoubleRubberBandFloatRetract(UPARAM(Ref) FSDIDoubleRubberBandFloat& RubberBand, float Target, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    static float UpdateDoubleRubberBandFloatPull(UPARAM(Ref) FSDIDoubleRubberBandFloat& RubberBand, float Target, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    static float UpdateDoubleRubberBandFloat(UPARAM(Ref) FSDIDoubleRubberBandFloat& RubberBand, float PullTarget, float RetractTarget, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    static void UnbindTimestampInputButtonOnReleased(UPARAM(Ref) FSDITimestampInputButton& Button, FSDIInputButtonReleasedSignature OnReleased);
    
    UFUNCTION(BlueprintCallable)
    static void UnbindTimestampInputButtonOnPressed(UPARAM(Ref) FSDITimestampInputButton& Button, FSDIInputButtonPressedSignature OnPressed);
    
    UFUNCTION(BlueprintCallable)
    static void UnbindInputButtonOnReleased(UPARAM(Ref) FSDIInputButton& Button, FSDIInputButtonReleasedSignature OnReleased);
    
    UFUNCTION(BlueprintCallable)
    static void UnbindInputButtonOnPressed(UPARAM(Ref) FSDIInputButton& Button, FSDIInputButtonPressedSignature OnPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TimestampInputButtonReleased(const FSDITimestampInputButton& Button, float& OutPressedTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TimestampInputButtonPressed(const FSDITimestampInputButton& Button, float& OutReleasedTime, bool& bOutDoubleTap);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float TimestampInputButtonLongHeldPercent(const FSDITimestampInputButton& Button);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TimestampInputButtonLongHeld(const FSDITimestampInputButton& Button, float& OutTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TimestampInputButtonHeldFor(const FSDITimestampInputButton& Button, float HoldTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TimestampInputButtonHeld(const FSDITimestampInputButton& Button, float& OutTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TimestampInputButtonDoubleTapPossible(const FSDITimestampInputButton& Button);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TimestampInputButtonDoubleTapped(const FSDITimestampInputButton& Button);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float TimestampInputButtonDoubleTapLongHeldPercent(const FSDITimestampInputButton& Button);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TimestampInputButtonDoubleTapLongHeld(const FSDITimestampInputButton& Button, float& OutTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TimestampInputButtonDoubleTapHeldFor(const FSDITimestampInputButton& Button, float HoldTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TimestampInputButtonDoubleTapHeld(const FSDITimestampInputButton& Button, float& OutTime);
    
    UFUNCTION(BlueprintCallable)
    static float TickSpringFloat(UPARAM(Ref) FSpringFloat& Spring, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    static FVector TickSphericalOscillator(UPARAM(Ref) FSphericalOscillator& Oscillator, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    static float TickSDICurveAnimation(UPARAM(Ref) FSDICurveAnimation& Anim, bool bEngaged, float DeltaTime, float DefaultValue, bool& bOutIsAnimating);
    
    UFUNCTION(BlueprintCallable)
    static void TickInputButton(UPARAM(Ref) FSDIInputButton& Button, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    static float TickFloatRandomOscillator(UPARAM(Ref) FFloatRandomOscillator& Oscillator, float DeltaSeconds, float& OutDelta);
    
    UFUNCTION(BlueprintCallable)
    static float TickFloatOscillator(UPARAM(Ref) FFloatOscillator& Oscillator, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopSDICameraShakeSettingsInst(UPARAM(Ref) FSDICameraShakeSettingsInst& Shake, bool bImmediately);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopSDIAkAudioEventPairDynamicLoop(UPARAM(Ref) FSDIAkAudioEventPairDynamicLoop& Loop);
    
    UFUNCTION(BlueprintCallable)
    static void SetVectorPIDProportionalGain(UPARAM(Ref) FSDIVectorPIDController& VectorPID, float NewProportionalGain);
    
    UFUNCTION(BlueprintCallable)
    static void SetVectorPIDIntegralGain(UPARAM(Ref) FSDIVectorPIDController& VectorPID, float NewIntegralGain);
    
    UFUNCTION(BlueprintCallable)
    static void SetVectorPIDDerivativeGain(UPARAM(Ref) FSDIVectorPIDController& VectorPID, float NewDerivativeGain);
    
    UFUNCTION(BlueprintCallable)
    static void SetupComponentReplacement(UPARAM(Ref) FSDIComponentReplacement& Replacement, USceneComponent* Comp);
    
    UFUNCTION(BlueprintCallable)
    static void SetupAdvComponentReplacement(UPARAM(Ref) FSDIComponentReplacement& Replacement, USceneComponent* Comp, USceneComponent* InParent, FName inParentSocket);
    
    UFUNCTION(BlueprintCallable)
    static void SetTimestampInputButtonOwner(UPARAM(Ref) FSDITimestampInputButton& Button, UObject* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool SetSDIAkAudioEventPairDynamicLoopPlaying(UPARAM(Ref) FSDIAkAudioEventPairDynamicLoop& Loop, bool bPlaying, UAkComponent* Component, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static void SetRubberBandVectorVelocity(UPARAM(Ref) FSDIRubberBandVector& RubberBand, FVector Velocity);
    
    UFUNCTION(BlueprintCallable)
    static void SetRubberBandVectorPosition(UPARAM(Ref) FSDIRubberBandVector& RubberBand, FVector Position);
    
    UFUNCTION(BlueprintCallable)
    static void SetRubberBandFloatVelocity(UPARAM(Ref) FSDIRubberBandFloat& RubberBand, float Velocity);
    
    UFUNCTION(BlueprintCallable)
    static void SetRubberBandFloatPosition(UPARAM(Ref) FSDIRubberBandFloat& RubberBand, float Position);
    
    UFUNCTION(BlueprintCallable)
    static void SetReplicatedName(UPARAM(Ref) FSDIReplicatedName& Name, FName NewName);
    
    UFUNCTION(BlueprintCallable)
    static void SetQuatPIDProportionalGain(UPARAM(Ref) FSDIQuatPIDController& QuatPID, float NewProportionalGain);
    
    UFUNCTION(BlueprintCallable)
    static void SetQuatPIDIntegralGain(UPARAM(Ref) FSDIQuatPIDController& QuatPID, float NewIntegralGain);
    
    UFUNCTION(BlueprintCallable)
    static void SetQuatPIDDerivativeGain(UPARAM(Ref) FSDIQuatPIDController& QuatPID, float NewDerivativeGain);
    
    UFUNCTION(BlueprintCallable)
    static void SetFloatPIDProportionalGain(UPARAM(Ref) FSDIFloatPIDController& FloatPID, float NewProportionalGain);
    
    UFUNCTION(BlueprintCallable)
    static void SetFloatPIDIntegralGain(UPARAM(Ref) FSDIFloatPIDController& FloatPID, float NewIntegralGain);
    
    UFUNCTION(BlueprintCallable)
    static void SetFloatPIDDerivativeGain(UPARAM(Ref) FSDIFloatPIDController& FloatPID, float NewDerivativeGain);
    
    UFUNCTION(BlueprintCallable)
    static void SetDoubleRubberBandVectorVelocity(UPARAM(Ref) FSDIDoubleRubberBandVector& RubberBand, FVector Velocity);
    
    UFUNCTION(BlueprintCallable)
    static void SetDoubleRubberBandVectorPosition(UPARAM(Ref) FSDIDoubleRubberBandVector& RubberBand, FVector Position);
    
    UFUNCTION(BlueprintCallable)
    static void SetDoubleRubberBandFloatVelocity(UPARAM(Ref) FSDIDoubleRubberBandFloat& RubberBand, float Velocity);
    
    UFUNCTION(BlueprintCallable)
    static void SetDoubleRubberBandFloatPosition(UPARAM(Ref) FSDIDoubleRubberBandFloat& RubberBand, float Position);
    
    UFUNCTION(BlueprintCallable)
    static void SetAttachmentInfo(UPARAM(Ref) FSDIAttachmentInfo& AttachmentInfo, USceneComponent* Parent, const FName& SocketName, const FTransform& RelTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    static bool SDICameraShakeSettingsInstIsPlaying(const FSDICameraShakeSettingsInst& Shake);
    
    UFUNCTION(BlueprintCallable)
    static void ResetVectorPID(UPARAM(Ref) FSDIVectorPIDController& VectorPID);
    
    UFUNCTION(BlueprintCallable)
    static FVector ResetSphericalOscillator(UPARAM(Ref) FSphericalOscillator& Oscillator, bool bRandom);
    
    UFUNCTION(BlueprintCallable)
    static void ResetSDICurveAnimation(UPARAM(Ref) FSDICurveAnimation& Anim, bool bAtBeginning);
    
    UFUNCTION(BlueprintCallable)
    static void ResetRubberBandVector(UPARAM(Ref) FSDIRubberBandVector& RubberBand, FVector Position);
    
    UFUNCTION(BlueprintCallable)
    static void ResetRubberBandFloat(UPARAM(Ref) FSDIRubberBandFloat& RubberBand, float Position);
    
    UFUNCTION(BlueprintCallable)
    static void ResetQVectorExp(UPARAM(Ref) FQVectorExp& QVectorExp);
    
    UFUNCTION(BlueprintCallable)
    static void ResetQVector2DExp(UPARAM(Ref) FQVector2DExp& QVector2DExp);
    
    UFUNCTION(BlueprintCallable)
    static void ResetQVector2D(UPARAM(Ref) FQVector2D& QVector2D);
    
    UFUNCTION(BlueprintCallable)
    static void ResetQVector(UPARAM(Ref) FQVector& QVector);
    
    UFUNCTION(BlueprintCallable)
    static void ResetQuatPID(UPARAM(Ref) FSDIQuatPIDController& QuatPID);
    
    UFUNCTION(BlueprintCallable)
    static void ResetQRotatorExp(UPARAM(Ref) FQRotatorExp& QRotatorExp);
    
    UFUNCTION(BlueprintCallable)
    static void ResetQRotator(UPARAM(Ref) FQRotator& QRotator);
    
    UFUNCTION(BlueprintCallable)
    static void ResetQIntExp(UPARAM(Ref) FQIntExp& QIntExp);
    
    UFUNCTION(BlueprintCallable)
    static void ResetQInt(UPARAM(Ref) FQInt& QInt);
    
    UFUNCTION(BlueprintCallable)
    static void ResetQFloatExp(UPARAM(Ref) FQFloatExp& QFloatExp);
    
    UFUNCTION(BlueprintCallable)
    static void ResetQFloat(UPARAM(Ref) FQFloat& QFloat);
    
    UFUNCTION(BlueprintCallable)
    static void ResetMotionHistoryAfter(UPARAM(Ref) FSDIMotionHistory& History, float Timespan, bool bReserve);
    
    UFUNCTION(BlueprintCallable)
    static void ResetMotionHistory(UPARAM(Ref) FSDIMotionHistory& History, bool bReserve);
    
    UFUNCTION(BlueprintCallable)
    static void ResetFloatPID(UPARAM(Ref) FSDIFloatPIDController& FloatPID);
    
    UFUNCTION(BlueprintCallable)
    static float ResetFloatOscillator(UPARAM(Ref) FFloatOscillator& Oscillator, bool bRandom);
    
    UFUNCTION(BlueprintCallable)
    static void ResetDoubleRubberBandVector(UPARAM(Ref) FSDIDoubleRubberBandVector& RubberBand, FVector Position);
    
    UFUNCTION(BlueprintCallable)
    static void ResetDoubleRubberBandFloat(UPARAM(Ref) FSDIDoubleRubberBandFloat& RubberBand, float Position);
    
    UFUNCTION(BlueprintCallable)
    static void ResetAttachmentInfo(UPARAM(Ref) FSDIAttachmentInfo& AttachmentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void ReplicatedMap_FName_Float_ToMap(const FSDIReplicatedMap_FName_Float& Map, TMap<FName, float>& OutMap);
    
    UFUNCTION(BlueprintCallable)
    static void ReplicatedMap_FName_Float_Remove(UPARAM(Ref) FSDIReplicatedMap_FName_Float& Map, FName Key);
    
    UFUNCTION(BlueprintCallable)
    static void ReplicatedMap_FName_Float_FromMap(UPARAM(Ref) FSDIReplicatedMap_FName_Float& Map, const TMap<FName, float>& InMap);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ReplicatedMap_FName_Float_Find(const FSDIReplicatedMap_FName_Float& Map, FName Key, float& OutValue);
    
    UFUNCTION(BlueprintCallable)
    static void ReplicatedMap_FName_Float_Empty(UPARAM(Ref) FSDIReplicatedMap_FName_Float& Map);
    
    UFUNCTION(BlueprintCallable)
    static void ReplicatedMap_FName_Float_Add(UPARAM(Ref) FSDIReplicatedMap_FName_Float& Map, FName Key, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void ReleaseTimestampInputButton(UPARAM(Ref) FSDITimestampInputButton& Button);
    
    UFUNCTION(BlueprintCallable)
    static void ReleaseInputButton(UPARAM(Ref) FSDIInputButton& Button);
    
    UFUNCTION(BlueprintCallable)
    static int32 ReferenceCounterGetRefCount(UPARAM(Ref) FSDIReferenceCounter& RefCount);
    
    UFUNCTION(BlueprintCallable)
    static int32 ReferenceCounterDecRef(UPARAM(Ref) FSDIReferenceCounter& RefCount);
    
    UFUNCTION(BlueprintCallable)
    static int32 ReferenceCounterAddRef(UPARAM(Ref) FSDIReferenceCounter& RefCount);
    
    UFUNCTION(BlueprintCallable)
    static void PressTimestampInputButton(UPARAM(Ref) FSDITimestampInputButton& Button);
    
    UFUNCTION(BlueprintCallable)
    static void PressInputButton(UPARAM(Ref) FSDIInputButton& Button);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool PointInsideTransformCollisionShape(const FVector& Point, const FSDITransformCollisionShape& Shape);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool PlaySDICameraShakeSettingsInst(UPARAM(Ref) FSDICameraShakeSettingsInst& Shake, APlayerController* PC, float InScale, bool bRestartIfPlaying);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool PlaySDIAkAudioEventPairDynamicLoop(UPARAM(Ref) FSDIAkAudioEventPairDynamicLoop& Loop, UAkComponent* Component, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool PlaySDIAkAudioEventPairAtLocation(const FSDIAkAudioEventPair& Event, UObject* WorldContextObject, FVector Location, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool PlaySDIAkAudioEventPair(const FSDIAkAudioEventPair& Event, UAkComponent* Component, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static bool MotionHistoryHasContinuousVelocityOnAxis(const FSDIMotionHistory& History, float Timespan, float MinVelocity, ESDIAxis Axis);
    
    UFUNCTION(BlueprintCallable)
    static bool MotionHistoryHasContinuousVelocity(const FSDIMotionHistory& History, float Timespan, float MinVelocity, FVector Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSDITransform_NetQuantize MakeTransformNetQuantize(const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSDITimestampTransform_NetQuantize MakeTimestampTransformNetQuantize(const FTransform& InTransform, float InTimestamp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSDITransformCollisionShape MakeSphereTransformCollisionShape(float SphereRadius, FVector ShapeLocation, FRotator ShapeRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSDICollisionShape MakeSphereCollisionShape(float SphereRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSDIReplicatedName MakeReplicatedName(FName InName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSDITransformCollisionShape MakeCapsuleTransformCollisionShape(float CapsuleRadius, float CapsuleHalfHeight, FVector ShapeLocation, FRotator ShapeRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSDICollisionShape MakeCapsuleCollisionShape(float CapsuleRadius, float CapsuleHalfHeight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSDITransformCollisionShape MakeBoxTransformCollisionShape(FVector BoxHalfExtent, FVector ShapeLocation, FRotator ShapeRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSDICollisionShape MakeBoxCollisionShape(FVector BoxHalfExtent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSDIDotLerpFloat LerpDotLerpFloat(const FSDIDotLerpFloat& A, const FSDIDotLerpFloat& B, float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidFSDIEnumTypeHandle(const FSDIEnumTypeHandle& A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTargetBetterThan(const FSDITargetSearchEntry& Entry, const FSDITargetSearchEntry& Other, const FSDITransformCollisionShape& InnerShape, const FSDITransformCollisionShape& OuterShape);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSDIAkAudioEventPairDynamicLoopPlaying(const FSDIAkAudioEventPairDynamicLoop& Loop);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNotEqualFSDIEnumTypeHandle(const FSDIEnumTypeHandle& A, const FSDIEnumTypeHandle& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEqualEqualFSDIEnumTypeHandle(const FSDIEnumTypeHandle& A, const FSDIEnumTypeHandle& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEmptyFSDIEnumTypeHandle(const FSDIEnumTypeHandle& A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InputButtonReleased(const FSDIInputButton& Button, float& OutPressedTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InputButtonPressed(const FSDIInputButton& Button, float& OutReleasedTime, bool& bOutDoubleTap);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float InputButtonLongHeldPercent(const FSDIInputButton& Button);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InputButtonLongHeld(const FSDIInputButton& Button, float& OutTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InputButtonHeldFor(const FSDIInputButton& Button, float HoldTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InputButtonHeld(const FSDIInputButton& Button, float& OutTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InputButtonDoubleTapPossible(const FSDIInputButton& Button);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InputButtonDoubleTapped(const FSDIInputButton& Button);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float InputButtonDoubleTapLongHeldPercent(const FSDIInputButton& Button);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InputButtonDoubleTapLongHeld(const FSDIInputButton& Button, float& OutTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InputButtonDoubleTapHeldFor(const FSDIInputButton& Button, float HoldTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InputButtonDoubleTapHeld(const FSDIInputButton& Button, float& OutTime);
    
    UFUNCTION(BlueprintCallable)
    static void InitFloatRandomOscillator(UPARAM(Ref) FFloatRandomOscillator& Oscillator, float DesiredDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasDamageValues(const FSDIDamageData& Damage);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetVectorPIDManipulatedValue(UPARAM(Ref) FSDIVectorPIDController& VectorPID, FVector SetPoint, FVector ProcessValue, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetSphericalOscillator(const FSphericalOscillator& Oscillator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSDICurveAnimationTime(const FSDICurveAnimation& Anim);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSDICurveAnimationPercent(const FSDICurveAnimation& Anim);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSDICurveAnimationDuration(const FSDICurveAnimation& Anim);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetRVectorExpAt(const FRVectorExp& RVectorExp, float Interp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetRVectorExp(const FRVectorExp& RVectorExp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetRVectorAt(const FRVector& RVector, float Interp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetRVector2DExpAt(const FRVector2DExp& RVector2DExp, float Interp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetRVector2DExp(const FRVector2DExp& RVector2DExp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetRVector2DAt(const FRVector2D& RVector2D, float Interp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetRVector2D(const FRVector2D& RVector2D);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetRVector(const FRVector& RVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetRubberBandVectorVelocity(UPARAM(Ref) FSDIRubberBandVector& RubberBand);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetRubberBandVectorPosition(UPARAM(Ref) FSDIRubberBandVector& RubberBand);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRubberBandFloatVelocity(UPARAM(Ref) FSDIRubberBandFloat& RubberBand);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRubberBandFloatPosition(UPARAM(Ref) FSDIRubberBandFloat& RubberBand);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetRRotatorExpAt(const FRRotatorExp& RRotatorExp, float Interp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetRRotatorExp(const FRRotatorExp& RRotatorExp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetRRotatorAt(const FRRotator& RRotator, float Interp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator GetRRotator(const FRRotator& RRotator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRIntPct(const FRInt& RInt, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRIntExpPct(const FRIntExp& RIntExp, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRIntExpAt(const FRIntExp& RIntExp, float Interp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRIntExp(const FRIntExp& RIntExp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRIntAt(const FRInt& RInt, float Interp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRInt(const FRInt& RInt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRFloatPct(const FRFloat& RFloat, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRFloatExpPct(const FRFloatExp& RFloatExp, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRFloatExpAt(const FRFloatExp& RFloatExp, float Interp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRFloatExp(const FRFloatExp& RFloatExp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRFloatAt(const FRFloat& RFloat, float Interp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRFloat(const FRFloat& RFloat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetReplicatedName(const FSDIReplicatedName& Name);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetQVectorExp(UPARAM(Ref) FQVectorExp& QVectorExp);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetQVector2DExp(UPARAM(Ref) FQVector2DExp& QVector2DExp);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetQVector2D(UPARAM(Ref) FQVector2D& QVector2D);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetQVector(UPARAM(Ref) FQVector& QVector);
    
    UFUNCTION(BlueprintCallable)
    static FQuat GetQuatPIDManipulatedValue(UPARAM(Ref) FSDIQuatPIDController& QuatPID, FQuat SetPoint, FQuat ProcessValue, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    static FRotator GetQRotatorExp(UPARAM(Ref) FQRotatorExp& QRotatorExp);
    
    UFUNCTION(BlueprintCallable)
    static FRotator GetQRotator(UPARAM(Ref) FQRotator& QRotator);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetQIntExp(UPARAM(Ref) FQIntExp& QIntExp);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetQInt(UPARAM(Ref) FQInt& QInt);
    
    UFUNCTION(BlueprintCallable)
    static float GetQFloatExp(UPARAM(Ref) FQFloatExp& QFloatExp);
    
    UFUNCTION(BlueprintCallable)
    static float GetQFloat(UPARAM(Ref) FQFloat& QFloat);
    
    UFUNCTION(BlueprintCallable)
    static void GetMotionHistoryVelocityInfo(const FSDIMotionHistory& History, float Timespan, FVector& MinVel, FVector& AvgVel, FVector& MaxVel, float& ScalarMinVel, float& ScalarAvgVel, float& ScalarMaxVel);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetMotionHistoryTransform(const FSDIMotionHistory& History, float Time);
    
    UFUNCTION(BlueprintCallable)
    static float GetMotionHistoryTime(const FSDIMotionHistory& History);
    
    UFUNCTION(BlueprintCallable)
    static FRotator GetMotionHistoryRotation(const FSDIMotionHistory& History, float Time);
    
    UFUNCTION(BlueprintCallable)
    static FQuat GetMotionHistoryQuat(const FSDIMotionHistory& History, float Time);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetMotionHistoryMinVelocity(const FSDIMotionHistory& History, float Timespan, float& ScalarVel);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetMotionHistoryMinAngularVelocity(const FSDIMotionHistory& History, float Timespan, float& ScalarAngVel);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetMotionHistoryMinAcceleration(const FSDIMotionHistory& History, float Timespan, float& ScalarAcc);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetMotionHistoryMaxVelocity(const FSDIMotionHistory& History, float Timespan, float& ScalarVel);
    
    UFUNCTION(BlueprintCallable)
    static float GetMotionHistoryMaxTime(const FSDIMotionHistory& History);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetMotionHistoryMaxAngularVelocity(const FSDIMotionHistory& History, float Timespan, float& ScalarAngVel);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetMotionHistoryMaxAcceleration(const FSDIMotionHistory& History, float Timespan, float& ScalarAcc);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetMotionHistoryLocation(const FSDIMotionHistory& History, float Time);
    
    UFUNCTION(BlueprintCallable)
    static FSDIMotionHistoryEntry GetMotionHistoryLastEntry(const FSDIMotionHistory& History);
    
    UFUNCTION(BlueprintCallable)
    static FBox GetMotionHistoryBounds(const FSDIMotionHistory& History, float Timespan);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetMotionHistoryAverageVelocity(const FSDIMotionHistory& History, float Timespan, float& ScalarVel);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetMotionHistoryAverageAngularVelocity(const FSDIMotionHistory& History, float Timespan, float& ScalarAngVel);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetMotionHistoryAverageAcceleration(const FSDIMotionHistory& History, float Timespan, float& ScalarAcc);
    
    UFUNCTION(BlueprintCallable)
    static void GetMotionHistoryAngularVelocityInfo(const FSDIMotionHistory& History, float Timespan, FVector& MinAngVel, FVector& AvgAngVel, FVector& MaxAngVel, float& ScalarMinVel, float& ScalarAvgVel, float& ScalarMaxVel);
    
    UFUNCTION(BlueprintCallable)
    static void GetMotionHistoryAccelerationInfo(const FSDIMotionHistory& History, float Timespan, FVector& MinAcc, FVector& AvgAcc, FVector& MaxAcc, float& ScalarMinAcc, float& ScalarAvgAcc, float& ScalarMaxAcc);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetFSDIEnumTypeHandleNumericalValue(const FSDIEnumTypeHandle& A);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFloatRandomOscillator(const FFloatRandomOscillator& Oscillator);
    
    UFUNCTION(BlueprintCallable)
    static float GetFloatPIDManipulatedValue(UPARAM(Ref) FSDIFloatPIDController& FloatPID, float SetPoint, float ProcessValue, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetFloatOscillator(const FFloatOscillator& Oscillator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetDoubleRubberBandVectorVelocity(UPARAM(Ref) FSDIDoubleRubberBandVector& RubberBand);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetDoubleRubberBandVectorPosition(UPARAM(Ref) FSDIDoubleRubberBandVector& RubberBand);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDoubleRubberBandFloatVelocity(UPARAM(Ref) FSDIDoubleRubberBandFloat& RubberBand);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDoubleRubberBandFloatPosition(UPARAM(Ref) FSDIDoubleRubberBandFloat& RubberBand);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetComponentReplacementWorldTransform(const FSDIComponentReplacement& Replacement);
    
    UFUNCTION(BlueprintCallable)
    static void GetAttachmentInfoFromComponent(UPARAM(Ref) FSDIAttachmentInfo& AttachmentInfo, USceneComponent* Comp);
    
    UFUNCTION(BlueprintCallable)
    static void GetAttachmentInfoFromActor(UPARAM(Ref) FSDIAttachmentInfo& AttachmentInfo, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugCurvedWedgeGeometry(const UObject* WorldContextObject, const FSDICurvedWedgeGeometry& Wedge, const FTransform& Transform, FLinearColor Color, float Step, bool bDrawCenterLine, bool bPersistent, float LifeTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float DotLerpFloat(const FSDIDotLerpFloat& DotLerp, float DotP);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float DistanceToTransformCollisionShape(const FVector& Point, const FSDITransformCollisionShape& Shape);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CurvedWedgeGeometryIsShapeInside(const FSDICurvedWedgeGeometry& Wedge, const FTransform& Transform, const FSDITransformCollisionShape& CollisionShape, bool bUseClosestPoint, FVector& OutPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CurvedWedgeGeometryIsPointInside(const FSDICurvedWedgeGeometry& Wedge, const FTransform& Transform, const FVector& Point);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CurvedWedgeGeometryIsComponentInside(const FSDICurvedWedgeGeometry& Wedge, const FTransform& Transform, const USceneComponent* Component, bool bUseClosestPoint, FVector& OutPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CurvedWedgeGeometryIsActorInside(const FSDICurvedWedgeGeometry& Wedge, const FTransform& Transform, const AActor* Actor, bool bUseClosestPoint, FVector& OutPoint, USceneComponent*& OutComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ComputeSpreadSettingsDegrees(const FSDISpreadSettings& Settings, int32 NumRoundsFired, int32 Shot, int32 NumShots, float AdditionalSpread);
    
    UFUNCTION(BlueprintCallable)
    static bool ComponentReplacementAttachChildComponentWorldTransform(const FSDIComponentReplacement& Replacement, USceneComponent* InChild, const FTransform& WorldTransform);
    
    UFUNCTION(BlueprintCallable)
    static bool ComponentReplacementAttachChildComponentWorld(const FSDIComponentReplacement& Replacement, USceneComponent* InChild);
    
    UFUNCTION(BlueprintCallable)
    static bool ComponentReplacementAttachChildComponentRelativeTransform(const FSDIComponentReplacement& Replacement, USceneComponent* InChild, const FTransform& RelativeTransform);
    
    UFUNCTION(BlueprintCallable)
    static bool ComponentReplacementAttachChildComponentRelative(const FSDIComponentReplacement& Replacement, USceneComponent* InChild);
    
    UFUNCTION(BlueprintCallable)
    static bool ComponentReplacementAttachChildActorWorldTransform(const FSDIComponentReplacement& Replacement, AActor* InChild, const FTransform& WorldTransform);
    
    UFUNCTION(BlueprintCallable)
    static bool ComponentReplacementAttachChildActorWorld(const FSDIComponentReplacement& Replacement, AActor* InChild);
    
    UFUNCTION(BlueprintCallable)
    static bool ComponentReplacementAttachChildActorRelativeTransform(const FSDIComponentReplacement& Replacement, AActor* InChild, const FTransform& RelativeTransform);
    
    UFUNCTION(BlueprintCallable)
    static bool ComponentReplacementAttachChildActorRelative(const FSDIComponentReplacement& Replacement, AActor* InChild);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ClosestPointOnTransformCollisionShape(const FVector& Point, const FSDITransformCollisionShape& Shape, bool bClampToOutside);
    
    UFUNCTION(BlueprintCallable)
    static void ClearSDICurveAnimation(UPARAM(Ref) FSDICurveAnimation& Anim);
    
    UFUNCTION(BlueprintCallable)
    static void BindTimestampInputButtonOnReleased(UPARAM(Ref) FSDITimestampInputButton& Button, FSDIInputButtonReleasedSignature OnReleased);
    
    UFUNCTION(BlueprintCallable)
    static void BindTimestampInputButtonOnPressed(UPARAM(Ref) FSDITimestampInputButton& Button, FSDIInputButtonPressedSignature OnPressed);
    
    UFUNCTION(BlueprintCallable)
    static void BindInputButtonOnReleased(UPARAM(Ref) FSDIInputButton& Button, FSDIInputButtonReleasedSignature OnReleased);
    
    UFUNCTION(BlueprintCallable)
    static void BindInputButtonOnPressed(UPARAM(Ref) FSDIInputButton& Button, FSDIInputButtonPressedSignature OnPressed);
    
    UFUNCTION(BlueprintCallable)
    static void AttachUsingSDIAttachmentSettingsEntry(const FSDIAttachmentSettingsEntry& Entry, AActor* Child, AActor* Parent);
    
    UFUNCTION(BlueprintCallable)
    static void AttachUsingSDIAttachmentSettings(const FSDIAttachmentSettings& Settings, AActor* Child, AActor* Parent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform ApplySpreadSettingsDegrees(const FSDISpreadSettings& Settings, float SpreadDegrees, const FTransform& ShotTransform, int32 NumRoundsFired, int32 Shot, int32 NumShots);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform ApplySpreadSettings(const FSDISpreadSettings& Settings, const FTransform& ShotTransform, int32 NumRoundsFired, int32 Shot, int32 NumShots, float AdditionalSpread);
    
    UFUNCTION(BlueprintCallable)
    static int32 ApplyRadialDamageData(const FSDIDamageData& Damage, const FVector& InOrigin, TArray<AActor*>& DamagedActors, AController* EventInstigator, AActor* DamageCauser, const TArray<AActor*>& IgnoreActors, float RadialDamageMultiplier, int32 DamageID);
    
    UFUNCTION(BlueprintCallable)
    static float ApplyDirectDamageDataTo(const FSDIDamageData& Damage, AActor* Actor, const FVector& InShotDirection, AController* EventInstigator, AActor* DamageCauser, const FVector& InImpactVelocity, float InImpactMass, float HitReactImpulseMultiplier, float InHitReactMinSpeed, float DirectDamageCurveInput, float DirectDamageMultiplier, bool bApplyDirectDamageCurveInputToNonCurve, int32 DamageID);
    
    UFUNCTION(BlueprintCallable)
    static float ApplyDirectDamageData(const FSDIDamageData& Damage, const FHitResult& InHitInfo, const FVector& InShotDirection, AController* EventInstigator, AActor* DamageCauser, const FVector& InImpactVelocity, float InImpactMass, float HitReactImpulseMultiplier, float InHitReactMinSpeed, float DirectDamageCurveInput, float DirectDamageMultiplier, bool bApplyDirectDamageCurveInputToNonCurve, int32 DamageID);
    
    UFUNCTION(BlueprintCallable)
    static int32 ApplyDamageDataTo(const FSDIDamageData& Damage, AActor* Actor, const FVector& InShotDirection, TArray<AActor*>& DamagedActors, AController* EventInstigator, AActor* DamageCauser, const TArray<AActor*>& IgnoreActors, const FVector& InImpactVelocity, float InImpactMass, float HitReactImpulseMultiplier, float InHitReactMinSpeed, float DirectDamageCurveInput, float DirectDamageMultiplier, float RadialDamageMultiplier, bool bApplyDirectDamageCurveInputToNonCurve, int32 DamageID);
    
    UFUNCTION(BlueprintCallable)
    static int32 ApplyDamageData(const FSDIDamageData& Damage, const FHitResult& InHitInfo, const FVector& InShotDirection, TArray<AActor*>& DamagedActors, AController* EventInstigator, AActor* DamageCauser, const TArray<AActor*>& IgnoreActors, const FVector& InImpactVelocity, float InImpactMass, float HitReactImpulseMultiplier, float InHitReactMinSpeed, float DirectDamageCurveInput, float DirectDamageMultiplier, float RadialDamageMultiplier, bool bApplyDirectDamageCurveInputToNonCurve, int32 DamageID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform ApplyBlendedSpreadSettingsArr(const TArray<FSDISpreadSettings>& Arr, float Alpha, const FTransform& ShotTransform, int32 NumRoundsFired, int32 Shot, int32 NumShots, float AdditionalSpread);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform ApplyBlendedSpreadSettings(const FSDISpreadSettings& A, const FSDISpreadSettings& B, float Alpha, const FTransform& ShotTransform, int32 NumRoundsFired, int32 Shot, int32 NumShots, float AdditionalSpread);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyAttachmentInfoToComponent(const FSDIAttachmentInfo& AttachmentInfo, USceneComponent* Comp);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyAttachmentInfoToActor(const FSDIAttachmentInfo& AttachmentInfo, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void AddTransformToMotionHistoryDeltaTime(UPARAM(Ref) FSDIMotionHistory& History, const FTransform& Transform, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    static void AddTransformToMotionHistory(UPARAM(Ref) FSDIMotionHistory& History, const FTransform& Transform, float Timestamp, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    static void AddToMotionHistoryDeltaTime(UPARAM(Ref) FSDIMotionHistory& History, const FTransform& Transform, const FVector& Velocity, const FVector& Acceleration, const FVector& AngularVelocity, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    static void AddToMotionHistory(UPARAM(Ref) FSDIMotionHistory& History, const FTransform& Transform, const FVector& Velocity, const FVector& Acceleration, const FVector& AngularVelocity, float Timestamp, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    static void AddLocationToMotionHistoryDeltaTime(UPARAM(Ref) FSDIMotionHistory& History, const FVector& Location, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    static void AddLocationToMotionHistory(UPARAM(Ref) FSDIMotionHistory& History, const FVector& Location, float Timestamp, float DeltaSeconds);
    
};

