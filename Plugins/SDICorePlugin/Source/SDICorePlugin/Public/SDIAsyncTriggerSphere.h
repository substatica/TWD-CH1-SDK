#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerSphere.h"
#include "SDIAsyncTriggerSphere.generated.h"

class USDIAsyncOverlapEventGeneratorComponent;

UCLASS(Blueprintable)
class SDICOREPLUGIN_API ASDIAsyncTriggerSphere : public ATriggerSphere {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USDIAsyncOverlapEventGeneratorComponent* OverlapGenerator;
    
public:
    ASDIAsyncTriggerSphere();
};

