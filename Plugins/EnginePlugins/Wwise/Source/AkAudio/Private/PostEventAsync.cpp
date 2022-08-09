#include "PostEventAsync.h"

class UObject;
class AActor;
class UAkAudioEvent;
class UPostEventAsync;

UPostEventAsync* UPostEventAsync::PostEventAsync(const UObject* WorldContextObject, UAkAudioEvent* AKEvent, AActor* Actor, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed) {
    return NULL;
}

void UPostEventAsync::PollPostEventFuture() {
}

UPostEventAsync::UPostEventAsync() {
}

