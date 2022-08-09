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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink SourcePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputScaleBias AlphaScaleBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PoseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ActualAlpha;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<USDIAnimInstance> DriverAnimInstance;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<USkeletalMesh> DriverMesh;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<USkeletalMesh> TargetMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> BoneMapToSource;
    
public:
    FSDIAnimNode_SyncPoseReceiver();
};

