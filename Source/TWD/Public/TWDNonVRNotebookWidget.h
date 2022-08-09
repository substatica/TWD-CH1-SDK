#pragma once
#include "CoreMinimal.h"
#include "TWDNonVRInteractionWidget.h"
#include "TWDNonVRNotebookWidget.generated.h"

class ATWDNotebook;

UCLASS(Blueprintable, EditInlineNew)
class TWD_API UTWDNonVRNotebookWidget : public UTWDNonVRInteractionWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDNotebook* NotebookActor;
    
    UTWDNonVRNotebookWidget();
};

