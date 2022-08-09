#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SDIGripManagerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDIVRPLAYERPLUGIN_API USDIGripManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    TArray<UActorComponent*> GripComponents;
    
public:
    USDIGripManagerComponent();
};

