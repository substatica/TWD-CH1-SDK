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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETWDTaskStatusIcon CurrentStatusIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastUpdatedTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTWDSubtask>> SubtaskBlueprints;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowNotifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTWDSubtask*> Subtasks;
    
public:
    UTWDTask();
    UFUNCTION(BlueprintCallable)
    void UpdateSubtask(TSubclassOf<UTWDSubtask> Subtask, ETaskResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Start();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Update();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTWDSubtask*> GetSubtasksSorted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTWDSubtask*> GetSubtasks() const;
    
    UFUNCTION(BlueprintCallable)
    UTWDSubtask* GetSubtask(TSubclassOf<UTWDSubtask> Subtask);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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

