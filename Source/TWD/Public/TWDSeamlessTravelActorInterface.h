#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TWDSeamlessTravelActorInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class UTWDSeamlessTravelActorInterface : public UInterface {
    GENERATED_BODY()
};

class ITWDSeamlessTravelActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetSeamlessTravelActorList(bool bToEntry, TArray<AActor*>& ActorList);
    
};

