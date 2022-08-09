#pragma once
#include "CoreMinimal.h"
#include "SDIInventorySlot.h"
#include "TWDRequiredInventory.h"
#include "TWDCharacterHandSlot.generated.h"

class USceneComponent;
class UCapsuleComponent;
class UStaticMeshComponent;

UCLASS()
class ATWDCharacterHandSlot : public ASDIInventorySlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* SlotRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCapsuleComponent* SlotCollision;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* SlotMesh;
    
private:
    UPROPERTY(Transient)
    TArray<FTWDRequiredInventory> RequiredInventory;
    
    UPROPERTY(Transient)
    bool bEnabled;
    
public:
    ATWDCharacterHandSlot();
};

