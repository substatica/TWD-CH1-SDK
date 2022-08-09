#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "ETaskResult.h"
#include "ETWDTaskStatusIcon.h"
#include "TWDTask.generated.h"

class UTWDSubtask;

UCLASS(Blueprintable)
class TWD_API UTWDTask : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    ETWDTaskStatusIcon CurrentStatusIcon;
    
    UPROPERTY(BlueprintReadOnly)
    float LastUpdatedTime;
    
private:
    UPROPERTY(EditDefaultsOnly)
    FText Title;
    
    UPROPERTY(EditDefaultsOnly)
    FText Description;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UTWDSubtask>> SubtaskBlueprints;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool bAllowNotifications;
    
    UPROPERTY(Transient)
    TArray<UTWDSubtask*> Subtasks;
    
public:
    UTWDTask();
    UFUNCTION(BlueprintCallable)
    void UpdateSubtask(TSubclassOf<UTWDSubtask> Subtask, ETaskResult& Result);
    
    UFUNCTION(BlueprintNativeEvent)
    void Start();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_Update();
    
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
public:
    UFUNCTION(BlueprintPure)
    FText GetTitle() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UTWDSubtask*> GetSubtasksSorted() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UTWDSubtask*> GetSubtasks() const;
    
    UFUNCTION(BlueprintCallable)
    UTWDSubtask* GetSubtask(TSubclassOf<UTWDSubtask> Subtask);
    
    UFUNCTION(BlueprintPure)
    FText GetDescription() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Fail();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Complete();
    
public:
    UFUNCTION(BlueprintCallable)
    bool AreSubtasksCompleted(TArray<TSubclassOf<UTWDSubtask>> InSubtasks);
    
};

