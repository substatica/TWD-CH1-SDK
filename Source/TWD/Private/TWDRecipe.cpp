#include "TWDRecipe.h"

TMap<FGuid, int32> UTWDRecipe::GetOutputsAsMap(const FGuid& RecipeGuid) {
    return TMap<FGuid, int32>();
}

TMap<FGuid, int32> UTWDRecipe::GetInputsAsMap(const FGuid& RecipeGuid) {
    return TMap<FGuid, int32>();
}

UTWDRecipe::UTWDRecipe() {
    this->RecipeUIImage = NULL;
    this->RecipeBuildMaterial = NULL;
}

