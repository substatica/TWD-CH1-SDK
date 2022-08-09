#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "TWDHordeLevel.generated.h"

UCLASS(Blueprintable)
class TWD_API ATWDHordeLevel : public ALevelScriptActor {
    GENERATED_BODY()
public:
    ATWDHordeLevel();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHordeTimerComplete();
    
    UFUNCTION(BlueprintCallable)
    void HordeTimerComplete();
    
};

