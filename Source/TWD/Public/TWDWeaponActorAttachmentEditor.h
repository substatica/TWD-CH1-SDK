#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDInteractiveActor.h"
#include "TWDWeaponActorAttachmentEditor.generated.h"

class USceneComponent;
class ASDIWeaponActor;

UCLASS(Blueprintable)
class ATWDWeaponActorAttachmentEditor : public ATWDInteractiveActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* WeaponAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASDIWeaponActor> WeaponActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWeaponDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASDIWeaponActor* WeaponActor;
    
public:
    ATWDWeaponActorAttachmentEditor();
};

