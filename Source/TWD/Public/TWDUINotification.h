#pragma once
#include "CoreMinimal.h"
#include "ETWDUINotificationType.h"
#include "TWDUINotification.generated.h"

class UAkAudioEvent;
class UTexture2D;

USTRUCT(BlueprintType)
struct TWD_API FTWDUINotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FText NotificationStatusText;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText NotificationTitleText;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText NotificationSubtitleText;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UTexture2D* CustomUIIcon;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UAkAudioEvent* CustomUIAudio;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ETWDUINotificationType NotificationType;
    
    FTWDUINotification();
};

