#pragma once
#include "CoreMinimal.h"
#include "Articulation.h"
#include "UObject/Object.h"
#include "CharacterSpeechData.generated.h"

UCLASS(Blueprintable)
class TWD_API UCharacterSpeechData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArticulation> Articulations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnnoData;
    
    UCharacterSpeechData();
};

