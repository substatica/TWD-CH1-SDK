#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Perception/AISightTargetInterface.h"
#include "TWDEdibleCorpse.generated.h"

UCLASS(Blueprintable)
class TWD_API ATWDEdibleCorpse : public AActor, public IAISightTargetInterface {
    GENERATED_BODY()
public:
    ATWDEdibleCorpse();
    
    // Fix for true pure virtual functions not being implemented
};

