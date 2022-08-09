#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "ETWDSuspiciousStates.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ActorStimData.h"
#include "TWDBTS_SuspiciousService.generated.h"

class ATWDAIController;

UCLASS(Blueprintable)
class TWD_API UTWDBTS_SuspiciousService : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackboardKeySelector CurrentTargetKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackboardKeySelector CurrentSuspicionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackboardKeySelector ReactingToSoundKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackboardKeySelector SuspicionStateKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBlackboardKeySelector CharacterReactionKey;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TMap<ETWDSuspiciousStates, float> StateUpperThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ETWDSuspiciousStates> SuspicionStateOrder;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    ATWDAIController* AIController;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FActorStimData SightMax;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FActorStimData HostileSightMax;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FActorStimData HearingMax;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FActorStimData HostileHearingMax;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<FActorStimData> StimData;
    
    UTWDBTS_SuspiciousService();
    UFUNCTION(BlueprintNativeEvent)
    bool UpdateTarget();
    
    UFUNCTION(BlueprintNativeEvent)
    ETWDSuspiciousStates GetSuspicionStateKey();
    
};

