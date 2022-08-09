#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Token.generated.h"

class ATWDCharacter;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UToken : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    ATWDCharacter* TokenHolder;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    ATWDCharacter* Target;
    
    UToken();
};

