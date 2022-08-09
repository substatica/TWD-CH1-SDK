#pragma once
#include "CoreMinimal.h"
#include "PostEventAsyncOutputPinDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnAkPostEventCallbackDelegate.h"
#include "AkExternalSourceInfo.h"
#include "PostEventAsync.generated.h"

class UPostEventAsync;
class UObject;
class AActor;
class UAkAudioEvent;

UCLASS()
class AKAUDIO_API UPostEventAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPostEventAsyncOutputPin Completed;
    
    UPostEventAsync();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UPostEventAsync* PostEventAsync(const UObject* WorldContextObject, UAkAudioEvent* AKEvent, AActor* Actor, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed);
    
private:
    UFUNCTION()
    void PollPostEventFuture();
    
};

