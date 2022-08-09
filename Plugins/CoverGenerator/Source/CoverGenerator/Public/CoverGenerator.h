#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CoverPointSaved.h"
#include "CoverGenerator.generated.h"

class ACoverGenerator;
class UObject;
class UCoverPoint;
class ANavigationData;
class AController;

UCLASS()
class COVERGENERATOR_API ACoverGenerator : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool ForceRefresh;
    
    UPROPERTY(EditAnywhere)
    bool bRegenerateAtBeginPlay;
    
    UPROPERTY(EditAnywhere)
    bool bRegenerateAtNavigationRebuilt;
    
    UPROPERTY(EditAnywhere)
    float SegmentLength;
    
    UPROPERTY(EditAnywhere)
    float MaxSegDist;
    
    UPROPERTY(EditAnywhere)
    float CharHeight;
    
    UPROPERTY(EditAnywhere)
    float StepDistTrace;
    
    UPROPERTY(EditAnywhere)
    float TraceLength;
    
    UPROPERTY(EditAnywhere)
    float MinSpaceBetweenValidPoints;
    
    UPROPERTY(EditAnywhere)
    float SphereSize;
    
    UPROPERTY(EditAnywhere)
    float WidthMaxAgent;
    
    UPROPERTY(EditAnywhere)
    float HeightMaxCrouching;
    
    UPROPERTY(EditAnywhere)
    float HeightMaxStanding;
    
    UPROPERTY(EditAnywhere)
    float OffsetWhenLeaningSides;
    
    UPROPERTY(EditAnywhere)
    float OffsetFrontAim;
    
    UPROPERTY(EditAnywhere)
    bool AllowCrouchLeftCover;
    
    UPROPERTY(EditAnywhere)
    bool AllowCrouchRightCover;
    
    UPROPERTY(EditAnywhere)
    bool bDraw1AllSegmentPointsTested;
    
    UPROPERTY(EditAnywhere)
    bool bDraw2SegmentPointsWithinBounds;
    
    UPROPERTY(EditAnywhere)
    bool bDraw3SimpleCoverGeometryTest;
    
    UPROPERTY(EditAnywhere)
    bool bDraw4SecondPassTracesSides;
    
    UPROPERTY(EditAnywhere)
    bool bDraw4SecondPassTracesSidesFrontAndBottom;
    
    UPROPERTY(EditAnywhere)
    bool bDraw5SecondPassArrows;
    
    UPROPERTY(EditAnywhere)
    bool DebugDrawAllPoints;
    
    UPROPERTY(EditAnywhere)
    bool DebugDrawAllBusyPoints;
    
    UPROPERTY(EditAnywhere)
    bool DebugDisplayLog;
    
    UPROPERTY(EditAnywhere)
    float DebugDistance;
    
    UPROPERTY(EditAnywhere)
    bool bDrawOctreeBounds;
    
    UPROPERTY(EditAnywhere)
    TArray<FCoverPointSaved> SavedCoverPoints;
    
private:
    UPROPERTY(Transient)
    TArray<UCoverPoint*> AllCoverPoints;
    
    UPROPERTY(Transient)
    TArray<UCoverPoint*> CoverPointsCurrentlyUsed;
    
    UPROPERTY()
    bool HasGeneratedCovers;
    
    UPROPERTY(Transient)
    TArray<AActor*> NullifierVolumes;
    
public:
    ACoverGenerator();
    UFUNCTION(BlueprintCallable)
    void ReleaseCover(UCoverPoint* CoverPoint);
    
private:
    UFUNCTION()
    void OnNavigationGenerationFinished(ANavigationData* NavData);
    
public:
    UFUNCTION(BlueprintCallable)
    bool OccupyCover(UCoverPoint* CoverPoint, AController* Controller);
    
    UFUNCTION(BlueprintCallable)
    bool IsFreeCoverPoint(const UCoverPoint* CoverPoint);
    
    UFUNCTION(BlueprintCallable)
    static ACoverGenerator* GetCoverGenerator(UObject* Asking);
    
};

