#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTService.h"
#include "TWDBTS_DevOnlyCheck.generated.h"

class UTWDBTS_DevOnlyCheckTest;
class AAIController;
class AActor;

UCLASS()
class TWD_API UTWDBTS_DevOnlyCheck : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    TArray<TSubclassOf<UTWDBTS_DevOnlyCheckTest>> Tests;
    
protected:
    UPROPERTY(Transient)
    AAIController* AIOwner;
    
    UPROPERTY(Transient)
    AActor* ActorOwner;
    
public:
    UTWDBTS_DevOnlyCheck();
};

