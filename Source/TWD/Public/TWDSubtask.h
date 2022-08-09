#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESubtaskState.h"
#include "TWDSubtask.generated.h"

class UTWDTask;

UCLASS(Blueprintable)
class TWD_API UTWDSubtask : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FText Description;
    
    UPROPERTY(EditDefaultsOnly)
    int32 CompletionValue;
    
    UPROPERTY(EditDefaultsOnly)
    bool bOptional;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool bShowNotifications;
    
    UPROPERTY(Transient)
    UTWDTask* ParentTask;
    
public:
    UTWDSubtask();
    UFUNCTION(BlueprintNativeEvent)
    void Start();
    
    UFUNCTION(BlueprintNativeEvent)
    void Reset();
    
    UFUNCTION(BlueprintPure)
    bool IsResolved() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOptional() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void IncrementValue(int32 NewIncrementValue);
    
    UFUNCTION(BlueprintCallable)
    int32 GetValue();
    
    UFUNCTION(BlueprintPure)
    ESubtaskState GetState() const;
    
    UFUNCTION(BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void Fail();
    
    UFUNCTION(BlueprintNativeEvent)
    void Complete();
    
};

