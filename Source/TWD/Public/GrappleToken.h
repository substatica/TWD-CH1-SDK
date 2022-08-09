#pragma once
#include "CoreMinimal.h"
#include "ETWDCharacterGrappleLocation.h"
#include "Token.h"
#include "GrappleToken.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UGrappleToken : public UToken {
    GENERATED_BODY()
public:
    UGrappleToken();
    UFUNCTION(BlueprintCallable)
    void SetLocation(ETWDCharacterGrappleLocation NewLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETWDCharacterGrappleLocation GetLocation() const;
    
};

