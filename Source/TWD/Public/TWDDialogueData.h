#pragma once
#include "CoreMinimal.h"
#include "TWDCharacterSpeechData.h"
#include "TWDDialogueData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct TWD_API FTWDDialogueData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> AudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTWDCharacterSpeechData SpeechData;
    
private:
    UPROPERTY(Transient)
    UAkAudioEvent* CachedAudioEvent;
    
public:
    FTWDDialogueData();
};

