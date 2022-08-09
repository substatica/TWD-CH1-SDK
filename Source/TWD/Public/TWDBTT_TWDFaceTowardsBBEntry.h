#pragma once
#include "CoreMinimal.h"
#include "TWDBTT_FocusableBase.h"
#include "TWDBTT_TWDFaceTowardsBBEntry.generated.h"

UCLASS(Blueprintable)
class TWD_API UTWDBTT_TWDFaceTowardsBBEntry : public UTWDBTT_FocusableBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowAnimToTurn;
    
public:
    UTWDBTT_TWDFaceTowardsBBEntry();
};

