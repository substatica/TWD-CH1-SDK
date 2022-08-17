#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDDismemberActor.h"
#include "TWDWoundInterface.h"
#include "TWDStabInterface.h"
#include "Engine/EngineTypes.h"
#include "StuckWeapon.h"
#include "TWDWoundInterfaceData.h"
#include "TWDStabBone.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EWoundType.h"
#include "TWDDismemberDroppedLimb.generated.h"

class UAnimInstance;
class USkeletalMeshComponent;
class UTexture2D;
class UParticleSystem;
class AActor;

UCLASS(Blueprintable)
class ATWDDismemberDroppedLimb : public ATWDDismemberActor, public ITWDWoundInterface, public ITWDStabInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowDestructionInHub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestructionMinDistanceFromPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestructionMinTimeSinceLastRendered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle SelfDestructionTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> AnimInstanceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDWoundInterfaceData TWDWoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SplashColorTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SplashNormalTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MeatColorTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MeatNormalTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CapColorTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CapNormalTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WoundSeverityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTWDStabBone> StabBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* StabLoopParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* StabMovementParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StabMeleeDurabilityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FStuckWeapon> StuckWeapons;
    
public:
    ATWDDismemberDroppedLimb(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void SelfDestructionCheck();
    
public:
    UFUNCTION(BlueprintCallable)
    void MeshOnPhysicsStateChange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeDestroyed(bool bCheckStabStuckWeapons) const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void TrackSpawnedActorForCleanup(AActor* A, FName SpawnContext) override PURE_VIRTUAL(TrackSpawnedActorForCleanup,);
    
    UFUNCTION(BlueprintCallable)
    void TickWounds(float DeltaTime) override PURE_VIRTUAL(TickWounds,);
    
    UFUNCTION(BlueprintCallable)
    AActor* SpawnAndTrackActorForCleanup(TSubclassOf<AActor> ActorClass, const FTransform& T, FName SpawnContext) override PURE_VIRTUAL(SpawnAndTrackActorForCleanup, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    bool SeveredTorsoVerticalCut() const override PURE_VIRTUAL(SeveredTorsoVerticalCut, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool SeveredTorsoHasRightLegBase() const override PURE_VIRTUAL(SeveredTorsoHasRightLegBase, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool SeveredTorsoHasRightArmBase() const override PURE_VIRTUAL(SeveredTorsoHasRightArmBase, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool SeveredTorsoHasLeftLegBase() const override PURE_VIRTUAL(SeveredTorsoHasLeftLegBase, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool SeveredTorsoHasLeftArmBase() const override PURE_VIRTUAL(SeveredTorsoHasLeftArmBase, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool SeveredTorsoHasHeadBase() const override PURE_VIRTUAL(SeveredTorsoHasHeadBase, return false;);
    
    UFUNCTION(BlueprintCallable)
    void SetWoundParameters() override PURE_VIRTUAL(SetWoundParameters,);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveProtectedWound(int32 WoundID) override PURE_VIRTUAL(RemoveProtectedWound, return false;);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllWounds() override PURE_VIRTUAL(RemoveAllWounds,);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxWounds() const override PURE_VIRTUAL(GetMaxWounds, return 0;);
    
    UFUNCTION(BlueprintCallable)
    void DestroySpawnedActors(FName SpawnContext) override PURE_VIRTUAL(DestroySpawnedActors,);
    
    UFUNCTION(BlueprintCallable)
    void CopyWounds(AActor* Other, bool bRemoveExisting) override PURE_VIRTUAL(CopyWounds,);
    
    UFUNCTION(BlueprintCallable)
    void ComputeSeveredTorsoExtremityMask(FVector ModelWoundCenter, FVector ModelWoundUp) override PURE_VIRTUAL(ComputeSeveredTorsoExtremityMask,);
    
    UFUNCTION(BlueprintCallable)
    int32 AddProtectedWoundRestPoseSpace(const FVector& EllipsoidCenter, const FVector& DirFwd, const FVector& DirUp, float MaxDent, float SizeRight, float SizeUp, float DistanceForward, FVector2D SplashRatio, EWoundType WoundType) override PURE_VIRTUAL(AddProtectedWoundRestPoseSpace, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 AddProtectedGeneralWoundRestPoseSpace(const FVector& EllipsoidCenter, const FVector& DirFwd, const FVector& DirUp, int32 CutBone, TArray<int32> KeepBoneIndices, float MaxDent, float SizeRight, float SizeUp, float DistanceForward, FVector2D SplashRatio, EWoundType WoundType, bool bShowLimb, bool bDoSever) override PURE_VIRTUAL(AddProtectedGeneralWoundRestPoseSpace, return 0;);
    
};

