#pragma once
#include "CoreMinimal.h"
#include "SDIDOTComponent.h"
#include "TWDDOTComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTWDDOTComponent : public USDIDOTComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveOnDeath;
    
public:
    UTWDDOTComponent();
};

