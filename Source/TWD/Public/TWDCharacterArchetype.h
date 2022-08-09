#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDArchetypeWeaponLoadoutChoice.h"
#include "UObject/Object.h"
#include "EFaction.h"
#include "EGender.h"
#include "TWDArchetypeGenderData.h"
#include "TWDCharacterArchetype.generated.h"

class UTWDCharacterPersonality;

UCLASS(BlueprintType)
class TWD_API UTWDCharacterArchetype : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TMap<TSubclassOf<UTWDCharacterPersonality>, float> PersonalityBlueprints;
    
    UPROPERTY(EditDefaultsOnly)
    FText CharacterName;
    
    UPROPERTY(EditDefaultsOnly)
    FString ID;
    
    UPROPERTY(EditDefaultsOnly)
    EFaction Faction;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EGender, FTWDArchetypeGenderData> GenderData;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDefaultBarksAllowed;
    
    UPROPERTY(Transient)
    TSubclassOf<UTWDCharacterPersonality> PersonalityBlueprint;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EFaction, float> KillReputation;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTWDArchetypeWeaponLoadoutChoice> WeaponLoadoutList;
    
    UPROPERTY(EditDefaultsOnly)
    bool bEnableSoundPerception;
    
    UPROPERTY(EditDefaultsOnly)
    float PerceptionModForSeeing;
    
    UPROPERTY(EditDefaultsOnly)
    float PerceptionModForBeingSeen;
    
    UPROPERTY(EditDefaultsOnly)
    float RefireTime;
    
public:
    UTWDCharacterArchetype();
    UFUNCTION(BlueprintPure)
    FText GetCharacterName() const;
    
};

