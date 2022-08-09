#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TWDCraftingTableLevel.h"
#include "TWDCraftingTableProgression_OnLevelAdvancedDelegate.h"
#include "TWDCraftingTableProgression_OnSpecificUnlockDelegate.h"
#include "UObject/NoExportTypes.h"
#include "TWDCraftingTableProgression.generated.h"

class ATWDCharacter;
class AActor;
class UTWDRecipe;

UCLASS(Blueprintable, EditInlineNew)
class TWD_API UTWDCraftingTableProgression : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> CraftingTableBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTWDCraftingTableLevel> CraftingTableLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftClassPtr<UTWDRecipe>> SpecificRecipesUnlockable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<TSoftClassPtr<UTWDRecipe>> CurrentSpecificRecipesUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<TSoftClassPtr<UTWDRecipe>> RecipesHaveNotBeenViewed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTWDCraftingTableProgression_OnLevelAdvanced OnLevelAdvancedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTWDCraftingTableProgression_OnSpecificUnlock OnSpecificUnlockDelegate;
    
    UTWDCraftingTableProgression();
protected:
    UFUNCTION(BlueprintCallable)
    void UnlockBuffsAtLevel(int32 LevelIdx);
    
public:
    UFUNCTION(BlueprintCallable)
    bool TrySpecificUnlock(TSoftClassPtr<UTWDRecipe> RecipeClass);
    
    UFUNCTION(BlueprintCallable)
    bool TryAdvanceLevel(ATWDCharacter* PC);
    
    UFUNCTION(BlueprintCallable)
    void MarkRecipeAsViewed(TSoftClassPtr<UTWDRecipe> Recipe, bool bViewed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecipeUnlocked(TSoftClassPtr<UTWDRecipe> RecipeClass) const;
    
    UFUNCTION(BlueprintCallable)
    bool HasRecipeBeenViewed(TSoftClassPtr<UTWDRecipe> Recipe);
    
    UFUNCTION(BlueprintCallable)
    bool GetUpgradeInfo(TMap<FGuid, int32>& CostsMapOut, int32& NextLevelOut);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevelToUnlock(TSoftClassPtr<UTWDRecipe> RecipeClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<TSoftClassPtr<UTWDRecipe>> GetAllRecipes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAdvanceLevel(const ATWDCharacter* PC) const;
    
};

