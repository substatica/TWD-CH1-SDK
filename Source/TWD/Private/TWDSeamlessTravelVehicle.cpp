#include "TWDSeamlessTravelVehicle.h"
#include "Components/BoxComponent.h"

class UPrimitiveComponent;
class AActor;
class ATWDSeamlessTravelVehicle;
class APlayerController;

void ATWDSeamlessTravelVehicle::SetTravelling_Implementation(bool bTravelling) {
}

void ATWDSeamlessTravelVehicle::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATWDSeamlessTravelVehicle::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

ATWDSeamlessTravelVehicle* ATWDSeamlessTravelVehicle::GetTravelStartVehicle(APlayerController* PC) {
    return NULL;
}

ATWDSeamlessTravelVehicle* ATWDSeamlessTravelVehicle::GetTravellingVehicle(APlayerController* PC) {
    return NULL;
}

ATWDSeamlessTravelVehicle* ATWDSeamlessTravelVehicle::GetTravelDestinationVehicle(ATWDSeamlessTravelVehicle* StartVehicle) {
    return NULL;
}

ATWDSeamlessTravelVehicle::ATWDSeamlessTravelVehicle() {
    this->Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
    this->bStart = false;
    this->bIsTravelling = false;
}

