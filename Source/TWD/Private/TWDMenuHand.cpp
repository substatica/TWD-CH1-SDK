#include "TWDMenuHand.h"
#include "Components/StaticMeshComponent.h"
#include "MotionControllerComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/WidgetInteractionComponent.h"
#include "Components/SceneComponent.h"

ATWDMenuHand::ATWDMenuHand() {
    this->MotionControllerComponent = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("MotionControllerComponent"));
    this->HandMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HandMeshComponent"));
    this->MenuPointerComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MenuPointerComponent"));
    this->WidgetInteractionComponent = CreateDefaultSubobject<UWidgetInteractionComponent>(TEXT("WidgetInteractionComponent"));
    this->HitIndicatorComponent = CreateDefaultSubobject<USceneComponent>(TEXT("HitIndicatorComponent"));
    this->bClicking = false;
}

