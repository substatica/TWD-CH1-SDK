#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDInteractiveActor.h"
#include "TWDWeaponActorAttachmentEditor.generated.h"

class USceneComponent;
class ASDIWeaponActor;

UCLASS()
class ATWDWeaponActorAttachmentEditor : public ATWDInteractiveActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* WeaponAttach;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ASDIWeaponActor> WeaponActorClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxWeaponDistance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ASDIWeaponActor* WeaponActor;
    
public:
    ATWDWeaponActorAttachmentEditor();
};

