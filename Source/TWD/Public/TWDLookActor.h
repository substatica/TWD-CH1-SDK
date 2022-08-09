#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TWDLookActor.generated.h"

class UMaterialInstanceDynamic;
class UStaticMeshComponent;
class UAkAudioEvent;
class UTWDAutoTickAkComponent;

UCLASS()
class TWD_API ATWDLookActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* StartLookingAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* LookingLoopPlayAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* LookingLoopStopAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* FinishLookingAudioEvent;
    
protected:
    UPROPERTY(Export, VisibleAnywhere)
    UStaticMeshComponent* LookMeshComponent;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* LookMaterialInstance;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTWDAutoTickAkComponent* AkAudioComponent;
    
public:
    ATWDLookActor();
};

