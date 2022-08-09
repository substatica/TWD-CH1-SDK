#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense_Hearing.h"
#include "UObject/NoExportTypes.h"
#include "TWDAISense_Hearing.generated.h"

class UObject;
class AActor;

UCLASS(Blueprintable)
class TWD_API UTWDAISense_Hearing : public UAISense_Hearing {
    GENERATED_BODY()
public:
    UTWDAISense_Hearing();
    UFUNCTION(BlueprintCallable)
    static void TWDReportNoiseEvent(UObject* WorldContextObject, FVector NoiseLocation, float Loudness, AActor* Instigator, float MaxRange, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    static void SetShowNoiseEventSpheres(bool bShowSpheres, float Duration, bool bUseRandomColor);
    
    UFUNCTION(BlueprintCallable)
    static void SetLogNoiseEvents(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static bool GetShowNoiseEventSpheres();
    
    UFUNCTION(BlueprintCallable)
    static bool GetLogNoiseEvents();
    
};

