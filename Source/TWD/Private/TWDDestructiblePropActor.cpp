#include "TWDDestructiblePropActor.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"

void ATWDDestructiblePropActor::OnRep_CurrentHealth() {
}



bool ATWDDestructiblePropActor::GetIsPropDestroyed() const {
    return false;
}

void ATWDDestructiblePropActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATWDDestructiblePropActor, CurrentHealth);
}

ATWDDestructiblePropActor::ATWDDestructiblePropActor() {
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ActiveMesh"));
    this->MaxHealth = 0.00f;
    this->CurrentHealth = 0.00f;
}

