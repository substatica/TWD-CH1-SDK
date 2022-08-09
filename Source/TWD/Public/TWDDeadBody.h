#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDISkinnedActorSkeletalMesh.h"
#include "TWDStabBone.h"
#include "TWDWoundInterface.h"
#include "StuckWeapon.h"
#include "TWDWoundInterfaceData.h"
#include "TWDDismemberInterface.h"
#include "TWDStabInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ETWDCharacterSkinSection.h"
#include "UObject/NoExportTypes.h"
#include "SDISkinSkeletalMeshSet.h"
#include "UObject/NoExportTypes.h"
#include "EWoundType.h"
#include "TWDDeadBody.generated.h"

class UTexture2D;
class UParticleSystem;
class UTexture;
class AActor;

UCLASS()
class ATWDDeadBody : public ASDISkinnedActorSkeletalMesh, public ITWDWoundInterface, public ITWDStabInterface, public ITWDDismemberInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FTWDWoundInterfaceData TWDWoundData;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* SplashColorTexture;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* SplashNormalTexture;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* MeatColorTexture;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* MeatNormalTexture;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* CapColorTexture;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* CapNormalTexture;
    
    UPROPERTY(EditAnywhere)
    float WoundSeverityScale;
    
    UPROPERTY(EditAnywhere)
    TArray<FTWDStabBone> StabBones;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* StabLoopParticleSystem;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* StabMovementParticleSystem;
    
    UPROPERTY(EditAnywhere)
    float StabMeleeDurabilityModifier;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FStuckWeapon> StuckWeapons;
    
public:
    ATWDDeadBody();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetSkinSectionVariants(const TMap<ETWDCharacterSkinSection, FName>& Variants);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetSkinSectionVariant(ETWDCharacterSkinSection Section, FName Variant);
    
    UFUNCTION()
    void MeshOnPhysicsStateChange();
    
    UFUNCTION(BlueprintPure)
    FName GetSkinSectionVariant(ETWDCharacterSkinSection Section) const;
    
    UFUNCTION(BlueprintPure)
    void GetSkinSectionInfo(ETWDCharacterSkinSection Section, int32& OutIndex, FName& OutVariant, TMap<FName, float>& OutScalarParams, TMap<FName, FLinearColor>& OutColorParams, TMap<FName, TSoftObjectPtr<UTexture>>& OutTextureParams, FSDISkinSkeletalMeshSet& OutSkinMeshSet) const;
    
    
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
    
    UFUNCTION(BlueprintCallable)
    bool UseAdvancedDismember() const override PURE_VIRTUAL(UseAdvancedDismember, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool ShowAdvancedDismemberDebugInfo() const override PURE_VIRTUAL(ShowAdvancedDismemberDebugInfo, return false;);
    
};

