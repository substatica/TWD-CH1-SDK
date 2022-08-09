#pragma once
#include "CoreMinimal.h"
#include "TWDNonVRInteractionWidget.h"
#include "TWDNonVRNotebookWidget.generated.h"

class ATWDNotebook;

UCLASS(EditInlineNew)
class TWD_API UTWDNonVRNotebookWidget : public UTWDNonVRInteractionWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ATWDNotebook* NotebookActor;
    
    UTWDNonVRNotebookWidget();
};

