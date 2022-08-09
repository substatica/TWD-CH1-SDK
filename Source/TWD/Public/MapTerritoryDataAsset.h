#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MapTerritoryDataAsset.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class TWD_API UMapTerritoryDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TerritoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UMAPName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> PlatformUMAPNameOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* TerritoryIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NightLightingScenarioName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> PlatformNightLightScenarioNameOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DayLightingScenarioName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> PlatformDayLightScenarioNameOverrides;
    
    UMapTerritoryDataAsset();
    UFUNCTION(BlueprintCallable)
    FName GetUMAPName() const;
    
    UFUNCTION(BlueprintCallable)
    FName GetNightLightingScenarioName() const;
    
    UFUNCTION(BlueprintCallable)
    FName GetDayLightingScenarioName() const;
    
};

