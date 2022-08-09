#pragma once
#include "CoreMinimal.h"
#include "SDICoreFXLightFlickerEntry.h"
#include "GameFramework/Actor.h"
#include "SDICoreFXManager.generated.h"

class ULightComponent;
class ASDICoreFXManager;
class UCurveFloat;
class UObject;

UCLASS(Blueprintable, Config=Game)
class SDICOREPLUGIN_API ASDICoreFXManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLightFlickerUpdatesPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LightFlickerUpdateIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSDICoreFXLightFlickerEntry> LightFlickers;
    
public:
    ASDICoreFXManager();
    UFUNCTION(BlueprintCallable)
    void RemoveLightFlicker(ULightComponent* LightComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASDICoreFXManager* GetFXManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void AddLightFlicker(ULightComponent* LightComponent, UCurveFloat* IntensityCurve, float StartTime, bool bLooping);
    
};

