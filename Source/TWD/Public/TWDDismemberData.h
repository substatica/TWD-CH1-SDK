#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "QFloatExp.h"
#include "EHitReactType.h"
#include "RFloat.h"
#include "RFloatExp.h"
#include "TWDSeverBouquet.h"
#include "TWDDismemberData.generated.h"

class ATWDDismemberLimbCap;
class ATWDDismemberDroppedLimb;
class ATWDDismemberDroppedLimbAdvanced;

USTRUCT(BlueprintType)
struct FTWDDismemberData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<ATWDDismemberLimbCap> LimbCapClass;
    
    UPROPERTY(EditAnywhere)
    FName LimbCapAttachSocket;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ATWDDismemberDroppedLimb> DroppedLimbClass;
    
    UPROPERTY(EditAnywhere)
    FName DroppedLimbSpawnSocket;
    
    UPROPERTY(EditAnywhere)
    FRFloatExp DroppedLimbVelocity;
    
    UPROPERTY(EditAnywhere)
    FRFloatExp DroppedLimbZVelocityBoost;
    
    UPROPERTY(EditAnywhere)
    FRFloat DroppedLimbZVelocityRange;
    
    UPROPERTY(EditAnywhere)
    FRFloatExp DroppedLimbImpulse;
    
    UPROPERTY(EditAnywhere)
    FName DroppedLimbImpulseBone;
    
    UPROPERTY(EditAnywhere)
    FRFloatExp DroppedLimbDeathBodyImpulse;
    
    UPROPERTY(EditAnywhere)
    FName DroppedLimbDeathBodyImpulseBone;
    
    UPROPERTY(EditAnywhere)
    FQFloatExp AdvancedDismemberImpulse;
    
    UPROPERTY(EditAnywhere)
    float AdvancedDismemberSeverNormalScale;
    
    UPROPERTY(EditAnywhere)
    float AdvancedDismemberSeverNormalScaleFlat;
    
    UPROPERTY(EditAnywhere)
    float AdvancedDismemberImpulseLocNormalBias;
    
    UPROPERTY(EditAnywhere)
    FRFloatExp DroppedLimbDeathBodyImpulseAdvanced;
    
    UPROPERTY(EditAnywhere)
    FName DroppedLimbDeathBodyImpulseBoneAdvanced;
    
    UPROPERTY(EditAnywhere)
    float AdvancedDismemberMaxAngleOfDeviationFromBoneDirection;
    
    UPROPERTY(EditAnywhere)
    float AdvancedDismemberMaxAngleOfDeviationFromBoneDirectionForTransverseCut;
    
    UPROPERTY(EditAnywhere)
    FName TermBodyRootBone;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ATWDDismemberDroppedLimbAdvanced> DroppedLimbAdvancedClass;
    
    UPROPERTY(EditAnywhere)
    bool bAdvancedDismemberOnly;
    
    UPROPERTY(EditAnywhere)
    FTWDSeverBouquet SeverBouquet;
    
    UPROPERTY(EditAnywhere)
    EHitReactType SeverHitReactType;
    
    UPROPERTY(Transient)
    FName TermBodyRootBoneAdvanced;
    
    UPROPERTY(Transient)
    int32 CutBoneIndex;
    
    UPROPERTY(Transient)
    TArray<int32> KeepBoneIndices;
    
public:
    TWD_API FTWDDismemberData();
};

