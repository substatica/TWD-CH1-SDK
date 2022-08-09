#include "SDIUtil.h"
#include "Templates/SubclassOf.h"

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
class APlayerState;
class APlayerController;
class APlayerCameraManager;
class USDIGameSingleton;
class AController;

bool USDIUtil::WasComponentRecentlyRendered(const UPrimitiveComponent* PrimComp, float Tolerance) {
    return false;
}

FVector USDIUtil::VRLerp(FVector A, FVector B, float Interp, FVector Pivot) {
    return FVector{};
}

bool USDIUtil::UpdatePhysicsConstraintTransforms(UPhysicsConstraintComponent* Constraint, const FTransform& Body1Transform, const FTransform& Body2Transform) {
    return false;
}

bool USDIUtil::TraceActor(AActor* Actor, FHitResult& OutHit, const FVector& Start, const FVector& End, const TArray<TEnumAsByte<ECollisionChannel>>& TraceChannels, const TArray<TEnumAsByte<ECollisionResponse>>& Responses, bool bTraceComplex, bool bReturnPhysicalMaterial, bool bFindClosest) {
    return false;
}

void USDIUtil::TeleportToAtWorldTransform(USceneComponent* Root, FTransform DesiredTransform, FTransform WorldTransform, USceneComponent* TransformComp, FTransform TransformCompRelativeTransform) {
}

bool USDIUtil::SweepActor(AActor* Actor, FHitResult& OutHit, const FVector& Start, const FVector& End, const FSDICollisionShape& Shape, FRotator ShapeRotation, const TArray<TEnumAsByte<ECollisionChannel>>& TraceChannels, const TArray<TEnumAsByte<ECollisionResponse>>& Responses, bool bTraceComplex, bool bFindClosest) {
    return false;
}

float USDIUtil::SplineConvertInputKeyToDistance(const USplineComponent* Spline, float InputKey) {
    return 0.0f;
}

UObject* USDIUtil::SpawnAttachment(UObject* Object, USceneComponent* Parent, const FTransform& RelativeTransform, FName SocketName) {
    return NULL;
}

bool USDIUtil::SetupPhysicsConstraint(UPhysicsConstraintComponent* Constraint, UPrimitiveComponent* Component1, FName BoneName1, const FTransform& Body1Transform, UPrimitiveComponent* Component2, FName BoneName2, const FTransform& Body2Transform, bool bReverseConstraint) {
    return false;
}

int32 USDIUtil::ScanCollisionSphere(UObject* WorldContextObject, TEnumAsByte<ECollisionChannel> TraceChannel, TArray<FHitResult>& ArcImpactInfo, int32& NearestIndex, const TArray<AActor*>& ActorsToIgnore, const FVector& Origin, FVector BaseVector, FVector Axis, int32 NumChecks, int32 NumRings, float MaxDist, FVector Extent, bool bClipToNearest, bool bDebug) {
    return 0;
}

int32 USDIUtil::ScanCollisionAxis(UObject* WorldContextObject, TEnumAsByte<ECollisionChannel> TraceChannel, TArray<FHitResult>& ArcImpactInfo, int32& NearestIndex, const TArray<AActor*>& ActorsToIgnore, const FVector& Origin, FVector BaseVector, FVector Axis, int32 NumChecks, float MaxDist, FVector Extent, bool bClipToNearest, bool bDebug, bool bSkipBaseVectors) {
    return 0;
}

bool USDIUtil::RuntimeFloatCurveHasData(const FRuntimeFloatCurve& Curve) {
    return false;
}

void USDIUtil::RefineHitResultPhysMaterial(FHitResult& HitResult) {
}

void USDIUtil::RecreatePhysicsConstraintsOnActor(AActor* Actor, UPrimitiveComponent* OtherComp) {
}

void USDIUtil::RecreatePhysicsConstraintsOn(UPrimitiveComponent* Comp) {
}

bool USDIUtil::RecreatePhysicsConstraint(UPhysicsConstraintComponent* Constraint) {
    return false;
}

bool USDIUtil::PointInsideCollisionShape(const FVector& Point, const FSDICollisionShape& Shape, const FTransform& ShapeTransform) {
    return false;
}

void USDIUtil::OverridePostProcessSettings(FPostProcessSettings& Dest, const FPostProcessSettings& Src, bool bSetOverrides, bool bClearOverrides) {
}

bool USDIUtil::OverlapActor(AActor* Actor, const FSDITransformCollisionShape& Shape, const TArray<TEnumAsByte<ECollisionChannel>>& TraceChannels, const TArray<TEnumAsByte<ECollisionResponse>>& Responses) {
    return false;
}

int32 USDIUtil::OptimizeChildActorComponents(AActor* Actor, bool bDestroyComponents, bool bIncludeFromChildActors) {
    return 0;
}

bool USDIUtil::OptimizeChildActorComponent(UChildActorComponent* Comp, bool bDestroyComponent) {
    return false;
}

bool USDIUtil::NotHasAnyTags(const FGameplayTagContainer& TagContainer, const FGameplayTagContainer& OtherContainer, bool bExactMatch) {
    return false;
}

bool USDIUtil::NotHasAllTags(const FGameplayTagContainer& TagContainer, const FGameplayTagContainer& OtherContainer, bool bExactMatch) {
    return false;
}

bool USDIUtil::NotEqual_ClassClassOrSubclass(UClass* A, UClass* B, bool bACanBeSubclassOfB) {
    return false;
}

bool USDIUtil::NavigationRaycast(UObject* WorldContextObject, const FVector& RayStart, const FVector& RayEnd, FVector& HitLocation, const FNavAgentProperties& AgentPropsToUse, TSubclassOf<UNavigationQueryFilter> FilterClass) {
    return false;
}

bool USDIUtil::MoveActorToPersistentLevel(AActor* Act, bool bIncludeOwnedChildren) {
    return false;
}

bool USDIUtil::MoveActorToLevel(AActor* Act, ULevel* Level, bool bIncludeOwnedChildren) {
    return false;
}

FVector USDIUtil::LerpVectorArray(const TArray<FVector>& Array, float Alpha, bool bIntegralElements) {
    return FVector{};
}

FTransform USDIUtil::LerpTransformArray(const TArray<FTransform>& Array, float Alpha, bool bIntegralElements) {
    return FTransform{};
}

FPredictProjectilePathPointData USDIUtil::LerpProjectilePathPointArray(const TArray<FPredictProjectilePathPointData>& Array, float Alpha, bool bIntegralElements) {
    return FPredictProjectilePathPointData{};
}

void USDIUtil::LerpPostProcessSettingsArr(FPostProcessSettings& Dest, const TArray<FPostProcessSettings>& Arr, float Alpha, bool bSetOverrides, bool bClearOverrides) {
}

void USDIUtil::LerpPostProcessSettings(FPostProcessSettings& Dest, const FPostProcessSettings& A, const FPostProcessSettings& B, float Alpha, bool bSetOverrides, bool bClearOverrides) {
}

float USDIUtil::LerpIndexHelper(int32& OutIndex0, int32& OutIndex1, int32 Num, float Alpha, bool bIntegralElements) {
    return 0.0f;
}

float USDIUtil::LerpFloatArray(const TArray<float>& Array, float Alpha, bool bIntegralElements) {
    return 0.0f;
}

bool USDIUtil::K2IsValidClass(UClass* SearchClass, const TArray<UClass*>& ValidClasses, const TArray<UClass*>& InvalidClasses) {
    return false;
}

int32 USDIUtil::K2GetWeightedRandomIndex(const TArray<float>& Weights, const TArray<int32>& IgnoredIndices) {
    return 0;
}

int32 USDIUtil::K2GetWeightedIndex(float WeightedChoice, const TArray<float>& Weights, const TArray<int32>& IgnoredIndices) {
    return 0;
}

int32 USDIUtil::K2GetRandomActorsWeightedByDistanceFromSelected(int32 NumActors, TArray<AActor*>& SelectedActors, const TArray<AActor*>& ActorPool, ESDIMathOperation DistanceWeightMathOp, bool bUse2DDistance, bool bInvertWeight) {
    return 0;
}

USDICoreAssetDatabase* USDIUtil::K2GetAssetDatabase() {
    return NULL;
}

FHitResult USDIUtil::K2ConvertHitResultToWorld(const FHitResult& HitResult) {
    return FHitResult{};
}

FHitResult USDIUtil::K2ConvertHitResultToLocal(const FHitResult& HitResult) {
    return FHitResult{};
}

FVector USDIUtil::K2ComputeProjectileAimAssistance(UObject* WorldContextObject, const FSDIUtilProjectileAimAssistTargetDynamicDelegate& TargetDelegate, const FSDICollisionCacheFilterDynamicDelegate& FilterDelegate, const FVector& StartLocation, const FVector& InitialVelocity, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<ECollisionChannel> CollisionChannel, float PathCollisionRadius, float PathCollisionTime, float TargetRadius, const UCurveFloat* TargetRadiusCurve, float TargetZOffset, const UCurveFloat* TargetZOffsetCurve, float MinResultSpeed, bool bAdjustForTargetVelocity, float DebugRenderTime) {
    return FVector{};
}

bool USDIUtil::IsValidGameMode(const UObject* WorldContextObject, const TArray<TSubclassOf<AGameMode>>& ValidGameModes, const TArray<TSubclassOf<AGameMode>>& InvalidGameModes) {
    return false;
}

bool USDIUtil::IsPlayInEditor(const UObject* WorldContextObject) {
    return false;
}

bool USDIUtil::IsPhysicsConstraintAttachedTo(UPhysicsConstraintComponent* Constraint, const UPrimitiveComponent* Component, FName BoneName) {
    return false;
}

bool USDIUtil::IsObjectChildOf(const UObject* Object, const TArray<UClass*>& Classes, bool bExact) {
    return false;
}

bool USDIUtil::IsLocallyControlledActor(AActor* Actor, bool bAllowAutonomousRoles) {
    return false;
}

bool USDIUtil::IsInFieldOfView(const FTransform& CameraTransform, const FVector& Location, float MaxHorizontalAngleDeg, float MaxVerticalAngleDeg) {
    return false;
}

bool USDIUtil::IsClassChildOf(const UClass* Class, const TArray<UClass*>& Classes, bool bExact) {
    return false;
}

bool USDIUtil::InVRMode() {
    return false;
}

float USDIUtil::InverseLerpIndexHelper(int32 Index0, int32 Num, float SubAlpha) {
    return 0.0f;
}

bool USDIUtil::HasLosToPoint(const AActor* Eyes, const FVector& TargetPos, const AActor* Target, bool bSimple, TEnumAsByte<ECollisionChannel> Channel) {
    return false;
}

bool USDIUtil::HasLosToActor(const AActor* Eyes, const AActor* Target, bool bSimple, TEnumAsByte<ECollisionChannel> Channel) {
    return false;
}

bool USDIUtil::HasLosPointToPoint(const FVector& EyePos, const FVector& TargetPos, const AActor* Eyes, const AActor* Target, TEnumAsByte<ECollisionChannel> Channel) {
    return false;
}

bool USDIUtil::HasAuthority(const UObject* Obj) {
    return false;
}

UWorld* USDIUtil::GetWorldFromContextObject(const UObject* WorldContextObject) {
    return NULL;
}

float USDIUtil::GetVolumetricLight(const UObject* WorldContextObject, const FVector& Position) {
    return 0.0f;
}

int32 USDIUtil::GetTransientID() {
    return 0;
}

float USDIUtil::GetServerTimestamp(const UObject* WorldContextObject) {
    return 0.0f;
}

float USDIUtil::GetRuntimeFloatCurveValue(const FRuntimeFloatCurve& Curve, float InTime) {
    return 0.0f;
}

bool USDIUtil::GetRefPoseTransform(FTransform& OutTransform, USkeletalMeshComponent* SkelMeshComp, FName SocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace) {
    return false;
}

FTransform USDIUtil::GetRefPoseBoneTransform(USkeletalMeshComponent* SkelMesh, FName BoneName) {
    return FTransform{};
}

UPhysicalMaterial* USDIUtil::GetRefinedHitResultPhysMaterial(const FHitResult& HitResult) {
    return NULL;
}

float USDIUtil::GetRealDeltaSeconds(const UObject* WorldContextObject) {
    return 0.0f;
}

int32 USDIUtil::GetRandomActors(int32 NumActors, TArray<AActor*>& SelectedActors, const TArray<AActor*>& ActorPool, FSDIUtilRandomActorWeightListDynamicDelegate WeightDelegate) {
    return 0;
}

int32 USDIUtil::GetRandomActorIndices(int32 NumActors, TArray<int32>& Indices, const TArray<AActor*>& ActorPool, FSDIUtilRandomActorWeightDynamicDelegate WeightDelegate) {
    return 0;
}

int32 USDIUtil::GetRandomActorIndex(const TArray<AActor*>& ActorPool, FSDIUtilRandomActorWeightDynamicDelegate WeightDelegate) {
    return 0;
}

bool USDIUtil::GetPoseSnapshotTransform(const FPoseSnapshot& Snapshot, const USkeletalMeshComponent* SkelMeshComp, FName SocketName, FTransform& OutTransform, TEnumAsByte<ERelativeTransformSpace> TransformSpace) {
    return false;
}

APlayerState* USDIUtil::GetPlayerState(const UObject* Obj) {
    return NULL;
}

int32 USDIUtil::GetPlatformMobileHiSpec() {
    return 0;
}

float USDIUtil::GetPingMs(const UObject* Obj) {
    return 0.0f;
}

bool USDIUtil::GetNearestSurface(UObject* WorldContextObject, FHitResult& OutSurface, TEnumAsByte<ECollisionChannel> TraceChannel, const TArray<AActor*>& ActorsToIgnore, const FVector& Origin, float Distance, FVector Extent, FVector BaseVector, FVector Axis, int32 NumChecks, int32 NumRings) {
    return false;
}

APlayerController* USDIUtil::GetLocalPlayerController(const UObject* WorldContextObject) {
    return NULL;
}

APlayerCameraManager* USDIUtil::GetLocalPlayerCameraManager(const UObject* WorldContextObject) {
    return NULL;
}

ULocalPlayer* USDIUtil::GetLocalPlayer(const UObject* WorldContextObject) {
    return NULL;
}

bool USDIUtil::GetGround(UObject* WorldContextObject, FHitResult& OutGround, TEnumAsByte<ECollisionChannel> TraceChannel, const TArray<AActor*>& ActorsToIgnore, const FVector& Origin, float Distance, FVector Extent) {
    return false;
}

ESDIGPU USDIUtil::GetGPU() {
    return ESDIGPU::GPU_Unknown;
}

int32 USDIUtil::GetGoreLevel() {
    return 0;
}

USDIGameSingleton* USDIUtil::GetGameSingleton() {
    return NULL;
}

int32 USDIUtil::GetGameplayPlatformLevel() {
    return 0;
}

UGameInstance* USDIUtil::GetGameInstanceFromContextObject(const UObject* WorldContextObject) {
    return NULL;
}

int32 USDIUtil::GetAudioPlatformLevel() {
    return 0;
}

void USDIUtil::ForceNetUpdate(UObject* Obj) {
}

void USDIUtil::ForceGarbageCollection(bool bFullPurge) {
}

float USDIUtil::FloatMath(ESDIMathOperation Op, float A, float B) {
    return 0.0f;
}

TArray<float> USDIUtil::FloatArrMathSingle(ESDIMathOperation Op, const TArray<float>& A, float B) {
    return TArray<float>();
}

TArray<float> USDIUtil::FloatArrMathMulti(ESDIMathOperation Op, const TArray<float>& A, const TArray<float>& B, bool bIntegralElements) {
    return TArray<float>();
}

float USDIUtil::FloatArrMath(ESDIMathOperation Op, const TArray<float>& Floats, int32& OutIndex) {
    return 0.0f;
}

int32 USDIUtil::FindTargetsOverlapWedgeNoDelegates(TArray<FSDITargetSearchEntry>& OutTargets, const AActor* Searcher, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge, TEnumAsByte<ECollisionChannel> OverlapChannel, bool bRequireLOS, TEnumAsByte<ECollisionChannel> LOSChannel, bool bSort, bool bUseClosestLocation, float DebugRenderDuration) {
    return 0;
}

int32 USDIUtil::FindTargetsOverlapWedge(TArray<FSDITargetSearchEntry>& OutTargets, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge, FSDIStructuresCurvedWedgeGeometryLocationDynamicDelegate LocationDelegate, FSDIStructuresCurvedWedgeGeometryFilterDynamicDelegate FilterDelegate, FSDIStructuresCurvedWedgeGeometryBetterThanDynamicDelegate BetterThanDelegate, TEnumAsByte<ECollisionChannel> OverlapChannel, bool bRequireLOS, TEnumAsByte<ECollisionChannel> LOSChannel, bool bSort, bool bUseClosestLocation, float DebugRenderDuration) {
    return 0;
}

int32 USDIUtil::FindTargetsOverlapSingleShapeNoDelegates(TArray<FSDITargetSearchEntry>& OutTargets, const AActor* Searcher, const FTransform& SearchTransform, const FSDITransformCollisionShape& Shape, bool bRelativeShapeTransform, TEnumAsByte<ECollisionChannel> OverlapChannel, FRotator HalfArcAngles, bool bRequireLOS, TEnumAsByte<ECollisionChannel> LOSChannel, bool bSort, bool bUseClosestLocation, float DebugRenderDuration) {
    return 0;
}

int32 USDIUtil::FindTargetsOverlapSingleShape(TArray<FSDITargetSearchEntry>& OutTargets, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDITransformCollisionShape& Shape, FSDIStructuresTargetSearchLocationDynamicDelegate LocationDelegate, FSDIStructuresTargetSearchFilterDynamicDelegate FilterDelegate, FSDIStructuresTargetSearchBetterThanDynamicDelegate BetterThanDelegate, bool bRelativeShapeTransform, TEnumAsByte<ECollisionChannel> OverlapChannel, FRotator HalfArcAngles, bool bRequireLOS, TEnumAsByte<ECollisionChannel> LOSChannel, bool bSort, bool bUseClosestLocation, float DebugRenderDuration) {
    return 0;
}

int32 USDIUtil::FindTargetsOverlapDualShapeNoDelegates(TArray<FSDITargetSearchEntry>& OutTargets, const AActor* Searcher, const FTransform& SearchTransform, const FSDITransformCollisionShape& InnerShape, const FSDITransformCollisionShape& OuterShape, bool bRelativeInnerShapeTransform, bool bRelativeOuterShapeTransform, TEnumAsByte<ECollisionChannel> OverlapChannel, FRotator HalfArcAngles, bool bRequireLOS, TEnumAsByte<ECollisionChannel> LOSChannel, bool bSort, bool bUseClosestLocation, float DebugRenderDuration) {
    return 0;
}

int32 USDIUtil::FindTargetsOverlapDualShape(TArray<FSDITargetSearchEntry>& OutTargets, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDITransformCollisionShape& InnerShape, const FSDITransformCollisionShape& OuterShape, FSDIStructuresTargetSearchLocationDynamicDelegate LocationDelegate, FSDIStructuresTargetSearchFilterDynamicDelegate FilterDelegate, FSDIStructuresTargetSearchBetterThanDynamicDelegate BetterThanDelegate, bool bRelativeInnerShapeTransform, bool bRelativeOuterShapeTransform, TEnumAsByte<ECollisionChannel> OverlapChannel, FRotator HalfArcAngles, bool bRequireLOS, TEnumAsByte<ECollisionChannel> LOSChannel, bool bSort, bool bUseClosestLocation, float DebugRenderDuration) {
    return 0;
}

int32 USDIUtil::FindTargetsInPoolWedgeNoDelegates(TArray<FSDITargetSearchEntry>& OutTargets, const TArray<AActor*>& TargetPool, const AActor* Searcher, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge, bool bRequireLOS, TEnumAsByte<ECollisionChannel> LOSChannel, bool bSort, bool bUseClosestLocation, float DebugRenderDuration) {
    return 0;
}

int32 USDIUtil::FindTargetsInPoolWedge(TArray<FSDITargetSearchEntry>& OutTargets, const TArray<AActor*>& TargetPool, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge, FSDIStructuresCurvedWedgeGeometryLocationDynamicDelegate LocationDelegate, FSDIStructuresCurvedWedgeGeometryFilterDynamicDelegate FilterDelegate, FSDIStructuresCurvedWedgeGeometryBetterThanDynamicDelegate BetterThanDelegate, bool bRequireLOS, TEnumAsByte<ECollisionChannel> LOSChannel, bool bSort, bool bUseClosestLocation, float DebugRenderDuration) {
    return 0;
}

int32 USDIUtil::FindTargetsInPoolSingleShapeNoDelegates(TArray<FSDITargetSearchEntry>& OutTargets, const TArray<AActor*>& TargetPool, const AActor* Searcher, const FTransform& SearchTransform, const FSDITransformCollisionShape& Shape, bool bRelativeShapeTransform, FRotator HalfArcAngles, bool bRequireLOS, TEnumAsByte<ECollisionChannel> LOSChannel, bool bSort, bool bUseClosestLocation, float DebugRenderDuration) {
    return 0;
}

int32 USDIUtil::FindTargetsInPoolSingleShape(TArray<FSDITargetSearchEntry>& OutTargets, const TArray<AActor*>& TargetPool, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDITransformCollisionShape& Shape, FSDIStructuresTargetSearchLocationDynamicDelegate LocationDelegate, FSDIStructuresTargetSearchFilterDynamicDelegate FilterDelegate, FSDIStructuresTargetSearchBetterThanDynamicDelegate BetterThanDelegate, bool bRelativeShapeTransform, FRotator HalfArcAngles, bool bRequireLOS, TEnumAsByte<ECollisionChannel> LOSChannel, bool bSort, bool bUseClosestLocation, float DebugRenderDuration) {
    return 0;
}

int32 USDIUtil::FindTargetsInPoolDualShapeNoDelegates(TArray<FSDITargetSearchEntry>& OutTargets, const TArray<AActor*>& TargetPool, const AActor* Searcher, const FTransform& SearchTransform, const FSDITransformCollisionShape& InnerShape, const FSDITransformCollisionShape& OuterShape, bool bRelativeInnerShapeTransform, bool bRelativeOuterShapeTransform, FRotator HalfArcAngles, bool bRequireLOS, TEnumAsByte<ECollisionChannel> LOSChannel, bool bSort, bool bUseClosestLocation, float DebugRenderDuration) {
    return 0;
}

int32 USDIUtil::FindTargetsInPoolDualShape(TArray<FSDITargetSearchEntry>& OutTargets, const TArray<AActor*>& TargetPool, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDITransformCollisionShape& InnerShape, const FSDITransformCollisionShape& OuterShape, FSDIStructuresTargetSearchLocationDynamicDelegate LocationDelegate, FSDIStructuresTargetSearchFilterDynamicDelegate FilterDelegate, FSDIStructuresTargetSearchBetterThanDynamicDelegate BetterThanDelegate, bool bRelativeInnerShapeTransform, bool bRelativeOuterShapeTransform, FRotator HalfArcAngles, bool bRequireLOS, TEnumAsByte<ECollisionChannel> LOSChannel, bool bSort, bool bUseClosestLocation, float DebugRenderDuration) {
    return 0;
}

FName USDIUtil::FindRootmostBone(const USkeletalMeshComponent* Mesh, const TArray<FName>& BoneNames) {
    return NAME_None;
}

FName USDIUtil::FindRigidBodyBone(const USkeletalMeshComponent* Mesh, FName SocketName) {
    return NAME_None;
}

bool USDIUtil::FindInstigatorInfo(const UObject* Object, AController*& OutController, APawn*& OutPawn) {
    return false;
}

AController* USDIUtil::FindInstigatorController(const UObject* Object) {
    return NULL;
}

APawn* USDIUtil::FindInstigator(const UObject* Object) {
    return NULL;
}

int32 USDIUtil::FindClosestBoneMatch(FName BoneName, const USkeletalMeshComponent* Mesh, const TArray<FName>& BoneNames, bool bExact) {
    return 0;
}

int32 USDIUtil::FindClassMatch(UClass* SearchClass, const TArray<UClass*>& ClassArr, bool bExact) {
    return 0;
}

USceneComponent* USDIUtil::FindChildComponent(const FName& ChildComponentName, USceneComponent* Parent) {
    return NULL;
}

bool USDIUtil::EqualEqual_ClassClassOrSubclass(UClass* A, UClass* B, bool bACanBeSubclassOfB) {
    return false;
}

void USDIUtil::DrawDebugTransformShape(const UObject* WorldContextObject, const FSDITransformCollisionShape& InShape, FLinearColor Color, bool bPersistent, float LifeTime, int32 SphereSegments) {
}

void USDIUtil::DrawDebugSimpleSphere(const UObject* WorldContextObject, const FVector& Center, float Radius, FLinearColor Color, bool bPersistentLines, float LifeTime) {
}

void USDIUtil::DrawDebugShape(const UObject* WorldContextObject, const FSDICollisionShape& InShape, const FVector& Location, const FRotator& Rotation, FLinearColor Color, bool bPersistent, float LifeTime, int32 SphereSegments) {
}

void USDIUtil::DrawDebugProjectilePathResult(const UObject* WorldContextObject, const FPredictProjectilePathResult& inPredictResult, FLinearColor Color, bool bPersistent, float LifeTime) {
}

void USDIUtil::DrawDebugProjectilePath(const UObject* WorldContextObject, const FVector& Start, const FVector& Velocity, float Time, TEnumAsByte<ECollisionChannel> TraceChannel, const TArray<AActor*>& ActorsToIgnore, FLinearColor Color, bool bPersistent, float LifeTime) {
}

void USDIUtil::DrawDebugMotionHistory(const UObject* WorldContextObject, const FSDIMotionHistory& History, float Timespan, FLinearColor Color, bool bPersistent, float LifeTime) {
}

void USDIUtil::DrawDebugHitResult(const UObject* WorldContextObject, const FHitResult& HitResult, bool bPersistent, float LifeTime) {
}

void USDIUtil::DrawDebugBodiesByName(UPrimitiveComponent* Component, const TArray<FName>& BodyNames, FLinearColor Color, bool bPersistent, float LifeTime, int32 SphereSegments) {
}

void USDIUtil::DrawDebugBodies(UPrimitiveComponent* Component, bool bPersistent, float LifeTime, int32 SphereSegments) {
}

float USDIUtil::DotProductToLinear(float DotP) {
    return 0.0f;
}

float USDIUtil::DotProductToExp(float DotP, float Exp) {
    return 0.0f;
}

float USDIUtil::DistanceToCollisionShape(const FVector& Point, const FSDICollisionShape& Shape, const FTransform& ShapeTransform) {
    return 0.0f;
}

FTimerHandle USDIUtil::DestroyActorNextFrame(AActor* Actor) {
    return FTimerHandle{};
}

FVector USDIUtil::DefaultTargetSearchLocationDynamicDelegate(const AActor* Actor, const UPrimitiveComponent* PrimComp, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDITransformCollisionShape& InnerShape, const FSDITransformCollisionShape& OuterShape, bool bUseClosestLocation) {
    return FVector{};
}

bool USDIUtil::DefaultTargetSearchFilterDynamicDelegate(const AActor* Actor, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDITransformCollisionShape& InnerShape, const FSDITransformCollisionShape& OuterShape) {
    return false;
}

bool USDIUtil::DefaultTargetSearchBetterThanDynamicDelegate(const FSDITargetSearchEntry& Entry, const FSDITargetSearchEntry& Other, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDITransformCollisionShape& InnerShape, const FSDITransformCollisionShape& OuterShape) {
    return false;
}

FVector USDIUtil::DefaultCurvedWedgeGeometryLocationDynamicDelegate(const AActor* Actor, const UPrimitiveComponent* PrimComp, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge, bool bUseClosestLocation) {
    return FVector{};
}

bool USDIUtil::DefaultCurvedWedgeGeometryFilterDynamicDelegate(const AActor* Actor, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge) {
    return false;
}

bool USDIUtil::DefaultCurvedWedgeGeometryBetterThanDynamicDelegate(const FSDITargetSearchEntry& Entry, const FSDITargetSearchEntry& Other, const AActor* Searcher, const UObject* SearchData, const FTransform& SearchTransform, const FSDICurvedWedgeGeometry& SearchWedge) {
    return false;
}

bool USDIUtil::DebugCheatsAllowed() {
    return false;
}

FRotator USDIUtil::CreateLookatRotation(FVector Direction, FRotator CurrentRotation, FVector UpHint, bool bForceUp) {
    return FRotator{};
}

void USDIUtil::CopyRenderSettingsToComponent(UPrimitiveComponent* DestComp, const UPrimitiveComponent* SrcComp) {
}

void USDIUtil::CopyRenderSettingsToActor(AActor* DestActor, const UPrimitiveComponent* SrcComp) {
}

FVector USDIUtil::ComputeNewVelocity(FVector CurrentVelocity, FVector DesiredVelocity, float DeltaTime, float Accel, float Decel, float RotationSpeedDeg) {
    return FVector{};
}

int32 USDIUtil::ComputeHierarchyCount(USceneComponent* Root, bool bIncludeChildActors, bool bIncludeEditorOnly) {
    return 0;
}

bool USDIUtil::ComputeComponentMoveWithCollision(FTransform& OutTransform, UPrimitiveComponent* Comp, FVector StartLoc, FVector EndLoc, FRotator Rotation, const TArray<AActor*>& ActorsToIgnore, const TArray<UPrimitiveComponent*>& ComponentsToIgnore, int32 NumSlideIterations) {
    return false;
}

int32 USDIUtil::ComputeActorHierarchyCount(AActor* Actor, bool bIncludeChildActors, bool bIncludeEditorOnly) {
    return 0;
}

bool USDIUtil::ComponentPhysicsActive(UPrimitiveComponent* Component, float MaxLinearVelocity, float MaxAngularVelocityDegrees) {
    return false;
}

FVector USDIUtil::ClosestPointOnRay(const FVector& Point, const FVector& StartPoint, const FVector& Direction) {
    return FVector{};
}

bool USDIUtil::ClosestPointOnPrimitiveCollision(UPrimitiveComponent* Comp, FVector SearchPoint, FVector& OutPoint, bool bClampToOutside) {
    return false;
}

FVector USDIUtil::ClosestPointOnCollisionShape(const FVector& Point, const FSDICollisionShape& Shape, const FTransform& ShapeTransform, bool bClampToOutside) {
    return FVector{};
}

bool USDIUtil::ClosestPointOnActorCollision(AActor* Target, FVector SearchPoint, FVector& OutPoint, UPrimitiveComponent*& OutComp, bool bClampToOutside) {
    return false;
}

FVector USDIUtil::ClosestPointAndTimeOnSegment(const FVector& Point, const FVector& StartPoint, const FVector& EndPoint, float& Time) {
    return FVector{};
}

FVector USDIUtil::ClosestPointAndTimeOnRay(const FVector& Point, const FVector& StartPoint, const FVector& Direction, float& Time) {
    return FVector{};
}

bool USDIUtil::ClampedSegmentPlaneIntersection(const FVector& StartPoint, const FVector& EndPoint, const FVector& PlaneOrigin, const FVector& PlaneNormal, FVector& OutClampedIntersection) {
    return false;
}

FRotator USDIUtil::CircularClampPitchYaw(FRotator Input, FRotator Min, FRotator Max, float ExtraRadius, float& OutTime, FRotator& OutCenter) {
    return FRotator{};
}

float USDIUtil::CalculateInterpolationTime(const FTransform& StartTransform, const FTransform& EndTransform, float LocationInterpolationSpeed, float RotationInterpolationSpeedDeg) {
    return 0.0f;
}

FString USDIUtil::BuildHierarchyString(USceneComponent* Root, bool bIncludeChildActors, bool bIncludeEditorOnly) {
    return TEXT("");
}

FString USDIUtil::BuildActorHierarchyString(AActor* Actor, bool bIncludeChildActors, bool bIncludeEditorOnly) {
    return TEXT("");
}

void USDIUtil::AttachToAtWorldTransform(USceneComponent* Root, USceneComponent* Parent, FName SocketName, FTransform WorldTransform, USceneComponent* TransformComp, FTransform TransformCompRelativeTransform) {
}

void USDIUtil::AttachToAtComponent(USceneComponent* Root, USceneComponent* Parent, FName SocketName, USceneComponent* TransformComp) {
}

bool USDIUtil::ActorPhysicsActive(AActor* Actor, UPrimitiveComponent*& ActiveComponent, float MaxLinearVelocity, float MaxAngularVelocityDegrees) {
    return false;
}

USDIUtil::USDIUtil() {
}

