#pragma once
#include "CoreMinimal.h"
#include "TWDUserWidget.h"
#include "SDIInteractionDescription.h"
#include "TWDInteractionUserWidget.generated.h"

UCLASS(EditInlineNew)
class UTWDInteractionUserWidget : public UTWDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FSDIInteractionDescription> Descriptions;
    
public:
    UTWDInteractionUserWidget();
    UFUNCTION(BlueprintNativeEvent)
    void SetDescriptions(const TArray<FSDIInteractionDescription>& InDescriptions);
    
    UFUNCTION(BlueprintNativeEvent)
    void ClearDescriptions();
    
};

