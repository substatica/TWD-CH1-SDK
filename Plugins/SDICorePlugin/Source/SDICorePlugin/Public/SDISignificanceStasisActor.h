#pragma once
#include "CoreMinimal.h"
#include "SDISignificanceActor.h"
#include "SDISignificanceStasisActor.generated.h"

class UActorComponent;

UCLASS()
class SDICOREPLUGIN_API ASDISignificanceStasisActor : public ASDISignificanceActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxActiveBin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxVisibleBin;
    
    UPROPERTY(Export, Transient)
    TSet<UActorComponent*> ComponentsPreviouslyDeactivated;
    
    UPROPERTY(Export, Transient)
    TSet<UActorComponent*> ComponentsPreviouslyStoppedTicking;
    
public:
    ASDISignificanceStasisActor();
};

