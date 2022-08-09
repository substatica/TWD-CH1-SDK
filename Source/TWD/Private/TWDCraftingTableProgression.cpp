#include "TWDCraftingTableProgression.h"

class UTWDRecipe;
class ATWDCharacter;

void UTWDCraftingTableProgression::UnlockBuffsAtLevel(int32 LevelIdx) {
}

bool UTWDCraftingTableProgression::TrySpecificUnlock(TSoftClassPtr<UTWDRecipe> RecipeClass) {
    return false;
}

bool UTWDCraftingTableProgression::TryAdvanceLevel(ATWDCharacter* PC) {
    return false;
}

void UTWDCraftingTableProgression::MarkRecipeAsViewed(TSoftClassPtr<UTWDRecipe> Recipe, bool bViewed) {
}

bool UTWDCraftingTableProgression::IsRecipeUnlocked(TSoftClassPtr<UTWDRecipe> RecipeClass) const {
    return false;
}

bool UTWDCraftingTableProgression::HasRecipeBeenViewed(TSoftClassPtr<UTWDRecipe> Recipe) {
    return false;
}

bool UTWDCraftingTableProgression::GetUpgradeInfo(TMap<FGuid, int32>& CostsMapOut, int32& NextLevelOut) {
    return false;
}

int32 UTWDCraftingTableProgression::GetLevelToUnlock(TSoftClassPtr<UTWDRecipe> RecipeClass) const {
    return 0;
}

TSet<TSoftClassPtr<UTWDRecipe>> UTWDCraftingTableProgression::GetAllRecipes() const {
    return TSet<TSoftClassPtr<UTWDRecipe>>();
}

bool UTWDCraftingTableProgression::CanAdvanceLevel(const ATWDCharacter* PC) const {
    return false;
}

UTWDCraftingTableProgression::UTWDCraftingTableProgression() {
    this->CurrentLevel = 0;
}

