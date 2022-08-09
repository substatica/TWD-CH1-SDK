#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Character.h"
#include "SDIDamageTakenReplicationInterface.h"
#include "SDIAimAssistTargetInterface.h"
#include "SDIInputStick.h"
#include "SDIPooledObjectInterface.h"
#include "SDIDamageInflictedReplicationInterface.h"
#include "SDIReplicatedRagdollBone.h"
#include "SDIPooledObjectBlueprintInterface.h"
#include "SDICoreCharacterADSChangedSignatureDelegate.h"
#include "SDIReplicatedDamageData.h"
#include "SDIPooledObjectData.h"
#include "SDICoreCharacter.generated.h"

class USDICollisionChannelIgnoranceComponent;
class USDICoreUtilityAI;
class APlayerController;
class ASDIObjectPool;

UCLASS(Blueprintable)
class SDICOREPLUGIN_API ASDICoreCharacter : public ACharacter, public ISDIDamageTakenReplicationInterface, public ISDIDamageInflictedReplicationInterface, public ISDIPooledObjectInterface, public ISDIPooledObjectBlueprintInterface, public ISDIAimAssistTargetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USDICollisionChannelIgnoranceComponent* CapsuleCollisionIgnoranceComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USDICollisionChannelIgnoranceComponent* MeshCollisionIgnoranceComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintCancelMinVelocityPct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintCancelTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintMinAnalogInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FSDIReplicatedRagdollBone> RepRagdollBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIInputStick InputMoveStick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USDICoreUtilityAI> UtilityAIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetObstructedCullDistanceSquared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bRepADS, meta=(AllowPrivateAccess=true))
    bool bRepADS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCtrlSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCtrlSprintWasToggled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SprintCancelTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCtrlCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCtrlCrouchWasToggled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAnyRagdollBonesUpdated;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICoreCharacterADSChangedSignature ADSChangedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepDamageTakenData, meta=(AllowPrivateAccess=true))
    FSDIReplicatedDamageData RepDamageTakenData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepDamageInflictedData, meta=(AllowPrivateAccess=true))
    FSDIReplicatedDamageData RepDamageInflictedData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDIPooledObjectData PooledObjectData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PrimaryAimAssistSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SecondaryAimAssistSocketName;
    
public:
    ASDICoreCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UtilityAIConsumingInput() const;
    
    UFUNCTION(BlueprintCallable)
    void SetADS(bool bADS);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetADS(bool bADS);
    
    UFUNCTION(BlueprintCallable)
    void ResetInputs();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerControllerDetached(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerControllerAttached(APlayerController* PC);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RepDamageTakenData(const FSDIReplicatedDamageData& OldRepDamageTakenData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepDamageInflictedData(const FSDIReplicatedDamageData& OldRepDamageInflictedData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bRepADS(bool bOldRepADS);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnADSChanged(bool bADS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThirdPerson() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsInImmobileState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstPerson() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsADSAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<USDICoreUtilityAI> GetUtilityAIClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSDIReplicatedDamageData GetLastDamageTaken() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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

