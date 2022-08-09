#include "TWDDeadBody.h"

class UTexture;

bool ATWDDeadBody::SetSkinSectionVariants(const TMap<ETWDCharacterSkinSection, FName>& Variants) {
    return false;
}

bool ATWDDeadBody::SetSkinSectionVariant(ETWDCharacterSkinSection Section, FName Variant) {
    return false;
}

void ATWDDeadBody::MeshOnPhysicsStateChange() {
}

FName ATWDDeadBody::GetSkinSectionVariant(ETWDCharacterSkinSection Section) const {
    return NAME_None;
}

void ATWDDeadBody::GetSkinSectionInfo(ETWDCharacterSkinSection Section, int32& OutIndex, FName& OutVariant, TMap<FName, float>& OutScalarParams, TMap<FName, FLinearColor>& OutColorParams, TMap<FName, TSoftObjectPtr<UTexture>>& OutTextureParams, FSDISkinSkeletalMeshSet& OutSkinMeshSet) const {
}

ATWDDeadBody::ATWDDeadBody() {
    this->SplashColorTexture = NULL;
    this->SplashNormalTexture = NULL;
    this->MeatColorTexture = NULL;
    this->MeatNormalTexture = NULL;
    this->CapColorTexture = NULL;
    this->CapNormalTexture = NULL;
    this->WoundSeverityScale = 1.00f;
    this->StabLoopParticleSystem = NULL;
    this->StabMovementParticleSystem = NULL;
    this->StabMeleeDurabilityModifier = 1.00f;
}

