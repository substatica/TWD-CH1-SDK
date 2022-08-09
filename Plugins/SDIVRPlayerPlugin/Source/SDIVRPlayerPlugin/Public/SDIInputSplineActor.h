#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "SDISplineMeshActor.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/GameplayStaticsTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "SDIInputSplineActor.generated.h"

class APawn;
class AActor;
class ASDIPlayerHand;

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDIInputSplineActor : public ASDISplineMeshActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> DestinationBlueprint;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> ArcTraceChannel;
    
    UPROPERTY(EditAnywhere)
    bool bArcUseHMD;
    
    UPROPERTY(EditAnywhere)
    bool bArcUseHMDLookAtTarget;
    
    UPROPERTY(EditAnywhere)
    float ArcHMDLookAtTargetDistance;
    
    UPROPERTY(EditAnywhere)
    float ArcRadius;
    
    UPROPERTY(EditAnywhere)
    float ArcSpeed;
    
    UPROPERTY(EditAnywhere)
    float ArcTime;
    
    UPROPERTY(EditAnywhere)
    FVector ArcRelDirection;
    
    UPROPERTY(EditAnywhere)
    float ArcDirectionZBoost;
    
    UPROPERTY(EditAnywhere)
    float MaxForwardAngleDeg;
    
    UPROPERTY(EditAnywhere)
    float MinDistance;
    
    UPROPERTY(EditAnywhere)
    float ArcDisengageMaintainTime;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bControlEngaged;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FTransform Transform;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bTransformValid;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AActor* Destination;
    
    UPROPERTY(Transient)
    FVector IncomingFacingInput;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector FacingInput;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector ArcVelocity;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ArcDisengageMaintainTimer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bArcResultValid;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FPredictProjectilePathResult ArcResult;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<APawn> OverridePawn;
    
public:
    ASDIInputSplineActor();
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool UpdateTransform();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetControlEngaged(bool bEngaged, APawn* inOverridePawn);
    
    UFUNCTION(BlueprintCallable)
    void SetArcUseHMD(bool bUseHMD);
    
    UFUNCTION(BlueprintPure)
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
    
    UFUNCTION(BlueprintPure)
    bool HasValidArc() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    TEnumAsByte<ECollisionChannel> GetTraceChannel() const;
    
    UFUNCTION(BlueprintNativeEvent)
    TArray<AActor*> GetIgnoredActors() const;
    
    UFUNCTION(BlueprintPure)
    ASDIPlayerHand* GetHand() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFacingInput() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetArcVelocity() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float GetArcSpeed() const;
    
    UFUNCTION(BlueprintNativeEvent)
    FVector ComputeArcVelocity() const;
    
    UFUNCTION(BlueprintPure)
    bool ArcUsesHMD() const;
    
};

