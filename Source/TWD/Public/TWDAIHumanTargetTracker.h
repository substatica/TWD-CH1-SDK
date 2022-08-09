#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TWDAIRing.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TWDAIHumanTargetTracker.generated.h"

UCLASS()
class UTWDAIHumanTargetTracker : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FTWDAIRing> RingList;
    
    UPROPERTY(Transient)
    float AttackAngleThickness;
    
    UPROPERTY(Transient)
    float EvalTime;
    
    UPROPERTY(Transient)
    float EvalTimestamp;
    
    UPROPERTY(Transient)
    float EvalDistance;
    
    UPROPERTY(Transient)
    bool bEvalLastTargetPositionValid;
    
    UPROPERTY(Transient)
    FVector EvalLastTargetPosition;
    
    UPROPERTY(Transient)
    FVector EvalLastTargetPositionOnGround;
    
    UPROPERTY(Transient)
    bool bAboveGround;
    
    UPROPERTY(Transient)
    int32 InitialRingCount;
    
    UPROPERTY(Transient)
    float InitialRingRadius;
    
    UPROPERTY(Transient)
    float BetweenRingSpacing;
    
    UPROPERTY(Transient)
    float FightSlotRadius;
    
    UPROPERTY(Transient)
    float FightSlotSpacing;
    
    UPROPERTY(Transient)
    float FightSlotShift;
    
    UPROPERTY(Transient)
    bool bIsOnTopOfBoxMode;
    
    UPROPERTY(Transient)
    FVector BoxMin;
    
    UPROPERTY(Transient)
    FVector BoxMax;
    
    UPROPERTY(Transient)
    FTransform BoxXForm;
    
    UPROPERTY(Transient)
    bool bChooseSlotBasedOnAttackerLocation;
    
    UPROPERTY(Transient)
    float AIRingHeightExtent;
    
    UTWDAIHumanTargetTracker();
};

