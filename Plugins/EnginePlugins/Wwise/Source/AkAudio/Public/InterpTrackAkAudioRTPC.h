#pragma once
#include "CoreMinimal.h"
#include "AkAudioClasses.h"
#include "Matinee/InterpTrackVectorBase.h"
#include "AkAudioEventTrackKey.h"
#include "Matinee/InterpTrack.h"
#include "Matinee/InterpTrackEvent.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "Matinee/InterpTrackParticleReplay.h"
#include "InterpTrackAkAudioRTPC.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    virtual const FString GetEdHelperClassName() const;

    virtual const FString GetSlateHelperClassName() const;

    virtual UTexture2D * GetTrackIcon() const;

    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlayOnReverse: 1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bContinueRTPCOnMatineeEnd: 1;

    UInterpTrackAkAudioRTPC();
};

