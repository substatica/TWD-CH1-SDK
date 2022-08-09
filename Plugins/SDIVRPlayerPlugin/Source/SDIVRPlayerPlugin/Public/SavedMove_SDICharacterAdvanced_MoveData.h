#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "Engine/EngineTypes.h"
#include "eCustomMovement.h"
#include "Engine/NetSerialization.h"
#include "Engine/EngineTypes.h"
#include "SavedMove_SDICharacterAdvanced_MoveData.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSavedMove_SDICharacterAdvanced_MoveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<EMovementMode> MovementMode;
    
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<eCustomMovement::Type> CustomMovementMode;
    
    UPROPERTY(BlueprintReadOnly)
    FVector_NetQuantize LeftHandLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FHitResult LeftHandGrip;
    
    UPROPERTY(BlueprintReadOnly)
    bool bLeftHandClimbing;
    
    UPROPERTY(BlueprintReadOnly)
    FVector_NetQuantize RightHandLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FHitResult RightHandGrip;
    
    UPROPERTY(BlueprintReadOnly)
    bool bRightHandClimbing;
    
    UPROPERTY(Transient)
    FHitResult MantleTargetInfo;
    
    UPROPERTY(Transient)
    bool bMantleOver;
    
    UPROPERTY(Transient)
    bool bMantleRequireCrouch;
    
    UPROPERTY(BlueprintReadOnly)
    FVector_NetQuantize100 HMDMovementDelta;
    
    FSavedMove_SDICharacterAdvanced_MoveData();
};

