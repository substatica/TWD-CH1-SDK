#pragma once
#include "CoreMinimal.h"
#include "ESDIHandPose.h"
#include "SDIPlayerHand.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIGripInfo.h"
#include "SDIPlayerHandAdvanced.generated.h"

class UHapticFeedbackEffect_Base;
class UPrimitiveComponent;
class UActorComponent;

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDIPlayerHandAdvanced : public ASDIPlayerHand {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UHapticFeedbackEffect_Base* GrabSurfaceFeedback;
    
    UPROPERTY(EditAnywhere)
    UHapticFeedbackEffect_Base* GrabClimbableSurfaceFeedback;
    
    UPROPERTY(EditAnywhere)
    UHapticFeedbackEffect_Base* TouchSurfaceFeedback;
    
    UPROPERTY(EditAnywhere)
    UHapticFeedbackEffect_Base* TouchClimbableSurfaceFeedback;
    
    UPROPERTY(EditAnywhere)
    ESDIHandPose GripSurfacePose;
    
    UPROPERTY(EditAnywhere)
    ESDIHandPose GripClimbableSurfacePose;
    
    UPROPERTY(EditDefaultsOnly)
    float GripSafetyInflation;
    
    UPROPERTY(EditDefaultsOnly)
    float ClimbingGripSafetyTimeBeforePress;
    
    UPROPERTY(EditDefaultsOnly)
    float ClimbingGripSafetyTimeAfterPress;
    
    UPROPERTY(EditDefaultsOnly)
    float GrabAndPullGripSafetyTimeBeforePress;
    
    UPROPERTY(EditDefaultsOnly)
    float GrabAndPullGripSafetyTimeAfterPress;
    
    UPROPERTY(EditDefaultsOnly)
    float SurfaceClenchFingerTraceDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float SurfaceClenchDownDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float SurfaceClenchDownHitClenchMinCollisionTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<ECollisionChannel> ClimbingTraceChannel;
    
    UPROPERTY(Transient)
    FHitResult LastValidWorldTouch;
    
    UPROPERTY(Transient)
    float LastValidWorldTouchTimestamp;
    
    UPROPERTY(Transient)
    FHitResult LastValidWorldClimbableTouch;
    
    UPROPERTY(Transient)
    float LastValidWorldClimbableTouchTimestamp;
    
    UPROPERTY(Export, Transient)
    TArray<TWeakObjectPtr<UPrimitiveComponent>> ExtraWorldGripCollisionIgnorances;
    
public:
    ASDIPlayerHandAdvanced();
    UFUNCTION(BlueprintPure)
    bool WorldGripPossible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool ComputeSurfaceGrip(const FHitResult& Hit, UActorComponent*& GripComp, FTransform& OutTransform, ESDIHandPose& OutPose, float& OutClench, FSDIGripInfo& OutGripInfo) const;
    
    UFUNCTION(BlueprintPure)
    bool ClimbGripPossible() const;
    
};

