#pragma once
#include "CoreMinimal.h"
#include "TWDUserWidget.h"
#include "TWDSpectatorWidget.generated.h"

class UTWDSubtitleWidget;

UCLASS(Blueprintable, EditInlineNew)
class TWD_API UTWDSpectatorWidget : public UTWDUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UTWDSubtitleWidget* SubtitleWidget;
    
public:
    UTWDSpectatorWidget();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSubtitleText() const;
    
};

