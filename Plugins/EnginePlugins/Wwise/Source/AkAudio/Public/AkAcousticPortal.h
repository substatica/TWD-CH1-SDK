#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AkAcousticPortalState.h"
#include "AkOcclusionObstructionContainerQueryInterface.h"
#include "Engine/EngineTypes.h"
#include "AkAcousticPortal.generated.h"

UCLASS()
class AKAUDIO_API AAkAcousticPortal : public AVolume, public IAkOcclusionObstructionContainerQueryInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    AkAcousticPortalState InitialState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ObstructionRefreshInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ObstructionRefreshIntervalMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ObstructionRefreshIntervalMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ObstructionRefreshIntervalMinDis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ObstructionRefreshIntervalMaxDis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> ObstructionCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ObstructionLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FrontObstructionPow2AttenDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BackObstructionPow2AttenDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ClosedDoorOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OpenDoorOcclusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ClosedDoorAttenDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OpenDoorAttenDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OpenDoorAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDistanceToDoor;
    
    AAkAcousticPortal();
    UFUNCTION(BlueprintCallable)
    void OpenPortal();
    
    UFUNCTION(BlueprintPure)
    AkAcousticPortalState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable)
    void ClosePortal();
    
    
    // Fix for true pure virtual functions not being implemented
};

