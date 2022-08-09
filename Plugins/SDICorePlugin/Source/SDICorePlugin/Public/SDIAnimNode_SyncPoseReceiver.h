#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/InputScaleBias.h"
#include "SDIAnimNode_SyncPoseReceiver.generated.h"

class USkeletalMesh;
class USDIAnimInstance;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIAnimNode_SyncPoseReceiver : public FAnimNode_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPoseLink SourcePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FInputScaleBias AlphaScaleBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PoseName;
    
    UPROPERTY(Transient)
    float ActualAlpha;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<USDIAnimInstance> DriverAnimInstance;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<USkeletalMesh> DriverMesh;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<USkeletalMesh> TargetMesh;
    
    UPROPERTY(Transient)
    TMap<int32, int32> BoneMapToSource;
    
public:
    FSDIAnimNode_SyncPoseReceiver();
};

