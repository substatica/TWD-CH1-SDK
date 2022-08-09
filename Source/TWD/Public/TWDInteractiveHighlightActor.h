#pragma once
#include "CoreMinimal.h"
#include "SDISkinnedActorStaticMesh.h"
#include "TWDInteractiveHighlightActor.generated.h"

class UTWDInteractionWidgetComponent;
class UCurveFloat;

UCLASS()
class ATWDInteractiveHighlightActor : public ASDISkinnedActorStaticMesh {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTWDInteractionWidgetComponent* WidgetComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HighlightSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float UnHighlightSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* ScaleCurve;
    
public:
    ATWDInteractiveHighlightActor();
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateHighlight(bool bShowHighlight, float Highlight);
    
};

