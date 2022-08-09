#include "SDISkinObject.h"

class USceneComponent;
class UStaticMeshComponent;
class USkeletalMeshComponent;
class UObject;
class UPrimitiveComponent;
class AActor;

UStaticMeshComponent* USDISkinObject::SpawnStitchedStaticMesh(FSDISkinDynamicData& DynamicSkinData, const FSDISkinStitchedStaticMesh& StitchedMesh, USceneComponent* Parent) const {
    return NULL;
}

USkeletalMeshComponent* USDISkinObject::SpawnStitchedSkeletalMesh(FSDISkinDynamicData& DynamicSkinData, const FSDISkinStitchedSkeletalMesh& StitchedMesh, USceneComponent* Parent) const {
    return NULL;
}

UObject* USDISkinObject::SpawnAttachment(FSDISkinDynamicData& DynamicSkinData, const FSDISkinAttachment& Attachment, USceneComponent* Parent) const {
    return NULL;
}

void USDISkinObject::PreApplySkin_Implementation(USceneComponent* Root, const FSDISkinReplicationData& ReplicatedSkinData, FSDISkinDynamicData& DynamicSkinData) const {
}

void USDISkinObject::PostApplySkin_Implementation(USceneComponent* Root, const FSDISkinReplicationData& ReplicatedSkinData, FSDISkinDynamicData& DynamicSkinData) const {
}

void USDISkinObject::OnStitchedComponentHitRedirector(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

USDISkinObject::USDISkinObject() {
    this->bCacheSkin = false;
}

