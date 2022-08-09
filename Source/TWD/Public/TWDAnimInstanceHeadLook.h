#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EAnimInstanceHeadLookCharacterType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TWDAnimInstanceHeadLook.generated.h"

class ACharacter;

UCLASS(NonTransient)
class TWD_API UTWDAnimInstanceHeadLook : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EAnimInstanceHeadLookCharacterType CharacterType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsHeadTracking;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector LookAtTargetLocation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HeadInterpolateSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HeadLookAtLocationMaxPitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HeadLookAtLocationMinPitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HeadLookAtLocationMaxYaw;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HeadLookAtLocationMinYaw;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LookAtAlpha_Head;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LookAtAlpha_Neck02;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LookAtAlpha_Neck01;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LookAtAlpha_Spine03;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LookAtAlpha_Spine02;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LookAtAlpha_Spine01;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PlayerCapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseIsEyeTrackingOnly;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EyeTrackingOnlyInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ACharacter* Character;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float EyeUpDown;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float EyeLeftRight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LookAtAlpha_Head_Normalized;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LookAtAlpha_Neck02_Normalized;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LookAtAlpha_Neck01_Normalized;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LookAtAlpha_Spine03_Normalized;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LookAtAlpha_Spine02_Normalized;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float LookAtAlpha_Spine01_Normalized;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator BodyLookAtRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator HeadLookAtRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator RightEyeLookAtRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRotator LeftEyeLookAtRotation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float EyeTrackingOnlyMultiplier;
    
public:
    UTWDAnimInstanceHeadLook();
};

