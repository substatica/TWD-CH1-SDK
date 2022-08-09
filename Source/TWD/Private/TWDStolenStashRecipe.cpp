#include "TWDStolenStashRecipe.h"

void UTWDStolenStashRecipe::MarkItemsFound() {
}

TMap<FGuid, int32> UTWDStolenStashRecipe::GetItemList() const {
    return TMap<FGuid, int32>();
}

UTWDStolenStashRecipe::UTWDStolenStashRecipe() {
    this->StashItemBox = 0;
}

