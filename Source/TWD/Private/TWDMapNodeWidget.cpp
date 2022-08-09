#include "TWDMapNodeWidget.h"

class UImage;
class UMaterialInterface;
class UTexture2D;
class UMaterialInstanceDynamic;
class UTextBlock;

void UTWDMapNodeWidget::UpdateExplorationStatus(EMapTerritoryNodeStatus ExplorationStatus) {
}


void UTWDMapNodeWidget::SetReferences(UImage* NodeIcon, UTextBlock* NodeTitle, UMaterialInstanceDynamic* NodeImageMID) {
}

void UTWDMapNodeWidget::SetNodeData(UTexture2D* NodeIconTexture, FText NodeTitle, EMapTerritoryNodeStatus ExplorationStatus, TArray<UMaterialInterface*> AttributeIconMIs) {
}

UTWDMapNodeWidget::UTWDMapNodeWidget() {
    this->SetupCompleted = false;
    this->NodeIconImage = NULL;
    this->NodeTitleBox = NULL;
    this->NodeMID = NULL;
}

