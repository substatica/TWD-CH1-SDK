#include "SDIStimAndResponseUtil.h"

class UDamageType;
class UObject;
class ASDIGameplayTagActor;
class USceneComponent;
class AActor;
class UPrimitiveComponent;

void USDIStimAndResponseUtil::UpdateStimuli(UObject* Object) {
}

void USDIStimAndResponseUtil::UpdateOverlapStimuli(UObject* Object) {
}

bool USDIStimAndResponseUtil::SupportsGameplayTags(UObject* Object) {
    return false;
}

ASDIGameplayTagActor* USDIStimAndResponseUtil::SpawnStimuliShape(const UObject* WorldContextObject, const FGameplayTagContainer& Stimuli, const FTransform& Transform, const FSDICollisionShape& Shape, float LifeSpan, USceneComponent* AttachComp, FName AttachSocketName, FName CollisionProfileName) {
    return NULL;
}

ASDIGameplayTagActor* USDIStimAndResponseUtil::SpawnStimuli(const UObject* WorldContextObject, const FGameplayTagContainer& Stimuli, const FTransform& Transform, FVector Extent, float LifeSpan, USceneComponent* AttachComp, FName AttachSocketName, FName CollisionProfileName) {
    return NULL;
}

bool USDIStimAndResponseUtil::RemoveGameplayTag(UObject* Object, FGameplayTag Tag, bool bUpdateStimuli) {
    return false;
}

bool USDIStimAndResponseUtil::OverlapStimuliShape(const UObject* WorldContextObject, const FGameplayTagContainer& Stimuli, const FTransform& Transform, const FSDICollisionShape& Shape, FName CollisionProfileName) {
    return false;
}

bool USDIStimAndResponseUtil::OverlapStimuli(const UObject* WorldContextObject, const FGameplayTagContainer& Stimuli, const FTransform& Transform, FVector Extent, FName CollisionProfileName) {
    return false;
}

void USDIStimAndResponseUtil::K2GetOwnedGameplayTagsIncludingComponents(AActor* Actor, FGameplayTagContainer& TagContainer) {
}

bool USDIStimAndResponseUtil::K2GetOwnedGameplayTags(UObject* Object, FGameplayTagContainer& TagContainer) {
    return false;
}

void USDIStimAndResponseUtil::K2GetAllOwnedGameplayTags(FGameplayTagContainer& OutTags, AActor* OtherActor, UPrimitiveComponent* OtherComponent, const UDamageType* DamageType, const FHitResult& HitResult, UObject* IgnoredObject) {
}

bool USDIStimAndResponseUtil::ClearGameplayTags(UObject* Object, bool bUpdateStimuli) {
    return false;
}

void USDIStimAndResponseUtil::AppendGameplayTags(UObject* Object, const FGameplayTagContainer& Other, bool bUpdateStimuli) {
}

bool USDIStimAndResponseUtil::AddGameplayTag(UObject* Object, FGameplayTag Tag, bool bLeaf, bool bUpdateStimuli) {
    return false;
}

USDIStimAndResponseUtil::USDIStimAndResponseUtil() {
}

