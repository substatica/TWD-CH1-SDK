#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TWDSplineTrackBase.generated.h"

class USplineComponent;
class UTWDSplineTrackEventComponent;

UCLASS(Blueprintable)
class TWD_API ATWDSplineTrackBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTWDSplineTrackEventComponent*> Events;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebug;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
public:
    ATWDSplineTrackBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetRotationAtDistance(float Dist) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocationAtDistance(float Dist) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLocationAndRotationAtDistance(float Dist, FVector& OutDist, FRotator& OutRot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTWDSplineTrackEventComponent*> GetEvents() const;
    
};

