#include "TWDWeaponBowV2.h"
#include "Templates/SubclassOf.h"
#include "SDIPointGripComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SceneComponent.h"

class UObject;
class ATWDAmmoPropArrow;
class ASDIInventoryActor;


ATWDAmmoPropArrow* ATWDWeaponBowV2::UnNockArrow(bool bGrabArrow) {
    return NULL;
}

bool ATWDWeaponBowV2::NockArrow(ATWDAmmoPropArrow* Arrow, bool bGrabString) {
    return false;
}

bool ATWDWeaponBowV2::IsValidArrowType(UClass* ArrowType) const {
    return false;
}

bool ATWDWeaponBowV2::IsGripInverted() const {
    return false;
}

float ATWDWeaponBowV2::GetPullDistance() const {
    return 0.0f;
}

float ATWDWeaponBowV2::GetPullAmount() const {
    return 0.0f;
}

FTransform ATWDWeaponBowV2::GetNockTransform(bool bIncludeSideOffset) const {
    return FTransform{};
}

float ATWDWeaponBowV2::GetNockedArrowTime() const {
    return 0.0f;
}

ATWDAmmoPropArrow* ATWDWeaponBowV2::GetNockedArrow() const {
    return NULL;
}

FVector ATWDWeaponBowV2::GetArrowDirection(bool bIncludeSideOffset) const {
    return FVector{};
}

int32 ATWDWeaponBowV2::GetArrowCount(UObject* InventoryHolder, TSubclassOf<ATWDAmmoPropArrow> ArrowType) const {
    return 0;
}

ASDIInventoryActor* ATWDWeaponBowV2::GetAmmoPropArrow(UObject* InventoryHolder, TSubclassOf<ATWDAmmoPropArrow> ArrowType) const {
    return NULL;
}

bool ATWDWeaponBowV2::AttemptNockArrow(ATWDAmmoPropArrow* Arrow) {
    return false;
}

ATWDWeaponBowV2::ATWDWeaponBowV2() {
    this->BowMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BowMesh"));
    this->PrimaryGripLeft = CreateDefaultSubobject<USDIPointGripComponent>(TEXT("PrimaryGripLeft"));
    this->PrimaryGripRight = CreateDefaultSubobject<USDIPointGripComponent>(TEXT("PrimaryGripRight"));
    this->NockGripLeft = CreateDefaultSubobject<USDIPointGripComponent>(TEXT("NockGripLeft"));
    this->NockGripRight = CreateDefaultSubobject<USDIPointGripComponent>(TEXT("NockGripRight"));
    this->InvertedPrimaryGripLeft = CreateDefaultSubobject<USDIPointGripComponent>(TEXT("InvertedPrimaryGripLeft"));
    this->InvertedPrimaryGripRight = CreateDefaultSubobject<USDIPointGripComponent>(TEXT("InvertedPrimaryGripRight"));
    this->InvertedNockGripLeft = CreateDefaultSubobject<USDIPointGripComponent>(TEXT("InvertedNockGripLeft"));
    this->InvertedNockGripRight = CreateDefaultSubobject<USDIPointGripComponent>(TEXT("InvertedNockGripRight"));
    this->NockCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("NockCapsule"));
    this->StringGrabCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("StringGrabCapsule"));
    this->ArrowUILocation = CreateDefaultSubobject<USceneComponent>(TEXT("ArrowUILocation"));
    this->LeftHandNockOffset = CreateDefaultSubobject<USceneComponent>(TEXT("LeftHandNockOffset"));
    this->RightHandNockOffset = CreateDefaultSubobject<USceneComponent>(TEXT("RightHandNockOffset"));
    this->MinFirePullAmount = 0.01f;
    this->UnNockPullDistance = -8.00f;
    this->UnNockMinNockedTime = 1.00f;
    this->ReNockMinTime = 0.50f;
    this->NockArrowMaxAngleDeg = 45.00f;
    this->NockArrowGrabStringDistance = 32.00f;
    this->DrawSoundLoopRTPC = TEXT("BowArrow_Vel");
    this->ArrowUIFlipAxis = EAxis::Z;
    this->ArrowUIInvertAxis = EAxis::X;
    this->bGrabHighestDurabilityArrow = false;
    this->bAutoNockArrowWhenGrabbingString = true;
    this->bPrioritizeGrabbingStringOverBow = false;
    this->bAimAssist = false;
    this->AimAssistMinEngagePullAmount = 0.00f;
    this->AimAssistPathCollisionRadius = 4.00f;
    this->AimAssistPathCollisionTime = 1.00f;
    this->AimAssistTargetRadius = 16.00f;
    this->AimAssistTargetZOffset = 0.00f;
    this->AimAssistMinDesiredSpeed = 256.00f;
    this->LastUnNockedArrowTimestamp = 0.00f;
    this->bCanUnNockArrowFromPull = false;
    this->NockedArrowTimestamp = 0.00f;
    this->bUnNockGrabbingArrow = false;
    this->LastPullAmount = 0.00f;
}

