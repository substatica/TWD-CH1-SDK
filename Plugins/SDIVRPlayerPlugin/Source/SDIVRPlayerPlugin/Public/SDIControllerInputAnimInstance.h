#pragma once
#include "CoreMinimal.h"
#include "ESDIHandPose.h"
#include "Animation/AnimInstance.h"
#include "InputCoreTypes.h"
#include "SDIControllerInputAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class SDIVRPLAYERPLUGIN_API USDIControllerInputAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PoseInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LockedClench;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Trigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GripPinky;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GripRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GripMiddle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Pointing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ThumbUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GripPinkyClenchRaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GripPinkyClench;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GripRingClenchRaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GripRingClench;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GripMiddleClenchRaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GripMiddleClench;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GripPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PointingClenchRaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PointingClench;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PointingPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ThumbClenchRaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ThumbClench;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ThumbPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EControllerHand hand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESDIHandPose EndPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CachedSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClenchLocked(float& OutLockedClench) const;
    
    UFUNCTION(BlueprintCallable)
    void InputTrigger(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputThumbUp(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputPointing(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputGripRing(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputGripPinky(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputGripMiddle(float Value);
    
    UFUNCTION(BlueprintCallable)
    void InputGrip(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTrigger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetThumbUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPointing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGripRing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGripPinky() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGripMiddle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGrip() const;
    
};

