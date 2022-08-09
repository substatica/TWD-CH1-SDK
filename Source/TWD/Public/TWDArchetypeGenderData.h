#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDArchetypeGenderData.generated.h"

class UTWDCharacterSkin;

USTRUCT(BlueprintType)
struct TWD_API FTWDArchetypeGenderData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTWDCharacterSkin> CharacterSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> VoiceIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FTWDArchetypeGenderData();
};

