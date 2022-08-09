#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIGripInfo.h"
#include "ESDIGripType.h"
#include "ESDIGripMovement.h"
#include "ESDIHandPose.h"
#include "SDIGripComponentInterfaceUtil.generated.h"

class UActorComponent;
class USceneComponent;
class UPrimitiveComponent;
class ASDIPlayerHand;
class AActor;
class UPhysicsConstraintComponent;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API USDIGripComponentInterfaceUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USDIGripComponentInterfaceUtil();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool UpdateGripEveryFrame(const UActorComponent* Grip, const UPrimitiveComponent* SimulatePhysicsComponent);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateGripAttachmentInfos(AActor* Actor, USceneComponent* OldParent, USceneComponent* NewParent, FName NewParentSocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform K2GetTransform(const UActorComponent* Grip, FSDIGripInfo GripInfo, bool bApplyRotation);
    
    UFUNCTION(BlueprintCallable)
    static void K2AttachToAtGripComponent(USceneComponent* Root, USceneComponent* Parent, FName SocketName, const UActorComponent* Grip, FSDIGripInfo GripInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidForHand(const UActorComponent* Grip, const ASDIPlayerHand* hand, ESDIGripType GripType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidFor(const UActorComponent* Grip, EControllerHand hand, ESDIGripType GripType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActiveGrip(const UActorComponent* Grip);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetUpdateGripThresholds(const UActorComponent* Grip, float& OutLinearDistanceUpdateThreshold, float& OutAngularDistanceUpdateThresholdDegrees);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetSceneComponentTransform(const UActorComponent* Grip);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetSceneComponentRelativeTransform(const UActorComponent* Grip, const FTransform& WorldTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USceneComponent* GetSceneComponent(const UActorComponent* Grip, FName& OutSocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESDIGripMovement GetRotationGripMovement(const UActorComponent* Grip);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESDIGripMovement GetLocationGripMovement(const UActorComponent* Grip);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESDIHandPose GetHandPose(const UActorComponent* Grip);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EControllerHand GetHand(const UActorComponent* Grip);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESDIGripType GetGripType(const UActorComponent* Grip);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPhysicsConstraintComponent* GetConstraint(const UActorComponent* Grip);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetBaseTransform(const UActorComponent* Grip);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USceneComponent* GetAttachParent(const UActorComponent* Grip, FName& OutSocketName);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UActorComponent*> GetAllGrips(AActor* Actor, EControllerHand hand, ESDIGripType GripType, bool bActiveOnly);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* FindBestGripForHand(const USceneComponent* ParentComp, const ASDIPlayerHand* hand, FSDIGripInfo& OutGripInfo, bool bUseTracked, ESDIGripType GripType, bool bRecurse, bool bActiveOnly, bool bApplyRotationConstraints, bool bUseDesiredGripInfo, bool bDistanceOnly);
    
    UFUNCTION(BlueprintCallable)
    static UActorComponent* FindBestGrip(const USceneComponent* ParentComp, const FTransform& HandTransform, FSDIGripInfo& OutGripInfo, EControllerHand hand, ESDIGripType GripType, bool bRecurse, bool bActiveOnly, bool bApplyRotationConstraints, bool bUseDesiredGripInfo, bool bDistanceOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform ComputeTransformForHand(const UActorComponent* Grip, FSDIGripInfo& OutGripInfo, const ASDIPlayerHand* hand, bool bUseTracked, bool bApplyRotationConstraints, bool bUseDesiredGripInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform ComputeTransform(const UActorComponent* Grip, FSDIGripInfo& OutGripInfo, const FTransform& HandTransform, bool bApplyRotationConstraints, bool bUseDesiredGripInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform ComputeGripRotations(const UActorComponent* Grip, FSDIGripInfo& OutGripInfo, const FTransform& GripTransform, const FTransform& HandTransform);
    
    UFUNCTION(BlueprintCallable)
    static float CalculateInterpolationTimeGripInfo(const UActorComponent* Grip, const FSDIGripInfo& GripInfo, const FTransform& HandTransform, float LocationInterpolationSpeed, float RotationInterpolationSpeedDeg);
    
    UFUNCTION(BlueprintCallable)
    static float CalculateInterpolationTime(const UActorComponent* Grip, const FTransform& HandTransform, float LocationInterpolationSpeed, float RotationInterpolationSpeedDeg);
    
    UFUNCTION(BlueprintCallable)
    static bool AdjustGripForHand(const UActorComponent* Grip, const ASDIPlayerHand* hand, UPARAM(Ref) FSDIGripInfo& GripInfo, UPARAM(Ref) FSDIGripInfo& AdjustedGripInfo, bool bCosmetic);
    
};

