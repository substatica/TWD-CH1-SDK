#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/SceneComponent.h"
#include "TWDWeaponActorAttachmentEditor_AttachmentComponent.generated.h"

class ATWDWeaponAttachment;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTWDWeaponActorAttachmentEditor_AttachmentComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATWDWeaponAttachment> AttachmentClass;
    
public:
    UTWDWeaponActorAttachmentEditor_AttachmentComponent();
};

