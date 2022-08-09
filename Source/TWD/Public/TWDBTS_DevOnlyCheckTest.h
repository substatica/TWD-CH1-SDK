#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TWDBTS_DevOnlyCheckTest.generated.h"

class AAIController;
class AActor;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TWD_API UTWDBTS_DevOnlyCheckTest : public UObject {
    GENERATED_BODY()
public:
    UTWDBTS_DevOnlyCheckTest();
    UFUNCTION(BlueprintImplementableEvent)
    void OnTick(AAIController* OwnerController, AActor* OwnerActor, float DeltaSeconds);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSearchStart(AAIController* OwnerController, AActor* OwnerActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDeactivation(AAIController* OwnerController, AActor* OwnerActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActivation(AAIController* OwnerController, AActor* OwnerActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void GetRuntimeValues(AAIController* OwnerController, AActor* OwnerActor, TArray<FString>& Values);
    
    UFUNCTION(BlueprintNativeEvent)
    FString GetDescription() const;
    
    UFUNCTION(BlueprintPure)
    FString GetDebugInfoString(AAIController* OwnerController, AActor* OwnerActor) const;
    
};

