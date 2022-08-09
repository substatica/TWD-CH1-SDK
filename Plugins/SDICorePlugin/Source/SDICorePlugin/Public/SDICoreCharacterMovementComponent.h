#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EAIBaseGroundMovementSpeedType.h"
#include "SDICoreCharacterMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDICOREPLUGIN_API USDICoreCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxJogSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxRunSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxDashSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxStrollSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxSprintSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinAnalogWalkSpeedCrouched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinAnalogWalkSpeedSprint;
    
    UPROPERTY(EditDefaultsOnly)
    FName RagdollRootBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    float RagdollLowVelocityThreshold;
    
    UPROPERTY(EditAnywhere)
    EAIBaseGroundMovementSpeedType BaseGroundMovementSpeedType;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float MovementModeTime;
    
    UPROPERTY(Replicated, Transient)
    bool bRepWantsToSprint;
    
    UPROPERTY(Transient)
    float RagdollLowVelocityTime;
    
public:
    USDICoreCharacterMovementComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetBaseGroundMovementSpeedType(EAIBaseGroundMovementSpeedType NewBaseGroundMovementSpeedType);
    
    UFUNCTION(BlueprintPure)
    bool IsSprinting(bool bCheckVelocity) const;
    
    UFUNCTION(BlueprintPure)
    bool IsRagdoll(bool& bOutOnFloor, float& OutLowVelocityTime) const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxSprintSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxSpeedWithoutSprinting() const;
    
    UFUNCTION(BlueprintPure)
    EAIBaseGroundMovementSpeedType GetBaseGroundMovementSpeedType() const;
    
};

