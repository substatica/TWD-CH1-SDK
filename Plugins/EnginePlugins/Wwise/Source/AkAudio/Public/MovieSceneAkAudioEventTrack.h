#pragma once
#include "CoreMinimal.h"
#include "MovieSceneAkTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "MovieSceneAkAudioEventTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UMovieSceneAkAudioEventTrack();
    
    // Fix for true pure virtual functions not being implemented

    virtual void GenerateTemplate(const FMovieSceneTrackCompilerArgs& Args) const;
    
};

