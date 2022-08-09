#pragma once
#include "CoreMinimal.h"
#include "SDICoreFXLightFlickerEntry.h"
#include "GameFramework/Actor.h"
#include "SDICoreFXManager.generated.h"

class ULightComponent;
class ASDICoreFXManager;
class UCurveFloat;
class UObject;

UCLASS(Config=Game)
class SDICOREPLUGIN_API ASDICoreFXManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    int32 MaxLightFlickerUpdatesPerFrame;
    
    UPROPERTY(Transient)
    int32 LightFlickerUpdateIndex;
    
    UPROPERTY(Transient)
    TArray<FSDICoreFXLightFlickerEntry> LightFlickers;
    
public:
    ASDICoreFXManager();
    UFUNCTION(BlueprintCallable)
    void RemoveLightFlicker(ULightComponent* LightComponent);
    
    UFUNCTION(BlueprintPure)
    static ASDICoreFXManager* GetFXManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void AddLightFlicker(ULightComponent* LightComponent, UCurveFloat* IntensityCurve, float StartTime, bool bLooping);
    
};

