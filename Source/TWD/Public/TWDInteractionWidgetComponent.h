#pragma once
#include "CoreMinimal.h"
#include "SDIInteractionDescription.h"
#include "TWDWidgetComponent.h"
#include "TWDInteractionWidgetComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTWDInteractionWidgetComponent : public UTWDWidgetComponent {
    GENERATED_BODY()
public:
    UTWDInteractionWidgetComponent();
    UFUNCTION(BlueprintCallable)
    void SetDescriptions(const TArray<FSDIInteractionDescription>& Descriptions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSDIInteractionDescription> GetDescriptions() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearDescriptions();
    
};

