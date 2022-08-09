#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "TWDCraftingTableLevel.h"
#include "TWDCraftingTableProgression_OnSpecificUnlockDelegate.h"
#include "TWDCraftingTableProgression_OnLevelAdvancedDelegate.h"
#include "TWDCraftingTableProgression.generated.h"

class ATWDCharacter;
class AActor;
class UTWDRecipe;

UCLASS(BlueprintType, EditInlineNew)
class TWD_API UTWDCraftingTableProgression : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AActor> CraftingTableBlueprint;
    
    UPROPERTY(EditAnywhere)
    TArray<FTWDCraftingTableLevel> CraftingTableLevels;
    
    UPROPERTY(EditAnywhere)
    TSet<TSoftClassPtr<UTWDRecipe>> SpecificRecipesUnlockable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 CurrentLevel;
    
    UPROPERTY(Transient)
    TSet<TSoftClassPtr<UTWDRecipe>> CurrentSpecificRecipesUnlocked;
    
    UPROPERTY(Transient)
    TSet<TSoftClassPtr<UTWDRecipe>> RecipesHaveNotBeenViewed;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FTWDCraftingTableProgression_OnLevelAdvanced OnLevelAdvancedDelegate;
    
    UPROPERTY(BlueprintAssignable, Transient)
    FTWDCraftingTableProgression_OnSpecificUnlock OnSpecificUnlockDelegate;
    
    UTWDCraftingTableProgression();
protected:
    UFUNCTION()
    void UnlockBuffsAtLevel(int32 LevelIdx);
    
public:
    UFUNCTION(BlueprintCallable)
    bool TrySpecificUnlock(TSoftClassPtr<UTWDRecipe> RecipeClass);
    
    UFUNCTION(BlueprintCallable)
    bool TryAdvanceLevel(ATWDCharacter* PC);
    
    UFUNCTION(BlueprintCallable)
    void MarkRecipeAsViewed(TSoftClassPtr<UTWDRecipe> Recipe, bool bViewed);
    
    UFUNCTION(BlueprintPure)
    bool IsRecipeUnlocked(TSoftClassPtr<UTWDRecipe> RecipeClass) const;
    
    UFUNCTION(BlueprintCallable)
    bool HasRecipeBeenViewed(TSoftClassPtr<UTWDRecipe> Recipe);
    
    UFUNCTION(BlueprintCallable)
    bool GetUpgradeInfo(TMap<FGuid, int32>& CostsMapOut, int32& NextLevelOut);
    
    UFUNCTION(BlueprintPure)
    int32 GetLevelToUnlock(TSoftClassPtr<UTWDRecipe> RecipeClass) const;
    
    UFUNCTION(BlueprintPure)
    TSet<TSoftClassPtr<UTWDRecipe>> GetAllRecipes() const;
    
    UFUNCTION(BlueprintPure)
    bool CanAdvanceLevel(const ATWDCharacter* PC) const;
    
};

