#pragma once
#include "CoreMinimal.h"
#include "TWDUserWidget.h"
#include "TWDDialogueOption.h"
#include "UObject/NoExportTypes.h"
#include "TWDDialogueSelectionWidget.generated.h"

UCLASS(EditInlineNew)
class TWD_API UTWDDialogueSelectionWidget : public UTWDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float SelectionThreshold;
    
    UPROPERTY(BlueprintReadOnly)
    int32 SelectedIndex;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsInHidingProcess;
    
public:
    UTWDDialogueSelectionWidget();
    UFUNCTION(BlueprintNativeEvent)
    void StartHiding();
    
    UFUNCTION(BlueprintNativeEvent)
    void Show(const TArray<FTWDDialogueOption>& InOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SelectWithOptionName(const FName& OptionName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SelectOption(int32 Index);
    
    UFUNCTION(BlueprintNativeEvent)
    void SelectDirection(FVector2D Input);
    
    UFUNCTION(BlueprintNativeEvent)
    bool Select();
    
    UFUNCTION(BlueprintPure)
    float GetTimeRemainingPercent() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FVector2D GetOptionPosition(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishHiding();
    
};

