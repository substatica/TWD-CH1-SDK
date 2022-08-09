#include "TWDAISense_Hearing.h"

class UObject;
class AActor;

void UTWDAISense_Hearing::TWDReportNoiseEvent(UObject* WorldContextObject, FVector NoiseLocation, float Loudness, AActor* Instigator, float MaxRange, FName Tag) {
}

void UTWDAISense_Hearing::SetShowNoiseEventSpheres(bool bShowSpheres, float Duration, bool bUseRandomColor) {
}

void UTWDAISense_Hearing::SetLogNoiseEvents(bool bEnabled) {
}

bool UTWDAISense_Hearing::GetShowNoiseEventSpheres() {
    return false;
}

bool UTWDAISense_Hearing::GetLogNoiseEvents() {
    return false;
}

UTWDAISense_Hearing::UTWDAISense_Hearing() {
}

