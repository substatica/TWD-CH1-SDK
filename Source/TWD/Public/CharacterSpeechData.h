#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Articulation.h"
#include "CharacterSpeechData.generated.h"

UCLASS()
class TWD_API UCharacterSpeechData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FArticulation> Articulations;
    
    UPROPERTY(VisibleAnywhere)
    FString AnnoData;
    
    UCharacterSpeechData();
};

