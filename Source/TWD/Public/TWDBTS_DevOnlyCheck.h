#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTService.h"
#include "TWDBTS_DevOnlyCheck.generated.h"

class AActor;
class UTWDBTS_DevOnlyCheckTest;
class AAIController;

UCLASS(Blueprintable)
class TWD_API UTWDBTS_DevOnlyCheck : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTWDBTS_DevOnlyCheckTest>> Tests;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIController* AIOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ActorOwner;
    
public:
    UTWDBTS_DevOnlyCheck();
};

