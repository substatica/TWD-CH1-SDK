#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ActorStimData.h"
#include "EAssignmentCategory.h"
#include "EAIBaseGroundMovementSpeedType.h"
#include "EAssignmentPriority.h"
#include "TWDAIAssignment.generated.h"

class ATWDCharacter;
class ATWDAIController;
class AActor;

UCLASS(Blueprintable)
class TWD_API UTWDAIAssignment : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAssignmentCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAssignmentPriority Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATWDAIController* Assignee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Assigner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeElapsed;
    
public:
    UTWDAIAssignment();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldAssignedMoveBark() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldAssignedMove() const;
    
    UFUNCTION(BlueprintCallable)
    void SetAssigner(AActor* NewAssigner);
    
    UFUNCTION(BlueprintCallable)
    void SetAssignee(ATWDAIController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsAssignedTargetConsideredHostile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetAssigner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDAIController* GetAssignee() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    ATWDCharacter* GetAssignedTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetAssignedMoveTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    EAIBaseGroundMovementSpeedType GetAssignedMoveSpeedType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndAssignment();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginAssignment();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FActorStimData> AddStims(const TArray<FActorStimData>& StimsIn);
    
};

