#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UObject/NoExportTypes.h"
#include "PostEventAtLocationAsyncOutputPinDelegate.h"
#include "UObject/NoExportTypes.h"
#include "PostEventAtLocationAsync.generated.h"

class UPostEventAtLocationAsync;
class UObject;
class UAkAudioEvent;

UCLASS()
class AKAUDIO_API UPostEventAtLocationAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPostEventAtLocationAsyncOutputPin Completed;
    
    UPostEventAtLocationAsync();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UPostEventAtLocationAsync* PostEventAtLocationAsync(const UObject* WorldContextObject, UAkAudioEvent* AKEvent, FVector Location, FRotator Orientation);
    
private:
    UFUNCTION()
    void PollPostEventFuture();
    
};

