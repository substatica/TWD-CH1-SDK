#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ETWDConsumableQuality.h"
#include "TWDConsumableInterface.generated.h"

class ATWDCharacter;

UINTERFACE(Blueprintable)
class UTWDConsumableInterface : public UInterface {
    GENERATED_BODY()
};

class ITWDConsumableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickConsumption(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartConsume(ATWDCharacter* Consumer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ETWDConsumableQuality GetQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetEffectsText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishConsume();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CancelConsume();
    
};

