#pragma once
#include "CoreMinimal.h"
#include "TWDUserWidget.h"
#include "TWDDialogueAvailabilityWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWD_API UTWDDialogueAvailabilityWidget : public UTWDUserWidget {
    GENERATED_BODY()
public:
    UTWDDialogueAvailabilityWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Show();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Hide();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeRemainingPercent() const;
    
};

