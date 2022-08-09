#pragma once
#include "CoreMinimal.h"
#include "SDIInteractiveActor.h"
#include "TWDInteractiveHighlightInterface.h"
#include "TWDInteractiveActor.generated.h"

class UDataTable;

UCLASS()
class ATWDInteractiveActor : public ASDIInteractiveActor, public ITWDInteractiveHighlightInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool bPreloadReferencedDialogueLines;
    
    UPROPERTY(VisibleDefaultsOnly)
    TArray<UDataTable*> DialogueLineDataTableReferences;
    
public:
    ATWDInteractiveActor();
    
    // Fix for true pure virtual functions not being implemented
};

