#pragma once
#include "CoreMinimal.h"
#include "AkAudioClasses.h"
#include "Matinee/InterpTrackVectorBase.h"
#include "AkAudioEventTrackKey.h"
#include "Matinee/InterpTrack.h"
#include "Matinee/InterpTrackEvent.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "Matinee/InterpTrackParticleReplay.h"
#include "InterpTrackAkAudioEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class AKAUDIO_API UInterpTrackAkAudioEvent : public UInterpTrackVectorBase {
    GENERATED_BODY()
public:
    virtual const FString GetEdHelperClassName() const;

    virtual const FString GetSlateHelperClassName() const;

    virtual UTexture2D * GetTrackIcon() const;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAkAudioEventTrackKey> Events;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bContinueEventOnMatineeEnd: 1;
    
    UInterpTrackAkAudioEvent();
};

