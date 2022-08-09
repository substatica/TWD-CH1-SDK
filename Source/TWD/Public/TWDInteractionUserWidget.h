#pragma once
#include "CoreMinimal.h"
#include "TWDUserWidget.h"
#include "SDIInteractionDescription.h"
#include "TWDInteractionUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UTWDInteractionUserWidget : public UTWDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSDIInteractionDescription> Descriptions;
    
public:
    UTWDInteractionUserWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDescriptions(const TArray<FSDIInteractionDescription>& InDescriptions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearDescriptions();
    
};

