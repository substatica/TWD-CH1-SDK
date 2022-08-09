#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/InputScaleBias.h"
#include "SDIAnimNode_SyncPoseDriver.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIAnimNode_SyncPoseDriver : public FAnimNode_Base {
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
    
public:
    FSDIAnimNode_SyncPoseDriver();
};

