#include "TWDCharacterHandSlot.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/CapsuleComponent.h"

ATWDCharacterHandSlot::ATWDCharacterHandSlot() {
    this->SlotRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SlotRoot"));
    this->SlotCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("SlotCollision"));
    this->SlotMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SlotMesh"));
    this->bEnabled = false;
}

