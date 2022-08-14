#pragma once
#include "CoreMinimal.h"
#include "SDISignificanceActor.h"
#include "SDISignificanceStasisActor.generated.h"

class UActorComponent;

UCLASS(Blueprintable)
class SDICOREPLUGIN_API ASDISignificanceStasisActor : public ASDISignificanceActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxActiveBin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxVisibleBin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TSet<UActorComponent*> ComponentsPreviouslyDeactivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TSet<UActorComponent*> ComponentsPreviouslyStoppedTicking;
    
public:
    ASDISignificanceStasisActor();
};

