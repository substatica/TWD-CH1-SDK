#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TWDDestructiblePropActor.generated.h"

class UStaticMesh;
class UMaterialInterface;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class TWD_API ATWDDestructiblePropActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentHealth, meta=(AllowPrivateAccess=true))
    float CurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> CoverMeshArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> MaterialArray;
    
    ATWDDestructiblePropActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentHealth();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPropDestroyed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPropDamaged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPropDestroyed() const;
    
};

