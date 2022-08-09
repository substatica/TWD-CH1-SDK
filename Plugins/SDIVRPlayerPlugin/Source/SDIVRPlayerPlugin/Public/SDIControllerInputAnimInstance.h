#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "InputCoreTypes.h"
#include "ESDIHandPose.h"
#include "SDIControllerInputAnimInstance.generated.h"

UCLASS(NonTransient)
class SDIVRPLAYERPLUGIN_API USDIControllerInputAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float InterpSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float PoseInterpSpeed;
    
    UPROPERTY(Transient)
    float LockedClench;
    
    UPROPERTY(Transient)
    float Trigger;
    
    UPROPERTY(Transient)
    float GripPinky;
    
    UPROPERTY(Transient)
    float GripRing;
    
    UPROPERTY(Transient)
    float GripMiddle;
    
    UPROPERTY(Transient)
    float Pointing;
    
    UPROPERTY(Transient)
    float ThumbUp;
    
    UPROPERTY(Transient)
    float GripPinkyClenchRaw;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GripPinkyClench;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GripRingClenchRaw;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GripRingClench;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GripMiddleClenchRaw;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GripMiddleClench;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float GripPose;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float PointingClenchRaw;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float PointingClench;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float PointingPose;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ThumbClenchRaw;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ThumbClench;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float ThumbPose;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EControllerHand hand;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ESDIHandPose EndPose;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FName CachedSnapshot;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float CachedAlpha;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float OverridePoseInterpSpeed;
    
public:
    USDIControllerInputAnimInstance();
    UFUNCTION(BlueprintCallable)
    void UnlockClench();
    
    UFUNCTION(BlueprintCallable)
    void SetPose(ESDIHandPose NewPose, bool bBlend, float BlendSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetClench(float NewClench);
    
    UFUNCTION(BlueprintCallable)
    void LockClench(float NewClench);
    
    UFUNCTION(BlueprintPure)
    bool IsClenchLocked(float& OutLockedClench) const;
    
    UFUNCTION()
    void InputTrigger(float Value);
    
    UFUNCTION()
    void InputThumbUp(float Value);
    
    UFUNCTION()
    void InputPointing(float Value);
    
    UFUNCTION()
    void InputGripRing(float Value);
    
    UFUNCTION()
    void InputGripPinky(float Value);
    
    UFUNCTION()
    void InputGripMiddle(float Value);
    
    UFUNCTION()
    void InputGrip(float Value);
    
    UFUNCTION(BlueprintPure)
    float GetTrigger() const;
    
    UFUNCTION(BlueprintPure)
    float GetThumbUp() const;
    
    UFUNCTION(BlueprintPure)
    float GetPointing() const;
    
    UFUNCTION(BlueprintPure)
    float GetGripRing() const;
    
    UFUNCTION(BlueprintPure)
    float GetGripPinky() const;
    
    UFUNCTION(BlueprintPure)
    float GetGripMiddle() const;
    
    UFUNCTION(BlueprintPure)
    float GetGrip() const;
    
};

