#pragma once
#include "CoreMinimal.h"
#include "SDIInventorySlot.h"
#include "TWDRequiredInventory.h"
#include "TWDCharacterHandSlot.generated.h"

class UStaticMeshComponent;
class USceneComponent;
class UCapsuleComponent;

UCLASS(Blueprintable)
class ATWDCharacterHandSlot : public ASDIInventorySlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* SlotRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* SlotCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SlotMesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTWDRequiredInventory> RequiredInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
public:
    ATWDCharacterHandSlot();
};

