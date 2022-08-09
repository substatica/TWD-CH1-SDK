#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "SplineEventTriggerSignatureDelegate.h"
#include "TWDSplineTrackEventComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UTWDSplineTrackEventComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSplineEventTriggerSignature TriggeredEvent;
    
protected:
    UPROPERTY(EditAnywhere)
    float Distance;
    
    UPROPERTY(EditAnywhere)
    FLinearColor DrawColor;
    
public:
    UTWDSplineTrackEventComponent();
    UFUNCTION(BlueprintNativeEvent)
    void OnTriggered(AActor* Context);
    
    UFUNCTION(BlueprintPure)
    float GetDistance() const;
    
};

