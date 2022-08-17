#include "TWDProp.h"
#include "Net/UnrealNetwork.h"
#include "TWDAutoTickAkComponent.h"
#include "TWDImpactEffectsComponent.h"

class UAkAudioEvent;

void ATWDProp::StopAkAudioComponent() {
}

void ATWDProp::SetAkAudioComponentSwitch(const FString& SwitchGroup, const FString& SwitchState) {
}

void ATWDProp::SetAkAudioComponentRTPCValue(const FString& RTPC, float Value, int32 InterpolationTimeMs) {
}

void ATWDProp::ServerSetInventorySlotIdx_IFC_Implementation(uint8 InventorySlotIdx) {
}
bool ATWDProp::ServerSetInventorySlotIdx_IFC_Validate(uint8 InventorySlotIdx) {
    return true;
}

void ATWDProp::ReturnKeyItemToBackpack_Implementation() {
}

int32 ATWDProp::PostEventToAkAudioComponent(UAkAudioEvent* Event, const FString& EventName) {
    return 0;
}

void ATWDProp::OnRep_RepTWDInventoryData_Timer() {
}

void ATWDProp::OnRep_RepTWDInventoryData(const FTWDReplicatedInventoryActorInterfaceData& OldRepTWDInventoryData) {
}

bool ATWDProp::AkAudioComponentHasActiveEvents() const {
    return false;
}

void ATWDProp::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATWDProp, RepTWDInventoryData);
}

ATWDProp::ATWDProp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UTWDImpactEffectsComponent>(TEXT("ImpactEffectsComponent"))) {
    this->AkAudioComponent = CreateDefaultSubobject<UTWDAutoTickAkComponent>(TEXT("AkAudioComponent"));
}

