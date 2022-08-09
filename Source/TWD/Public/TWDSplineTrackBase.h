#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TWDSplineTrackBase.generated.h"

class USplineComponent;
class UTWDSplineTrackEventComponent;

UCLASS()
class TWD_API ATWDSplineTrackBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    TArray<UTWDSplineTrackEventComponent*> Events;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDrawDebug;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
public:
    ATWDSplineTrackBase();
    UFUNCTION(BlueprintPure)
    FRotator GetRotationAtDistance(float Dist) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLocationAtDistance(float Dist) const;
    
    UFUNCTION(BlueprintPure)
    void GetLocationAndRotationAtDistance(float Dist, FVector& OutDist, FRotator& OutRot) const;
    
    UFUNCTION(BlueprintPure)
    float GetLength() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UTWDSplineTrackEventComponent*> GetEvents() const;
    
};

