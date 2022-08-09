#include "MapTerritoryNode.h"

FMapTerritoryNode::FMapTerritoryNode() {
    this->Type = EMapTerritoryNodeType::None;
    this->Biome = EMapBiomeType::None;
    this->Status = EMapTerritoryNodeStatus::Locked;
}

