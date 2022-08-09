#pragma once
#include "CoreMinimal.h"
#include "SDIDOTComponent.h"
#include "TWDDOTComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTWDDOTComponent : public USDIDOTComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRemoveOnDeath;
    
public:
    UTWDDOTComponent();
};

