#pragma once
#include "CoreMinimal.h"
#include "TWDRecipe.h"
#include "UObject/NoExportTypes.h"
#include "TWDStolenStashRecipe.generated.h"

UCLASS()
class TWD_API UTWDStolenStashRecipe : public UTWDRecipe {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    uint8 StashItemBox;
    
    UTWDStolenStashRecipe();
    UFUNCTION(BlueprintCallable)
    void MarkItemsFound();
    
    UFUNCTION(BlueprintPure)
    TMap<FGuid, int32> GetItemList() const;
    
};

