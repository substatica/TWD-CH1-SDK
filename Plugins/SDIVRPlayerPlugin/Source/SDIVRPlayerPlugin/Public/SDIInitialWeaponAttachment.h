#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDIInitialWeaponAttachment.generated.h"

class ASDIWeaponAttachment;

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIInitialWeaponAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<ASDIWeaponAttachment> AttachmentClass;
    
    UPROPERTY(EditAnywhere)
    bool bAttached;
    
    FSDIInitialWeaponAttachment();
};

