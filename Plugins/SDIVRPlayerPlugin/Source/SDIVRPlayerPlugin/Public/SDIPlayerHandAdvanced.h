#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDIPlayerHand.h"
#include "ESDIHandPose.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "SDIGripInfo.h"
#include "SDIPlayerHandAdvanced.generated.h"

class UHapticFeedbackEffect_Base;
class UPrimitiveComponent;
class UActorComponent;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIPlayerHandAdvanced : public ASDIPlayerHand {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* GrabSurfaceFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* GrabClimbableSurfaceFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* TouchSurfaceFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* TouchClimbableSurfaceFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESDIHandPose GripSurfacePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESDIHandPose GripClimbableSurfacePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GripSafetyInflation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbingGripSafetyTimeBeforePress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbingGripSafetyTimeAfterPress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabAndPullGripSafetyTimeBeforePress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabAndPullGripSafetyTimeAfterPress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurfaceClenchFingerTraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurfaceClenchDownDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SurfaceClenchDownHitClenchMinCollisionTime;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> ClimbingTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitResult LastValidWorldTouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastValidWorldTouchTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHitResult LastValidWorldClimbableTouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastValidWorldClimbableTouchTimestamp;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TArray<TWeakObjectPtr<UPrimitiveComponent>> ExtraWorldGripCollisionIgnorances;
    
public:
    ASDIPlayerHandAdvanced();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WorldGripPossible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool ComputeSurfaceGrip(const FHitResult& Hit, UActorComponent*& GripComp, FTransform& OutTransform, ESDIHandPose& OutPose, float& OutClench, FSDIGripInfo& OutGripInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ClimbGripPossible() const;
    
};

