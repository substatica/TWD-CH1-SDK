#pragma once
#include "CoreMinimal.h"
#include "TWDUserWidget.h"
#include "TWDSpectatorWidget.generated.h"

class UTWDSubtitleWidget;

UCLASS(EditInlineNew)
class TWD_API UTWDSpectatorWidget : public UTWDUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UTWDSubtitleWidget* SubtitleWidget;
    
public:
    UTWDSpectatorWidget();
    UFUNCTION(BlueprintPure)
    FText GetSubtitleText() const;
    
};

