#pragma once
#include "CoreMinimal.h"
#include "TWDRecipe.h"
#include "UObject/NoExportTypes.h"
#include "TWDStolenStashRecipe.generated.h"

UCLASS(Blueprintable)
class TWD_API UTWDStolenStashRecipe : public UTWDRecipe {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 StashItemBox;
    
    UTWDStolenStashRecipe();
    UFUNCTION(BlueprintCallable)
    void MarkItemsFound();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGuid, int32> GetItemList() const;
    
};

