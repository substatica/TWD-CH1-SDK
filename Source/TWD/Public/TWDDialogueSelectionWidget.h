#pragma once
#include "CoreMinimal.h"
#include "TWDDialogueOption.h"
#include "TWDUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "TWDDialogueSelectionWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TWD_API UTWDDialogueSelectionWidget : public UTWDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelectionThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInHidingProcess;
    
public:
    UTWDDialogueSelectionWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartHiding();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Show(const TArray<FTWDDialogueOption>& InOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SelectWithOptionName(const FName& OptionName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SelectOption(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SelectDirection(FVector2D Input);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Select();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeRemainingPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector2D GetOptionPosition(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishHiding();
    
};

