#pragma once
#include "CoreMinimal.h"
#include "TWDUserWidget.h"
#include "TWDDialogueAvailabilityWidget.generated.h"

UCLASS(EditInlineNew)
class TWD_API UTWDDialogueAvailabilityWidget : public UTWDUserWidget {
    GENERATED_BODY()
public:
    UTWDDialogueAvailabilityWidget();
    UFUNCTION(BlueprintNativeEvent)
    void Show();
    
    UFUNCTION(BlueprintNativeEvent)
    void Hide();
    
    UFUNCTION(BlueprintPure)
    float GetTimeRemainingPercent() const;
    
};

