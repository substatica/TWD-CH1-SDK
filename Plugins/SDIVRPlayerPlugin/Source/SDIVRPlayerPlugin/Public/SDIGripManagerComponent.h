#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SDIGripManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDIVRPLAYERPLUGIN_API USDIGripManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> GripComponents;
    
public:
    USDIGripManagerComponent();
};

