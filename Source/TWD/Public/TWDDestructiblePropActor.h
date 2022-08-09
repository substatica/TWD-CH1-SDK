#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TWDDestructiblePropActor.generated.h"

class UMaterialInterface;
class UStaticMeshComponent;
class UStaticMesh;

UCLASS()
class TWD_API ATWDDestructiblePropActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleDefaultsOnly)
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxHealth;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CurrentHealth)
    float CurrentHealth;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UStaticMesh*> CoverMeshArray;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UMaterialInterface*> MaterialArray;
    
    ATWDDestructiblePropActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void OnRep_CurrentHealth();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPropDestroyed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPropDamaged();
    
    UFUNCTION(BlueprintPure)
    bool GetIsPropDestroyed() const;
    
};

