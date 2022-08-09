#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Character.h"
#include "SDIAimAssistTargetInterface.h"
#include "SDIDamageTakenReplicationInterface.h"
#include "SDIPooledObjectInterface.h"
#include "SDIDamageInflictedReplicationInterface.h"
#include "SDIPooledObjectBlueprintInterface.h"
#include "SDIReplicatedRagdollBone.h"
#include "SDIInputStick.h"
#include "SDICoreCharacterADSChangedSignatureDelegate.h"
#include "SDIReplicatedDamageData.h"
#include "SDIPooledObjectData.h"
#include "SDICoreCharacter.generated.h"

class USDICollisionChannelIgnoranceComponent;
class USDICoreUtilityAI;
class APlayerController;
class ASDIObjectPool;

UCLASS()
class SDICOREPLUGIN_API ASDICoreCharacter : public ACharacter, public ISDIDamageTakenReplicationInterface, public ISDIDamageInflictedReplicationInterface, public ISDIPooledObjectInterface, public ISDIPooledObjectBlueprintInterface, public ISDIAimAssistTargetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USDICollisionChannelIgnoranceComponent* CapsuleCollisionIgnoranceComp;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USDICollisionChannelIgnoranceComponent* MeshCollisionIgnoranceComp;
    
    UPROPERTY(EditDefaultsOnly)
    float SprintCancelMinVelocityPct;
    
    UPROPERTY(EditDefaultsOnly)
    float SprintCancelTime;
    
    UPROPERTY(EditDefaultsOnly)
    float SprintMinAnalogInput;
    
    UPROPERTY(EditDefaultsOnly, Replicated)
    TArray<FSDIReplicatedRagdollBone> RepRagdollBones;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDIInputStick InputMoveStick;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<USDICoreUtilityAI> UtilityAIClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float NetObstructedCullDistanceSquared;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_bRepADS)
    bool bRepADS;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bCtrlSprint;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bCtrlSprintWasToggled;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float SprintCancelTimer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bCtrlCrouch;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bCtrlCrouchWasToggled;
    
    UPROPERTY(Transient)
    bool bAnyRagdollBonesUpdated;
    
public:
    UPROPERTY(BlueprintAssignable)
    FSDICoreCharacterADSChangedSignature ADSChangedDelegate;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RepDamageTakenData)
    FSDIReplicatedDamageData RepDamageTakenData;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RepDamageInflictedData)
    FSDIReplicatedDamageData RepDamageInflictedData;
    
private:
    UPROPERTY(Transient)
    FSDIPooledObjectData PooledObjectData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PrimaryAimAssistSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SecondaryAimAssistSocketName;
    
public:
    ASDICoreCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintPure)
    bool UtilityAIConsumingInput() const;
    
    UFUNCTION(BlueprintCallable)
    void SetADS(bool bADS);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetADS(bool bADS);
    
    UFUNCTION(BlueprintCallable)
    void ResetInputs();
    
    UFUNCTION(BlueprintNativeEvent)
    void PlayerControllerDetached(APlayerController* PC);
    
    UFUNCTION(BlueprintNativeEvent)
    void PlayerControllerAttached(APlayerController* PC);
    
protected:
    UFUNCTION()
    void OnRep_RepDamageTakenData(const FSDIReplicatedDamageData& OldRepDamageTakenData);
    
    UFUNCTION()
    void OnRep_RepDamageInflictedData(const FSDIReplicatedDamageData& OldRepDamageInflictedData);
    
    UFUNCTION()
    void OnRep_bRepADS(bool bOldRepADS);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnADSChanged(bool bADS);
    
    UFUNCTION(BlueprintPure)
    bool IsThirdPerson() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsInImmobileState() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFirstPerson() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsADSAllowed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsADS() const;
    
    UFUNCTION(BlueprintCallable)
    void InputToggleSprintReleased();
    
    UFUNCTION(BlueprintCallable)
    void InputToggleSprintPressed();
    
    UFUNCTION(BlueprintCallable)
    void InputToggleCrouchReleased();
    
    UFUNCTION(BlueprintCallable)
    void InputToggleCrouchPressed();
    
    UFUNCTION(BlueprintCallable)
    void InputSprintReleased();
    
    UFUNCTION(BlueprintCallable)
    void InputSprintPressed();
    
    UFUNCTION(BlueprintCallable)
    void InputMoveRightAxis(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputMoveRight(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputMoveLeft(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputMoveForwardAxis(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputMoveForward(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputMoveBackward(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputCrouchReleased();
    
    UFUNCTION(BlueprintCallable)
    void InputCrouchPressed();
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<USDICoreUtilityAI> GetUtilityAIClass() const;
    
    UFUNCTION(BlueprintPure)
    FSDIReplicatedDamageData GetLastDamageTaken() const;
    
    UFUNCTION(BlueprintPure)
    FSDIReplicatedDamageData GetLastDamageInflicted() const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void ReturnToPoolNextFrame() override PURE_VIRTUAL(ReturnToPoolNextFrame,);
    
    UFUNCTION(BlueprintCallable)
    void ReturnToPool() override PURE_VIRTUAL(ReturnToPool,);
    
    UFUNCTION(BlueprintCallable)
    bool IsInsidePool() const override PURE_VIRTUAL(IsInsidePool, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsFromPool() const override PURE_VIRTUAL(IsFromPool, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsBeingReturnedToPoolNextFrame() const override PURE_VIRTUAL(IsBeingReturnedToPoolNextFrame, return false;);
    
    UFUNCTION(BlueprintCallable)
    ASDIObjectPool* GetPool() const override PURE_VIRTUAL(GetPool, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    float GetAcquiredTimestamp() const override PURE_VIRTUAL(GetAcquiredTimestamp, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    void CancelReturnToPoolNextFrame() override PURE_VIRTUAL(CancelReturnToPoolNextFrame,);
    
};

