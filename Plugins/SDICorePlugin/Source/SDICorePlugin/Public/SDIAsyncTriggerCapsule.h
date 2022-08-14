#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerCapsule.h"
#include "SDIAsyncTriggerCapsule.generated.h"

class USDIAsyncOverlapEventGeneratorComponent;

UCLASS(Blueprintable)
class SDICOREPLUGIN_API ASDIAsyncTriggerCapsule : public ATriggerCapsule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDIAsyncOverlapEventGeneratorComponent* OverlapGenerator;
    
public:
    ASDIAsyncTriggerCapsule();
};

