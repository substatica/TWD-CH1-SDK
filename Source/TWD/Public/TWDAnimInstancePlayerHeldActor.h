#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDIAnimInstance.h"
#include "TWDDragSettings.h"
#include "UObject/NoExportTypes.h"
#include "TWDArmDragSettings.h"
#include "UObject/NoExportTypes.h"
#include "TWDAnimInstancePlayerHeldActor.generated.h"

class ASDIHeldActor;

UCLASS(NonTransient)
class TWD_API UTWDAnimInstancePlayerHeldActor : public USDIAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    TSubclassOf<ASDIHeldActor> HeldActorClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName WindedCurveName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName CrouchedCurveName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableDrag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FTWDDragSettings> DragSettingsN;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FTWDDragSettings> DragSettingsNWinded;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FTWDDragSettings> DragSettingsCLF;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FTWDDragSettings> DragSettingsCLFWinded;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FTWDDragSettings DragSettings;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator PrevDrag;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator Drag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableArmDrag;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ArmDrag;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float PrevArmDrag;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FTWDArmDragSettings ArmDragSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FTWDArmDragSettings> ArmDragSettingsN;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FTWDArmDragSettings> ArmDragSettingsNWinded;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FTWDArmDragSettings> ArmDragSettingsCLF;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FTWDArmDragSettings> ArmDragSettingsCLFWinded;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableLean;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector Lean;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector PrevLean;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LeanInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, float> LeanInterpSpeedSettingsN;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, float> LeanInterpSpeedSettingsCLF;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LeanRotationVelFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnableAimRotationInterp;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator AimRotationInterp;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float AimRotationInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, float> AimRotationInterpSpeedSettingsN;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, float> AimRotationInterpSpeedSettingsNWinded;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, float> AimRotationInterpSpeedSettingsCLF;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, float> AimRotationInterpSpeedSettingsCLFWinded;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector Velocity;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FVector PrevVelocity;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float PrevLateralSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LateralSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VerticalSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ForwardSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RightSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LateralSpeedPercent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ForwardSpeedPercent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RightSpeedPercent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator CharacterRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator PrevCharacterRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator AimRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator PrevAimRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator AimRotationVel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator PrevAimRotationVel;
    
public:
    UTWDAnimInstancePlayerHeldActor();
    UFUNCTION(BlueprintCallable)
    void SetDragYawSpringConstants(float SpringStiffness, float DampeningRatio);
    
    UFUNCTION(BlueprintCallable)
    void SetDragPitchSpringConstants(float SpringStiffness, float DampeningRatio);
    
    UFUNCTION(BlueprintNativeEvent)
    void Initialize(TSubclassOf<ASDIHeldActor> ThisClass);
    
};

