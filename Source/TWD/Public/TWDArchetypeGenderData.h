#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDArchetypeGenderData.generated.h"

class UTWDCharacterSkin;

USTRUCT(BlueprintType)
struct TWD_API FTWDArchetypeGenderData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UTWDCharacterSkin> CharacterSkin;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FString> VoiceIds;
    
    UPROPERTY(EditDefaultsOnly)
    float Weight;
    
    FTWDArchetypeGenderData();
};

