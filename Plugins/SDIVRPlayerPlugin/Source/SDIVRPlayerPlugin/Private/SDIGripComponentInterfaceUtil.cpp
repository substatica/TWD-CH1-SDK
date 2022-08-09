#include "SDIGripComponentInterfaceUtil.h"

class UActorComponent;
class USceneComponent;
class UPrimitiveComponent;
class ASDIPlayerHand;
class AActor;
class UPhysicsConstraintComponent;

bool USDIGripComponentInterfaceUtil::UpdateGripEveryFrame(const UActorComponent* Grip, const UPrimitiveComponent* SimulatePhysicsComponent) {
    return false;
}

void USDIGripComponentInterfaceUtil::UpdateGripAttachmentInfos(AActor* Actor, USceneComponent* OldParent, USceneComponent* NewParent, FName NewParentSocketName) {
}

FTransform USDIGripComponentInterfaceUtil::K2GetTransform(const UActorComponent* Grip, FSDIGripInfo GripInfo, bool bApplyRotation) {
    return FTransform{};
}

void USDIGripComponentInterfaceUtil::K2AttachToAtGripComponent(USceneComponent* Root, USceneComponent* Parent, FName SocketName, const UActorComponent* Grip, FSDIGripInfo GripInfo) {
}

bool USDIGripComponentInterfaceUtil::IsValidForHand(const UActorComponent* Grip, const ASDIPlayerHand* hand, ESDIGripType GripType) {
    return false;
}

bool USDIGripComponentInterfaceUtil::IsValidFor(const UActorComponent* Grip, EControllerHand hand, ESDIGripType GripType) {
    return false;
}

bool USDIGripComponentInterfaceUtil::IsActiveGrip(const UActorComponent* Grip) {
    return false;
}

void USDIGripComponentInterfaceUtil::GetUpdateGripThresholds(const UActorComponent* Grip, float& OutLinearDistanceUpdateThreshold, float& OutAngularDistanceUpdateThresholdDegrees) {
}

FTransform USDIGripComponentInterfaceUtil::GetSceneComponentTransform(const UActorComponent* Grip) {
    return FTransform{};
}

FTransform USDIGripComponentInterfaceUtil::GetSceneComponentRelativeTransform(const UActorComponent* Grip, const FTransform& WorldTransform) {
    return FTransform{};
}

USceneComponent* USDIGripComponentInterfaceUtil::GetSceneComponent(const UActorComponent* Grip, FName& OutSocketName) {
    return NULL;
}

ESDIGripMovement USDIGripComponentInterfaceUtil::GetRotationGripMovement(const UActorComponent* Grip) {
    return ESDIGripMovement::Locked;
}

ESDIGripMovement USDIGripComponentInterfaceUtil::GetLocationGripMovement(const UActorComponent* Grip) {
    return ESDIGripMovement::Locked;
}

ESDIHandPose USDIGripComponentInterfaceUtil::GetHandPose(const UActorComponent* Grip) {
    return ESDIHandPose::HP_Fist;
}

EControllerHand USDIGripComponentInterfaceUtil::GetHand(const UActorComponent* Grip) {
    return EControllerHand::Left;
}

ESDIGripType USDIGripComponentInterfaceUtil::GetGripType(const UActorComponent* Grip) {
    return ESDIGripType::Any;
}

UPhysicsConstraintComponent* USDIGripComponentInterfaceUtil::GetConstraint(const UActorComponent* Grip) {
    return NULL;
}

FTransform USDIGripComponentInterfaceUtil::GetBaseTransform(const UActorComponent* Grip) {
    return FTransform{};
}

USceneComponent* USDIGripComponentInterfaceUtil::GetAttachParent(const UActorComponent* Grip, FName& OutSocketName) {
    return NULL;
}

TArray<UActorComponent*> USDIGripComponentInterfaceUtil::GetAllGrips(AActor* Actor, EControllerHand hand, ESDIGripType GripType, bool bActiveOnly) {
    return TArray<UActorComponent*>();
}

UActorComponent* USDIGripComponentInterfaceUtil::FindBestGripForHand(const USceneComponent* ParentComp, const ASDIPlayerHand* hand, FSDIGripInfo& OutGripInfo, bool bUseTracked, ESDIGripType GripType, bool bRecurse, bool bActiveOnly, bool bApplyRotationConstraints, bool bUseDesiredGripInfo, bool bDistanceOnly) {
    return NULL;
}

UActorComponent* USDIGripComponentInterfaceUtil::FindBestGrip(const USceneComponent* ParentComp, const FTransform& HandTransform, FSDIGripInfo& OutGripInfo, EControllerHand hand, ESDIGripType GripType, bool bRecurse, bool bActiveOnly, bool bApplyRotationConstraints, bool bUseDesiredGripInfo, bool bDistanceOnly) {
    return NULL;
}

FTransform USDIGripComponentInterfaceUtil::ComputeTransformForHand(const UActorComponent* Grip, FSDIGripInfo& OutGripInfo, const ASDIPlayerHand* hand, bool bUseTracked, bool bApplyRotationConstraints, bool bUseDesiredGripInfo) {
    return FTransform{};
}

FTransform USDIGripComponentInterfaceUtil::ComputeTransform(const UActorComponent* Grip, FSDIGripInfo& OutGripInfo, const FTransform& HandTransform, bool bApplyRotationConstraints, bool bUseDesiredGripInfo) {
    return FTransform{};
}

FTransform USDIGripComponentInterfaceUtil::ComputeGripRotations(const UActorComponent* Grip, FSDIGripInfo& OutGripInfo, const FTransform& GripTransform, const FTransform& HandTransform) {
    return FTransform{};
}

float USDIGripComponentInterfaceUtil::CalculateInterpolationTimeGripInfo(const UActorComponent* Grip, const FSDIGripInfo& GripInfo, const FTransform& HandTransform, float LocationInterpolationSpeed, float RotationInterpolationSpeedDeg) {
    return 0.0f;
}

float USDIGripComponentInterfaceUtil::CalculateInterpolationTime(const UActorComponent* Grip, const FTransform& HandTransform, float LocationInterpolationSpeed, float RotationInterpolationSpeedDeg) {
    return 0.0f;
}

bool USDIGripComponentInterfaceUtil::AdjustGripForHand(const UActorComponent* Grip, const ASDIPlayerHand* hand, FSDIGripInfo& GripInfo, FSDIGripInfo& AdjustedGripInfo, bool bCosmetic) {
    return false;
}

USDIGripComponentInterfaceUtil::USDIGripComponentInterfaceUtil() {
}

