#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Animation/AnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "SDISyncDriverPose.h"
#include "SDIAnimInstance.generated.h"

UCLASS(NonTransient)
class SDICOREPLUGIN_API USDIAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSaveComponentSpaceTransforms;
    
    UPROPERTY(Transient)
    TArray<FTransform> ComponentSpaceTransforms;
    
    UPROPERTY(Transient)
    TMap<FName, FSDISyncDriverPose> SyncDriverPoses;
    
public:
    USDIAnimInstance();
    UFUNCTION(BlueprintNativeEvent)
    bool ResetInstance();
    
    UFUNCTION(BlueprintPure)
    bool GetAnimationTransform(FTransform& OutTransform, FName SocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace) const;
    
    UFUNCTION(BlueprintPure)
    bool CanGetAnimationTransform() const;
    
};

