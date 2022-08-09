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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompletionValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOptional;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowNotifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTWDTask* ParentTask;
    
public:
    UTWDSubtask();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Start();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResolved() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOptional() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void IncrementValue(int32 NewIncrementValue);
    
    UFUNCTION(BlueprintCallable)
    int32 GetValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESubtaskState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Fail();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Complete();
    
};

