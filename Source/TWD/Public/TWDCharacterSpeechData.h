#pragma once
#include "CoreMinimal.h"
#include "TWDCharacterSpeechData.generated.h"

class UCharacterSpeechData;

USTRUCT(BlueprintType)
struct TWD_API FTWDCharacterSpeechData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FString, TSoftObjectPtr<UCharacterSpeechData>> LocalizedSpeechData;
    
private:
    UPROPERTY(Transient)
    UCharacterSpeechData* CachedSpeechData;
    
public:
    FTWDCharacterSpeechData();
};

