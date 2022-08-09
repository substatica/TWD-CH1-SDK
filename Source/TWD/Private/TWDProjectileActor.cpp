#include "TWDProjectileActor.h"
#include "Net/UnrealNetwork.h"

class ATWDProjectileActor;

ATWDProjectileActor* ATWDProjectileActor::TuneTWDProjectileActor(FSDITuningAttribute_TWDProjectileActor Attr, float PreModifier, float Add, float PostModifier) {
    return NULL;
}

void ATWDProjectileActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATWDProjectileActor, RepTimeDilationData);
    DOREPLIFETIME(ATWDProjectileActor, RepPlayerTimeDilationData);
}

ATWDProjectileActor::ATWDProjectileActor() {
}

