#pragma once
#include "CoreMinimal.h"
#include "TWDInteractiveActor.h"
#include "Engine/EngineTypes.h"
#include "TWDSeamlessTravelVehicle.generated.h"

class UPrimitiveComponent;
class APlayerController;
class UBoxComponent;
class APawn;
class AActor;
class ATWDSeamlessTravelVehicle;

UCLASS(Blueprintable)
class ATWDSeamlessTravelVehicle : public ATWDInteractiveActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* Collision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTravelling;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<APawn>> OverlappedPawns;
    
public:
    ATWDSeamlessTravelVehicle();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTravelling(bool bTravelling);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    static ATWDSeamlessTravelVehicle* GetTravelStartVehicle(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    static ATWDSeamlessTravelVehicle* GetTravellingVehicle(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    static ATWDSeamlessTravelVehicle* GetTravelDestinationVehicle(ATWDSeamlessTravelVehicle* StartVehicle);
    
};

