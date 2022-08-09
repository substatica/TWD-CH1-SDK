#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SplineEventTriggerSignatureDelegate.h"
#include "UObject/NoExportTypes.h"
#include "TWDSplineTrackEventComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UTWDSplineTrackEventComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineEventTriggerSignature TriggeredEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DrawColor;
    
public:
    UTWDSplineTrackEventComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTriggered(AActor* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistance() const;
    
};

