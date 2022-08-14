#pragma once
#include "CoreMinimal.h"
#include "SDISkinnedActorStaticMesh.h"
#include "TWDInteractiveHighlightActor.generated.h"

class UTWDInteractionWidgetComponent;
class UCurveFloat;

UCLASS(Blueprintable)
class ATWDInteractiveHighlightActor : public ASDISkinnedActorStaticMesh {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTWDInteractionWidgetComponent* WidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighlightSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnHighlightSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ScaleCurve;
    
public:
    ATWDInteractiveHighlightActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHighlight(bool bShowHighlight, float Highlight);
    
};

