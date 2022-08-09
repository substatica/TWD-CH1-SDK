#pragma once
#include "CoreMinimal.h"
#include "Token.h"
#include "ETWDCharacterGrappleLocation.h"
#include "GrappleToken.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UGrappleToken : public UToken {
    GENERATED_BODY()
public:
    UGrappleToken();
    UFUNCTION(BlueprintCallable)
    void SetLocation(ETWDCharacterGrappleLocation NewLocation);
    
    UFUNCTION(BlueprintPure)
    ETWDCharacterGrappleLocation GetLocation() const;
    
};

