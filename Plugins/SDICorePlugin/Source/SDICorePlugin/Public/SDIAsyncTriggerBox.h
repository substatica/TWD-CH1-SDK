#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "SDIAsyncTriggerBox.generated.h"

class USDIAsyncOverlapEventGeneratorComponent;

UCLASS(Blueprintable)
class SDICOREPLUGIN_API ASDIAsyncTriggerBox : public ATriggerBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USDIAsyncOverlapEventGeneratorComponent* OverlapGenerator;
    
public:
    ASDIAsyncTriggerBox();
};

