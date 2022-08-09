#pragma once
#include "CoreMinimal.h"
#include "SDIImpactEffectsComponent.h"
#include "TWDImpactEffectsComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTWDImpactEffectsComponent : public USDIImpactEffectsComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImpactNoiseRadiusScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImpactNoiseVolumeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImpactNoiseVelocityResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeldActorMinImpactVelocityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeldActorMinImpactIntervalScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CooldownTimer;
    
    UPROPERTY(EditAnywhere)
    float IgnoreImpactsAtLevelStartup;
    
    UPROPERTY(Transient)
    float LastReportNoiseEventTimestamp;
    
    UPROPERTY(EditAnywhere)
    int32 NoiseEventAllowance;
    
    UPROPERTY(Transient)
    int32 NoiseEventCount;
    
    UTWDImpactEffectsComponent();
};

