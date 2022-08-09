#pragma once
#include "CoreMinimal.h"
#include "AkMidiEventBase.h"
#include "AkMidiPitchBend.generated.h"

USTRUCT(BlueprintType)
struct FAkMidiPitchBend : public FAkMidiEventBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 ValueLsb;
    
    UPROPERTY(EditAnywhere)
    uint8 ValueMsb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FullValue;
    
    AKAUDIO_API FAkMidiPitchBend();
};

