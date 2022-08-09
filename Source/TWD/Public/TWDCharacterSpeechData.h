#pragma once
#include "CoreMinimal.h"
#include "TWDCharacterSpeechData.generated.h"

class UCharacterSpeechData;

USTRUCT(BlueprintType)
struct TWD_API FTWDCharacterSpeechData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TSoftObjectPtr<UCharacterSpeechData>> LocalizedSpeechData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCharacterSpeechData* CachedSpeechData;
    
public:
    FTWDCharacterSpeechData();
};

