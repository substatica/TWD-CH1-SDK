#pragma once
#include "CoreMinimal.h"
#include "EAIBaseGroundMovementSpeedType.h"
#include "EAssignmentCategory.h"
#include "UObject/Object.h"
#include "EAssignmentPriority.h"
#include "ActorStimData.h"
#include "TWDAIAssignment.generated.h"

class ATWDCharacter;
class ATWDAIController;
class AActor;

UCLASS(Blueprintable)
class TWD_API UTWDAIAssignment : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAssignmentCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAssignmentPriority Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Duration;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    ATWDAIController* Assignee;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AActor* Assigner;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float TimeElapsed;
    
public:
    UTWDAIAssignment();
    UFUNCTION(BlueprintNativeEvent)
    void Tick(float DeltaTime);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool ShouldAssignedMoveBark() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool ShouldAssignedMove() const;
    
    UFUNCTION(BlueprintCallable)
    void SetAssigner(AActor* NewAssigner);
    
    UFUNCTION(BlueprintCallable)
    void SetAssignee(ATWDAIController* Controller);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsAssignedTargetConsideredHostile() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetAssigner() const;
    
    UFUNCTION(BlueprintPure)
    ATWDAIController* GetAssignee() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    ATWDCharacter* GetAssignedTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetAssignedMoveTarget();
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    EAIBaseGroundMovementSpeedType GetAssignedMoveSpeedType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndAssignment();
    
    UFUNCTION(BlueprintNativeEvent)
    void BeginAssignment();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FActorStimData> AddStims(const TArray<FActorStimData>& StimsIn);
    
};

