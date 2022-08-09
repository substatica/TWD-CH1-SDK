#include "MapTerritoryDataAsset.h"

FName UMapTerritoryDataAsset::GetUMAPName() const {
    return NAME_None;
}

FName UMapTerritoryDataAsset::GetNightLightingScenarioName() const {
    return NAME_None;
}

FName UMapTerritoryDataAsset::GetDayLightingScenarioName() const {
    return NAME_None;
}

UMapTerritoryDataAsset::UMapTerritoryDataAsset() {
    this->TerritoryIcon = NULL;
}

