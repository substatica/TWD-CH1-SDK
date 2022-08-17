#include "TWDInteractiveBookActor.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/SceneComponent.h"
#include "TWDWidgetComponent.h"
#include "SDIPointGripComponent.h"

class UUserWidget;

void ATWDInteractiveBookActor::UpdateBookOpen_Implementation() {
}

void ATWDInteractiveBookActor::UpdateBookClosed_Implementation() {
}

void ATWDInteractiveBookActor::OnPopulatePage_Implementation(int32 PageIndex, UUserWidget* PageWidget) {
}

USkeletalMeshComponent* ATWDInteractiveBookActor::GetBookMesh() const {
    return NULL;
}

void ATWDInteractiveBookActor::CommitPages() {
}

ATWDInteractiveBookActor::ATWDInteractiveBookActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PageMaterial = NULL;
    this->EdgeTouchHaptic = NULL;
    this->LookConeAngle = 60.00f;
    this->OpenLookConeAngleDelta = 0.00f;
    this->BookMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BookMesh"));
    this->Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
    this->SpineRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SpineRoot"));
    this->LeftPageWidget = CreateDefaultSubobject<UTWDWidgetComponent>(TEXT("LeftPageWidget"));
    this->RightPageWidget = CreateDefaultSubobject<UTWDWidgetComponent>(TEXT("RightPageWidget"));
    this->Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
    this->PointGripLeft = CreateDefaultSubobject<USDIPointGripComponent>(TEXT("PointGripLeft"));
    this->PointGripRight = CreateDefaultSubobject<USDIPointGripComponent>(TEXT("PointGripRight"));
    this->RightPageRoot = CreateDefaultSubobject<USceneComponent>(TEXT("RightPageRoot"));
    this->LeftPageRoot = CreateDefaultSubobject<USceneComponent>(TEXT("LeftPageRoot"));
    this->GrabHand = NULL;
    this->bBookOpen = false;
    this->PageFlipSound = NULL;
    this->bInteractPressed = false;
}

