#include "TWDCharacterArchetype.h"

FText UTWDCharacterArchetype::GetCharacterName() const {
    return FText::GetEmpty();
}

UTWDCharacterArchetype::UTWDCharacterArchetype() {
    this->Faction = EFaction::None;
    this->bDefaultBarksAllowed = true;
    this->PersonalityBlueprint = NULL;
    this->bEnableSoundPerception = true;
    this->PerceptionModForSeeing = 1.00f;
    this->PerceptionModForBeingSeen = 1.00f;
    this->RefireTime = 1.00f;
}

