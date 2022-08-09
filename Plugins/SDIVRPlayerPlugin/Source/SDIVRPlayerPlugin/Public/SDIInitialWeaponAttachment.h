#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDIInitialWeaponAttachment.generated.h"

class ASDIWeaponAttachment;

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIInitialWeaponAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASDIWeaponAttachment> AttachmentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttached;
    
    FSDIInitialWeaponAttachment();
};

