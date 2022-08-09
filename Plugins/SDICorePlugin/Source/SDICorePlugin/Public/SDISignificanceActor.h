#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SDISignificanceBinInterface.h"
#include "SDISignificanceActor.generated.h"

class UObject;

UCLASS(Blueprintable)
class SDICOREPLUGIN_API ASDISignificanceActor : public AActor, public ISDISignificanceBinInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SignificanceTag;
    
public:
    ASDISignificanceActor();
protected:
    UFUNCTION(BlueprintCallable)
    float SignificanceFunction(UObject* QueryObj, const FTransform& ViewerTransform);
    
    
    // Fix for true pure virtual functions not being implemented
};

