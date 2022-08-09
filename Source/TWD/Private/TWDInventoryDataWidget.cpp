#include "TWDInventoryDataWidget.h"

class ASDIInventoryActor;

bool UTWDInventoryDataWidget::SetInventoryActorBP(ASDIInventoryActor* InvActor) {
    return false;
}

void UTWDInventoryDataWidget::OnNewInventoryItem_Implementation() {
}

bool UTWDInventoryDataWidget::IsStabbingAllowed() const {
    return false;
}

bool UTWDInventoryDataWidget::IsDismemberAllowed() const {
    return false;
}

float UTWDInventoryDataWidget::GetThrowRating() const {
    return 0.0f;
}

float UTWDInventoryDataWidget::GetSharpnessRating() const {
    return 0.0f;
}

FText UTWDInventoryDataWidget::GetSalvageInfo() {
    return FText::GetEmpty();
}

FText UTWDInventoryDataWidget::GetQualityText_Implementation(ETWDConsumableQuality Quality) const {
    return FText::GetEmpty();
}

int32 UTWDInventoryDataWidget::GetQualityLevel() const {
    return 0;
}

int32 UTWDInventoryDataWidget::GetQualityIndex_Implementation(ETWDConsumableQuality Quality) const {
    return 0;
}

FText UTWDInventoryDataWidget::GetQuality() const {
    return FText::GetEmpty();
}

float UTWDInventoryDataWidget::GetMaxStaminaEffect() const {
    return 0.0f;
}

float UTWDInventoryDataWidget::GetMaxHealthEffect() const {
    return 0.0f;
}

FText UTWDInventoryDataWidget::GetInventoryType() const {
    return FText::GetEmpty();
}

FText UTWDInventoryDataWidget::GetInventoryName() const {
    return FText::GetEmpty();
}

FText UTWDInventoryDataWidget::GetInventoryDescription() const {
    return FText::GetEmpty();
}

FText UTWDInventoryDataWidget::GetInventoryCount() const {
    return FText::GetEmpty();
}

FText UTWDInventoryDataWidget::GetInventoryCharacteristics() const {
    return FText::GetEmpty();
}

float UTWDInventoryDataWidget::GetHealthEffect() const {
    return 0.0f;
}

FText UTWDInventoryDataWidget::GetDurabilityText_Implementation(float Durability) const {
    return FText::GetEmpty();
}

float UTWDInventoryDataWidget::GetDurabilityRating() const {
    return 0.0f;
}

float UTWDInventoryDataWidget::GetDurabilityPercent() const {
    return 0.0f;
}

int32 UTWDInventoryDataWidget::GetDurabilityLevel() const {
    return 0;
}

int32 UTWDInventoryDataWidget::GetDurabilityIndex_Implementation(float Durability) const {
    return 0;
}

FText UTWDInventoryDataWidget::GetDurability() const {
    return FText::GetEmpty();
}

FText UTWDInventoryDataWidget::GetConsumableEffectsText() const {
    return FText::GetEmpty();
}

void UTWDInventoryDataWidget::FormatSalvageEntry_Implementation(const FGuid& IconGuid, const FText& Name, const int32 quantity, bool bTracking, FString& Result) {
}

UTWDInventoryDataWidget::UTWDInventoryDataWidget() {
    this->SharpnessRating = -1.00f;
    this->DurabilityRating = -1.00f;
    this->ThrowRating = -1.00f;
    this->bStabbingAllowed = false;
    this->bDismemberAllowed = false;
    this->HealthEffect = 0.00f;
    this->MaxHealthEffect = 0.00f;
    this->MaxStaminaEffect = 0.00f;
}

