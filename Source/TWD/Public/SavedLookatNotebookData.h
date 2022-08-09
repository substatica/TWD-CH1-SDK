#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETWDSavedNoteCategory.h"
#include "SavedLookatNotebookData.generated.h"

class ASDIInventoryActor;

USTRUCT(BlueprintType)
struct TWD_API FSavedLookatNotebookData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ETWDSavedNoteCategory Category;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText TitleToDisplay;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAllowRetrigger;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ASDIInventoryActor> ActorClass;
    
    UPROPERTY(BlueprintReadOnly)
    float CollectedTime;
    
    FSavedLookatNotebookData();
};

