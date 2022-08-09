#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "SDICollisionCacheFilterDynamicDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "SDIStructuresCurvedWedgeGeometryLocationDynamicDelegateDelegate.h"
#include "ESDIGPU.h"
#include "GameplayTagContainer.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "SDICollisionShape.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "Engine/Scene.h"
#include "SDIStructuresTargetSearchBetterThanDynamicDelegateDelegate.h"
#include "SDITargetSearchEntry.h"
#include "SDITransformCollisionShape.h"
#include "SDIStructuresTargetSearchFilterDynamicDelegateDelegate.h"
#include "SDIStructuresCurvedWedgeGeometryBetterThanDynamicDelegateDelegate.h"
#include "AI/Navigation/NavigationTypes.h"
#include "Kismet/GameplayStaticsTypes.h"
#include "ESDIMathOperation.h"
#include "Kismet/GameplayStaticsTypes.h"
#include "Animation/PoseSnapshot.h"
#include "SDIUtilProjectileAimAssistTargetDynamicDelegateDelegate.h"
#include "Components/SceneComponent.h"
#include "SDIStructuresTargetSearchLocationDynamicDelegateDelegate.h"
#include "SDIUtilRandomActorWeightListDynamicDelegateDelegate.h"
#include "SDIUtilRandomActorWeightDynamicDelegateDelegate.h"
#include "SDICurvedWedgeGeometry.h"
#include "SDIStructuresCurvedWedgeGeometryFilterDynamicDelegateDelegate.h"
#include "SDIMotionHistory.h"
#include "Engine/EngineTypes.h"
#include "SDIUtil.generated.h"

class APlayerState;
class ULocalPlayer;
class UGameInstance;
class UPrimitiveComponent;
class UPhysicsConstraintComponent;
class AActor;
class UChildActorComponent;
class USplineComponent;
class USceneComponent;
class UObject;
class UPhysicalMaterial;
class UNavigationQueryFilter;
class ULevel;
class APawn;
class UWorld;
class USDICoreAssetDatabase;
class UCurveFloat;
class AGameMode;
class USkeletalMeshComponent;
class APlayerController;
class APlayerCameraManager;
class USDIGameSingleton;
class AController;

UCLASS(Blueprintable)
class SDICOREPLUGIN_API USDIUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USDIUtil();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool WasComponentRecentlyRendered(const UPrimitiveComponent* PrimComp, float Tolerance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector VRLerp(FVector A, FVector B, float Interp, FVector Pivot);
    
    UFUNCTION(BlueprintCallable)
    static bool UpdatePhysicsConstraintTransforms(UPhysicsConstraintComponent* Constraint, const FTransform& Body1Transform, const FTransform& Body2Transform);
    
    UFUNCTION(BlueprintCallable)
    static bool TraceActor(AActor* Actor, FHitResult& OutHit, const FVector& Start, const FVector& End, const TArray<TEnumAsByte<ECollisionChannel>>& TraceChannels, const TArray<TEnumAsByte<ECollisionResponse>>& Responses, bool bTraceComplex, bool bReturnPhysicalMaterial, bool bFindClosest);
    
    UFUNCTION(BlueprintCallable)
    static void TeleportToAtWorldTransform(USceneComponent* Root, FTransform DesiredTransform, FTransform WorldTransform, USceneComponent* TransformComp, FTransform TransformCompRelativeTransform);
    
    UFUNCTION(BlueprintCallable)
    static bool SweepActor(AActor* Actor, FHitResult& OutHit, const FVector& Start, const FVector& End, const FSDICollisionShape& Shape, FRotator ShapeRotation, const TArray<TEnumAsByte<ECollisionChannel>>& TraceChannels, const TArray<TEnumAsByte<ECollisionResponse>>& Responses, bool bTraceComplex, bool bFindClosest);
    
    UFUNCTION(BlueprintCallable)
    static float SplineConvertInputKeyToDistance(const USplineComponent* Spline, float InputKey);
    
    UFUNCTION(BlueprintCallable)
    static UObject* SpawnAttachment(UObject* Object, USceneComponent* Parent, const FTransform& RelativeTransform, FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    static bool SetupPhysicsConstraint(UPhysicsConstraintComponent* Constraint, UPrimitiveComponent* Component1, FName BoneName1, const FTransform& Body1Transform, UPrimitiveComponent* Component2, FName BoneName2, const FTransform& Body2Transform, bool bReverseConstraint);
    
    UFUNCTION(BlueprintCallable)
    static int32 ScanCollisionSphere(UObject* WorldContextObject, TEnumAsByte<ECollisionChannel> TraceChannel, TArray<FHitResult>& ArcImpactInfo, int32& NearestIndex, const TArray<AActor*>& ActorsToIgnore, const FVector& Origin, FVector BaseVector, FVector Axis, int32 NumChecks, int32 NumRings, float MaxDist, FVector Extent, bool bClipToNearest, bool bDebug);
    
    UFUNCTION(BlueprintCallable)
    static int32 ScanCollisionAxis(UObject* WorldContextObject, TEnumAsByte<ECollisionChannel> TraceChannel, TArray<FHitResult>& ArcImpactInfo, int32& NearestIndex, const TArray<AActor*>& ActorsToIgnore, const FVector& Origin, FVector BaseVector, FVector Axis, int32 NumChecks, float MaxDist, FVector Extent, bool bClipToNearest, bool bDebug, bool bSkipBaseVectors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool RuntimeFloatCurveHasData(const FRuntimeFloatCurve& Curve);
    
    UFUNCTION(BlueprintCallable)
    static void RefineHitResultPhysMaterial(UPARAM(Ref) FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    static void RecreatePhysicsConstraintsOnActor(AActor* Actor, UPrimitiveComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable)
    static void RecreatePhysicsConstraintsOn(UPrimitiveComponent* Comp);
    
    UFUNCTION(BlueprintCallable)
    static bool RecreatePhysicsConstraint(UPhysicsConstraintComponent* Constraint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool PointInsideCollisionShape(const FVector& Point, const FSDICollisionShape& Shape, const FTransform& ShapeTransform);
    
    UFUNCTION(BlueprintCallable)
    static void OverridePostProcessSettings(UPARAM(Ref) FPostProcessSettings& Dest, const FPostProcessSettings& Src, bool bSetOverrides, bool bClearOverrides);
    
    UFUNCTION(BlueprintCallable)
    static bool OverlapActor(AActor* Actor, const FSDITransformCollisionShape& Shape, const TArray<TEnumAsByte<ECollisionChannel>>& TraceChannels, const TArray<TEnumAsByte<ECollisionResponse>>& Responses);
    
    UFUNCTION(BlueprintCallable)
    static int32 OptimizeChildActorComponents(AActor* Actor, bool bDestroyComponents, bool bIncludeFromChildActors);
    
    UFUNCTION(BlueprintCallable)
    static bool OptimizeChildActorComponent(UChildActorComponent* Comp, bool bDestroyComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotHasAnyTags(const FGameplayTagContainer& TagContainer, const FGameplayTagContainer& OtherContainer, bool bExactMatch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotHasAllTags(const FGameplayTagContainer& TagContainer, const FGameplayTagContainer& OtherContainer, bool bExactMatch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_ClassClassOrSubclass(UClass* A, UClass* B, bool bACanBeSubclassOfB);
    
    UFUNCTION(BlueprintCallable)
    static bool NavigationRaycast(UObject* WorldContextObject, const FVector& RayStart, const FVector& RayEnd, FVector& HitLocation, const FNavAgentProperties& AgentPropsToUse, TSubclassOf<UNavigationQueryFilter> FilterClass);
    
    UFUNCTION(BlueprintCallable)
    static bool MoveActorToPersistentLevel(AActor* Act, bool bIncludeOwnedChildren);
    
    UFUNCTION(BlueprintCallable)
    static bool MoveActorToLevel(AActor* Act, ULevel* Level, bool bIncludeOwnedChildren);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector LerpVectorArray(const TArray<FVector>& Array, float Alpha, bool bIntegralElements);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform LerpTransformArray(const TArray<FTransform>& Array, float Alpha, bool bIntegralElements);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPredictProjectilePathPointData LerpProjectilePathPointArray(const TArray<FPredictProjectilePathPointData>& Array, float Alpha, bool bIntegralElements);
    
    UFUNCTION(BlueprintCallable)
    static void LerpPostProcessSettingsArr(UPARAM(Ref) FPostProcessSettings& Dest, const TArray<FPostProcessSettings>& Arr, float Alpha, bool bSetOverrides, bool bClearOverrides);
    
    UFUNCTION(BlueprintCallable)
    static void LerpPostProcessSettings(UPARAM(Ref) FPostProcessSettings& Dest, const FPostProcessSettings& A, const FPostProcessSettings& B, float Alpha, bool bSetOverrides, bool bClearOverrides);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float LerpIndexHelper(int32& OutIndex0, int32& OutIndex1, int32 Num, float Alpha, bool bIntegralElements);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float LerpFloatArray(const TArray<float>& Array, float Alpha, bool bIntegralElements);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool K2IsValidClass(UClass* SearchClass, const TArray<UClass*>& ValidClasses, const TArray<UClass*>& InvalidClasses);
    
    UFUNCTION(BlueprintCallable)
    static int32 K2GetWeightedRandomIndex(const TArray<float>& Weights, const TArray<int32>& IgnoredIndices);
    
    UFUNCTION(BlueprintCallable)
    static int32 K2GetWeightedIndex(float WeightedChoice, const TArray<float>& Weights, const TArray<int32>& IgnoredIndices);
    
    UFUNCTION(BlueprintCallable)
    static int32 K2GetRandomActorsWeightedByDistanceFromSelected(int32 NumActors, TArray<AActor*>& SelectedActors, const TArray<AActor*>& ActorPool, ESDIMathOperation DistanceWeightMathOp, bool bUse2DDistance, bool bInvertWeight);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USDICoreAssetDatabase* K2GetAssetDatabase();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FHitResult K2ConvertHitResultToWorld(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FHitResult K2ConvertHitResultToLocal(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    static FVector K2ComputeProjectileAimAssistance(UObject* WorldContextObject, const FSDIUtilProjectileAimAssistTargetDynamicDelegate& TargetDelegate, const FSDICollisionCacheFilterDynamicDelegate& FilterDelegate, const FVector& StartLocation, const FVector& InitialVelocity, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<ECollisionChannel> CollisionChannel, float PathCollisionRadius, float PathCollisionTime, float TargetRadius, const UCurveFloat* TargetRadiusCurve, float TargetZOffset, const UCurveFloat* TargetZOffsetCurve, float MinResultSpeed, bool bAdjustForTargetVelocity, float DebugRenderTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidGameMode(const UObject* WorldContextObject, const TArray<TSubclassOf<AGameMode>>& ValidGameModes, const TArray<TSubclassOf<AGameMode>>& InvalidGameModes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayInEditor(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPhysicsConstraintAttachedTo(UPhysicsConstraintComponent* Constraint, const UPrimitiveComponent* Component, FName BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsObjectChildOf(const UObject* Object, const TArray<UClass*>& Classes, bool bExact);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLocallyControlledActor(AActor* Actor, bool bAllowAutonomousRoles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInFieldOfView(const FTransform& CameraTransform, const FVector& Location, float MaxHorizontalAngleDeg, float MaxVerticalAngleDeg);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsClassChildOf(const UClass* Class, const TArray<UClass*>& Classes, bool bExact);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool InVRMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float InverseLerpIndexHelper(int32 Index0, int32 Num, float SubAlpha);
    
    UFUNCTION(BlueprintPure)
    static bool HasLosToPoint(const AActor* Eyes, const FVector& TargetPos, const AActor* Target, bool bSimple, TEnumAsByte<ECollisionChannel> Channel);
    
    UFUNCTION(BlueprintPure)
    static bool HasLosToActor(const AActor* Eyes, const AActor* Target, bool bSimple, TEnumAsByte<ECollisionChannel> Channel);
    
    UFUNCTION(BlueprintPure)
    static bool HasLosPointToPoint(const FVector& EyePos, const FVector& TargetPos, const AActor* Eyes, const AActor* Target, TEnumAsByte<ECollisionChannel> Channel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasAuthority(const UObject* Obj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWorld* GetWorldFromContextObject(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static float GetVolumetricLight(const UObject* WorldContextObject, const FVector& Position);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTransientID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetServerTimestamp(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRuntimeFloatCurveValue(const FRuntimeFloatCurve& Curve, float InTime);
    
    UFUNCTION(BlueprintPure)
    static bool GetRefPoseTransform(FTransform& OutTransform, USkeletalMeshComponent* SkelMeshComp, FName SocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetRefPoseBoneTransform(USkeletalMeshComponent* SkelMesh, FName BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPhysicalMaterial* GetRefinedHitResultPhysMaterial(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRealDeltaSeconds(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRandomActors(int32 NumActors, TArray<AActor*>& SelectedActors, const TArray<AActor*>& ActorPool, FSDIUtilRandomActorWeightListDynamicDelegate WeightDelegate);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRandomActorIndices(int32 NumActors, TArray<int32>& Indices, const TArray<AActor*>& ActorPool, FSDIUtilRandomActorWeightDynamicDelegate WeightDelegate);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRandomActorIndex(const TArray<AActor*>& ActorPool, FSDIUtilRandomActorWeightDynamicDelegate WeightDelegate);
    
    UFUNCTION(BlueprintPure)
    static bool GetPoseSnapshotTransform(const FPoseSnapshot& Snapshot, const USkeletalMeshComponent* SkelMeshComp, FName SocketName, FTransform& OutTransform, TEnumAsByte<ERelativeTransformSpace> TransformSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APlayerState* GetPlayerState(const UObject* Obj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlatformMobileHiSpec();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPingMs(const UObject* Obj);
    
    UFUNCTION(BlueprintCallable)
    static bool GetNearestSurface(UObject* WorldContextObject, FHitResult& OutSurface, TEnumAsByte<ECollisionChannel> TraceChannel, const TArray<AActor*>& ActorsToIgnore, const FVector& Origin, float Distance, FVector Extent, FVector BaseVector, FVector Axis, int32 NumChecks, int32 NumRings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APlayerController* GetLocalPlayerController(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APlayerCameraManager* GetLocalPlayerCameraManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULocalPlayer* GetLocalPlayer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetGround(UObject* WorldContextObject, FHitResult& OutGround, TEnumAsByte<ECollisionChannel> TraceChannel, const TArray<AActor*>& ActorsToIgnore, const FVector& Origin, float Distance, FVector Extent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESDIGPU GetGPU();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGoreLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USDIGameSingleton* GetGameSingleton();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGameplayPlatformLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGameInstance* GetGameInstanceFromContextObject(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAudioPlatformLevel();
    
    UFUNCTION(BlueprintCallable)
    static void ForceNetUpdate(UObject* Obj);
    
    UFUNCTION(BlueprintCallable)
    static void ForceGarbageCollection(bool bFullPurge);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float FloatMath(ESDIMathOperation Op, float A, float B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<float> FloatArrMathSingle(ESDIMathOperation Op, const TArray<float>& A, float B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<float> FloatArrMathMulti(ESDIMathOperation Op, const TArray<float>& A, const TArray<float>& B, bool bIntegralElements);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float FloatArrMath(ESDIMathOperation Op, const TArray<float>& Floats, int32& OutIndex);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindTargetsOverlapWedgeNoDelegates(TArray<FSDITargetSearchEntry>& OutTargets, const AActor* Searcher, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge, TEnumAsByte<ECollisionChannel> OverlapChannel, bool bRequireLOS, TEnumAsByte<ECollisionChannel> LOSChannel, bool bSort, bool bUseClosestLocation, float DebugRenderDuration);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindTargetsOverlapWedge(TArray<FSDITargetSearchEntry>& OutTargets, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge, FSDIStructuresCurvedWedgeGeometryLocationDynamicDelegate LocationDelegate, FSDIStructuresCurvedWedgeGeometryFilterDynamicDelegate FilterDelegate, FSDIStructuresCurvedWedgeGeometryBetterThanDynamicDelegate BetterThanDelegate, TEnumAsByte<ECollisionChannel> OverlapChannel, bool bRequireLOS, TEnumAsByte<ECollisionChannel> LOSChannel, bool bSort, bool bUseClosestLocation, float DebugRenderDuration);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindTargetsOverlapSingleShapeNoDelegates(UPARAM(Ref) TArray<FSDITargetSearchEntry>& OutTargets, const AActor* Searcher, const FTransform& SearchTransform, const FSDITransformCollisionShape& Shape, bool bRelativeShapeTransform, TEnumAsByte<ECollisionChannel> OverlapChannel, FRotator HalfArcAngles, bool bRequireLOS, TEnumAsByte<ECollisionChannel> LOSChannel, bool bSort, bool bUseClosestLocation, float DebugRenderDuration);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindTargetsOverlapSingleShape(UPARAM(Ref) TArray<FSDITargetSearchEntry>& OutTargets, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDITransformCollisionShape& Shape, FSDIStructuresTargetSearchLocationDynamicDelegate LocationDelegate, FSDIStructuresTargetSearchFilterDynamicDelegate FilterDelegate, FSDIStructuresTargetSearchBetterThanDynamicDelegate BetterThanDelegate, bool bRelativeShapeTransform, TEnumAsByte<ECollisionChannel> OverlapChannel, FRotator HalfArcAngles, bool bRequireLOS, TEnumAsByte<ECollisionChannel> LOSChannel, bool bSort, bool bUseClosestLocation, float DebugRenderDuration);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindTargetsOverlapDualShapeNoDelegates(UPARAM(Ref) TArray<FSDITargetSearchEntry>& OutTargets, const AActor* Searcher, const FTransform& SearchTransform, const FSDITransformCollisionShape& InnerShape, const FSDITransformCollisionShape& OuterShape, bool bRelativeInnerShapeTransform, bool bRelativeOuterShapeTransform, TEnumAsByte<ECollisionChannel> OverlapChannel, FRotator HalfArcAngles, bool bRequireLOS, TEnumAsByte<ECollisionChannel> LOSChannel, bool bSort, bool bUseClosestLocation, float DebugRenderDuration);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindTargetsOverlapDualShape(UPARAM(Ref) TArray<FSDITargetSearchEntry>& OutTargets, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDITransformCollisionShape& InnerShape, const FSDITransformCollisionShape& OuterShape, FSDIStructuresTargetSearchLocationDynamicDelegate LocationDelegate, FSDIStructuresTargetSearchFilterDynamicDelegate FilterDelegate, FSDIStructuresTargetSearchBetterThanDynamicDelegate BetterThanDelegate, bool bRelativeInnerShapeTransform, bool bRelativeOuterShapeTransform, TEnumAsByte<ECollisionChannel> OverlapChannel, FRotator HalfArcAngles, bool bRequireLOS, TEnumAsByte<ECollisionChannel> LOSChannel, bool bSort, bool bUseClosestLocation, float DebugRenderDuration);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindTargetsInPoolWedgeNoDelegates(TArray<FSDITargetSearchEntry>& OutTargets, const TArray<AActor*>& TargetPool, const AActor* Searcher, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge, bool bRequireLOS, TEnumAsByte<ECollisionChannel> LOSChannel, bool bSort, bool bUseClosestLocation, float DebugRenderDuration);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindTargetsInPoolWedge(TArray<FSDITargetSearchEntry>& OutTargets, const TArray<AActor*>& TargetPool, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge, FSDIStructuresCurvedWedgeGeometryLocationDynamicDelegate LocationDelegate, FSDIStructuresCurvedWedgeGeometryFilterDynamicDelegate FilterDelegate, FSDIStructuresCurvedWedgeGeometryBetterThanDynamicDelegate BetterThanDelegate, bool bRequireLOS, TEnumAsByte<ECollisionChannel> LOSChannel, bool bSort, bool bUseClosestLocation, float DebugRenderDuration);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindTargetsInPoolSingleShapeNoDelegates(UPARAM(Ref) TArray<FSDITargetSearchEntry>& OutTargets, const TArray<AActor*>& TargetPool, const AActor* Searcher, const FTransform& SearchTransform, const FSDITransformCollisionShape& Shape, bool bRelativeShapeTransform, FRotator HalfArcAngles, bool bRequireLOS, TEnumAsByte<ECollisionChannel> LOSChannel, bool bSort, bool bUseClosestLocation, float DebugRenderDuration);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindTargetsInPoolSingleShape(TArray<FSDITargetSearchEntry>& OutTargets, const TArray<AActor*>& TargetPool, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDITransformCollisionShape& Shape, FSDIStructuresTargetSearchLocationDynamicDelegate LocationDelegate, FSDIStructuresTargetSearchFilterDynamicDelegate FilterDelegate, FSDIStructuresTargetSearchBetterThanDynamicDelegate BetterThanDelegate, bool bRelativeShapeTransform, FRotator HalfArcAngles, bool bRequireLOS, TEnumAsByte<ECollisionChannel> LOSChannel, bool bSort, bool bUseClosestLocation, float DebugRenderDuration);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindTargetsInPoolDualShapeNoDelegates(UPARAM(Ref) TArray<FSDITargetSearchEntry>& OutTargets, const TArray<AActor*>& TargetPool, const AActor* Searcher, const FTransform& SearchTransform, const FSDITransformCollisionShape& InnerShape, const FSDITransformCollisionShape& OuterShape, bool bRelativeInnerShapeTransform, bool bRelativeOuterShapeTransform, FRotator HalfArcAngles, bool bRequireLOS, TEnumAsByte<ECollisionChannel> LOSChannel, bool bSort, bool bUseClosestLocation, float DebugRenderDuration);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindTargetsInPoolDualShape(TArray<FSDITargetSearchEntry>& OutTargets, const TArray<AActor*>& TargetPool, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDITransformCollisionShape& InnerShape, const FSDITransformCollisionShape& OuterShape, FSDIStructuresTargetSearchLocationDynamicDelegate LocationDelegate, FSDIStructuresTargetSearchFilterDynamicDelegate FilterDelegate, FSDIStructuresTargetSearchBetterThanDynamicDelegate BetterThanDelegate, bool bRelativeInnerShapeTransform, bool bRelativeOuterShapeTransform, FRotator HalfArcAngles, bool bRequireLOS, TEnumAsByte<ECollisionChannel> LOSChannel, bool bSort, bool bUseClosestLocation, float DebugRenderDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName FindRootmostBone(const USkeletalMeshComponent* Mesh, const TArray<FName>& BoneNames);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName FindRigidBodyBone(const USkeletalMeshComponent* Mesh, FName SocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindInstigatorInfo(const UObject* Object, AController*& OutController, APawn*& OutPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AController* FindInstigatorController(const UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APawn* FindInstigator(const UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 FindClosestBoneMatch(FName BoneName, const USkeletalMeshComponent* Mesh, const TArray<FName>& BoneNames, bool bExact);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 FindClassMatch(UClass* SearchClass, const TArray<UClass*>& ClassArr, bool bExact);
    
    UFUNCTION(BlueprintCallable)
    static USceneComponent* FindChildComponent(const FName& ChildComponentName, USceneComponent* Parent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_ClassClassOrSubclass(UClass* A, UClass* B, bool bACanBeSubclassOfB);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugTransformShape(const UObject* WorldContextObject, const FSDITransformCollisionShape& InShape, FLinearColor Color, bool bPersistent, float LifeTime, int32 SphereSegments);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugSimpleSphere(const UObject* WorldContextObject, const FVector& Center, float Radius, FLinearColor Color, bool bPersistentLines, float LifeTime);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugShape(const UObject* WorldContextObject, const FSDICollisionShape& InShape, const FVector& Location, const FRotator& Rotation, FLinearColor Color, bool bPersistent, float LifeTime, int32 SphereSegments);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugProjectilePathResult(const UObject* WorldContextObject, const FPredictProjectilePathResult& inPredictResult, FLinearColor Color, bool bPersistent, float LifeTime);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugProjectilePath(const UObject* WorldContextObject, const FVector& Start, const FVector& Velocity, float Time, TEnumAsByte<ECollisionChannel> TraceChannel, const TArray<AActor*>& ActorsToIgnore, FLinearColor Color, bool bPersistent, float LifeTime);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugMotionHistory(const UObject* WorldContextObject, const FSDIMotionHistory& History, float Timespan, FLinearColor Color, bool bPersistent, float LifeTime);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugHitResult(const UObject* WorldContextObject, const FHitResult& HitResult, bool bPersistent, float LifeTime);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugBodiesByName(UPrimitiveComponent* Component, const TArray<FName>& BodyNames, FLinearColor Color, bool bPersistent, float LifeTime, int32 SphereSegments);
    
    UFUNCTION(BlueprintCallable)
    static void DrawDebugBodies(UPrimitiveComponent* Component, bool bPersistent, float LifeTime, int32 SphereSegments);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float DotProductToLinear(float DotP);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float DotProductToExp(float DotP, float Exp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float DistanceToCollisionShape(const FVector& Point, const FSDICollisionShape& Shape, const FTransform& ShapeTransform);
    
    UFUNCTION(BlueprintCallable)
    static FTimerHandle DestroyActorNextFrame(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector DefaultTargetSearchLocationDynamicDelegate(const AActor* Actor, const UPrimitiveComponent* PrimComp, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDITransformCollisionShape& InnerShape, const FSDITransformCollisionShape& OuterShape, bool bUseClosestLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DefaultTargetSearchFilterDynamicDelegate(const AActor* Actor, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDITransformCollisionShape& InnerShape, const FSDITransformCollisionShape& OuterShape);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DefaultTargetSearchBetterThanDynamicDelegate(const FSDITargetSearchEntry& Entry, const FSDITargetSearchEntry& Other, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDITransformCollisionShape& InnerShape, const FSDITransformCollisionShape& OuterShape);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector DefaultCurvedWedgeGeometryLocationDynamicDelegate(const AActor* Actor, const UPrimitiveComponent* PrimComp, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge, bool bUseClosestLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DefaultCurvedWedgeGeometryFilterDynamicDelegate(const AActor* Actor, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DefaultCurvedWedgeGeometryBetterThanDynamicDelegate(const FSDITargetSearchEntry& Entry, const FSDITargetSearchEntry& Other, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DebugCheatsAllowed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator CreateLookatRotation(FVector Direction, FRotator CurrentRotation, FVector UpHint, bool bForceUp);
    
    UFUNCTION(BlueprintCallable)
    static void CopyRenderSettingsToComponent(UPrimitiveComponent* DestComp, const UPrimitiveComponent* SrcComp);
    
    UFUNCTION(BlueprintCallable)
    static void CopyRenderSettingsToActor(AActor* DestActor, const UPrimitiveComponent* SrcComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ComputeNewVelocity(FVector CurrentVelocity, FVector DesiredVelocity, float DeltaTime, float Accel, float Decel, float RotationSpeedDeg);
    
    UFUNCTION(BlueprintCallable)
    static int32 ComputeHierarchyCount(USceneComponent* Root, bool bIncludeChildActors, bool bIncludeEditorOnly);
    
    UFUNCTION(BlueprintCallable)
    static bool ComputeComponentMoveWithCollision(FTransform& OutTransform, UPrimitiveComponent* Comp, FVector StartLoc, FVector EndLoc, FRotator Rotation, const TArray<AActor*>& ActorsToIgnore, const TArray<UPrimitiveComponent*>& ComponentsToIgnore, int32 NumSlideIterations);
    
    UFUNCTION(BlueprintCallable)
    static int32 ComputeActorHierarchyCount(AActor* Actor, bool bIncludeChildActors, bool bIncludeEditorOnly);
    
    UFUNCTION(BlueprintCallable)
    static bool ComponentPhysicsActive(UPrimitiveComponent* Component, float MaxLinearVelocity, float MaxAngularVelocityDegrees);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ClosestPointOnRay(const FVector& Point, const FVector& StartPoint, const FVector& Direction);
    
    UFUNCTION(BlueprintCallable)
    static bool ClosestPointOnPrimitiveCollision(UPrimitiveComponent* Comp, FVector SearchPoint, FVector& OutPoint, bool bClampToOutside);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ClosestPointOnCollisionShape(const FVector& Point, const FSDICollisionShape& Shape, const FTransform& ShapeTransform, bool bClampToOutside);
    
    UFUNCTION(BlueprintCallable)
    static bool ClosestPointOnActorCollision(AActor* Target, FVector SearchPoint, FVector& OutPoint, UPrimitiveComponent*& OutComp, bool bClampToOutside);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ClosestPointAndTimeOnSegment(const FVector& Point, const FVector& StartPoint, const FVector& EndPoint, float& Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ClosestPointAndTimeOnRay(const FVector& Point, const FVector& StartPoint, const FVector& Direction, float& Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ClampedSegmentPlaneIntersection(const FVector& StartPoint, const FVector& EndPoint, const FVector& PlaneOrigin, const FVector& PlaneNormal, FVector& OutClampedIntersection);
    
    UFUNCTION(BlueprintCallable)
    static FRotator CircularClampPitchYaw(FRotator Input, FRotator Min, FRotator Max, float ExtraRadius, float& OutTime, FRotator& OutCenter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalculateInterpolationTime(const FTransform& StartTransform, const FTransform& EndTransform, float LocationInterpolationSpeed, float RotationInterpolationSpeedDeg);
    
    UFUNCTION(BlueprintCallable)
    static FString BuildHierarchyString(USceneComponent* Root, bool bIncludeChildActors, bool bIncludeEditorOnly);
    
    UFUNCTION(BlueprintCallable)
    static FString BuildActorHierarchyString(AActor* Actor, bool bIncludeChildActors, bool bIncludeEditorOnly);
    
    UFUNCTION(BlueprintCallable)
    static void AttachToAtWorldTransform(USceneComponent* Root, USceneComponent* Parent, FName SocketName, FTransform WorldTransform, USceneComponent* TransformComp, FTransform TransformCompRelativeTransform);
    
    UFUNCTION(BlueprintCallable)
    static void AttachToAtComponent(USceneComponent* Root, USceneComponent* Parent, FName SocketName, USceneComponent* TransformComp);
    
    UFUNCTION(BlueprintCallable)
    static bool ActorPhysicsActive(AActor* Actor, UPrimitiveComponent*& ActiveComponent, float MaxLinearVelocity, float MaxAngularVelocityDegrees);
    
};

