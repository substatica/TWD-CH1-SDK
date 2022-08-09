#pragma once
#include "CoreMinimal.h"
#include "ECharacterEmotion.h"
#include "Engine/DataTable.h"
#include "ECharacterGesture.h"
#include "ECharacterPose.h"
#include "TWDCharacterSpeechData.h"
#include "DialogueLine.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct TWD_API FDialogueLine : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECharacterEmotion Emotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECharacterPose Pose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECharacterGesture Gesture;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> AudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTWDCharacterSpeechData SpeechData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSkippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Name;
    
private:
    UPROPERTY(Transient)
    UAkAudioEvent* CachedAudioEvent;
    
public:
    FDialogueLine();
};

