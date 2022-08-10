#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/GameplayStaticsTypes.h"
#include "SDISplineMeshActor.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIInputSplineActor.generated.h"

class AActor;
class APawn;
class ASDIPlayerHand;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIInputSplineActor : public ASDISplineMeshActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> DestinationBlueprint;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> ArcTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bArcUseHMD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bArcUseHMDLookAtTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArcHMDLookAtTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArcRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArcSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArcTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ArcRelDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArcDirectionZBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxForwardAngleDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArcDisengageMaintainTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bControlEngaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTransformValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Destination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector IncomingFacingInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector FacingInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector ArcVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ArcDisengageMaintainTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bArcResultValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPredictProjectilePathResult ArcResult;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<APawn> OverridePawn;
    
public:
    ASDIInputSplineActor();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UpdateTransform();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetControlEngaged(bool bEngaged, APawn* inOverridePawn);
    
    UFUNCTION(BlueprintCallable)
    void SetArcUseHMD(bool bUseHMD);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHitResult K2GetHitResult() const;
    
    UFUNCTION(BlueprintCallable)
    void InputReleased();
    
    UFUNCTION(BlueprintCallable)
    void InputPressed();
    
    UFUNCTION(BlueprintCallable)
    void InputFacingLR(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputFacingFB(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputAxis(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidArc() const;
    
//   UFUNCTION(BlueprintNativeEvent, BlueprintPure)
//   TEnumAsByte<ECollisionChannel> GetTraceChannel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AActor*> GetIgnoredActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDIPlayerHand* GetHand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFacingInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetArcVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetArcSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector ComputeArcVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ArcUsesHMD() const;
    
};

