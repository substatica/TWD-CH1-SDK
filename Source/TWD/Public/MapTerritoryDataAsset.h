#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MapTerritoryDataAsset.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class TWD_API UMapTerritoryDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText TerritoryName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName UMAPName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FName> PlatformUMAPNameOverrides;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* TerritoryIcon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName NightLightingScenarioName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FName> PlatformNightLightScenarioNameOverrides;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName DayLightingScenarioName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FName> PlatformDayLightScenarioNameOverrides;
    
    UMapTerritoryDataAsset();
    UFUNCTION()
    FName GetUMAPName() const;
    
    UFUNCTION()
    FName GetNightLightingScenarioName() const;
    
    UFUNCTION()
    FName GetDayLightingScenarioName() const;
    
};

