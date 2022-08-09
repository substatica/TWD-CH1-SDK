#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "SDISyncDriverPose.h"
#include "Components/SceneComponent.h"
#include "SDIAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class SDICOREPLUGIN_API USDIAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveComponentSpaceTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTransform> ComponentSpaceTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FSDISyncDriverPose> SyncDriverPoses;
    
public:
    USDIAnimInstance();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ResetInstance();
    
    UFUNCTION(BlueprintPure)
    bool GetAnimationTransform(FTransform& OutTransform, FName SocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanGetAnimationTransform() const;
    
};

