#pragma once
#include "CoreMinimal.h"
#include "SDIInteractiveActor.h"
#include "TWDInteractiveHighlightInterface.h"
#include "TWDInteractiveActor.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class ATWDInteractiveActor : public ASDIInteractiveActor, public ITWDInteractiveHighlightInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreloadReferencedDialogueLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> DialogueLineDataTableReferences;
    
public:
    ATWDInteractiveActor();
    
    // Fix for true pure virtual functions not being implemented
};

