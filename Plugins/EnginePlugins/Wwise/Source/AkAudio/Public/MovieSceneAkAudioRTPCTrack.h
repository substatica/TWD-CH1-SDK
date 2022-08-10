#pragma once
#include "CoreMinimal.h"
#include "MovieSceneAkTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneAkAudioRTPCTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UMovieSceneAkAudioRTPCTrack();
    
    // Fix for true pure virtual functions not being implemented


    /**
     * Generate a template for this track
     *
     * @param Args 			Compilation arguments
     */
    virtual void GenerateTemplate(const FMovieSceneTrackCompilerArgs& Args) const override;


    /**
     * Overridable user defined custom compilation method
     *
     * @param Track 		Destination track to compile into
     * @param Args 			Compilation arguments
     * @return Compilation result
     */
    virtual EMovieSceneCompileResult CustomCompile(FMovieSceneEvaluationTrack& Track, const FMovieSceneTrackCompilerArgs& Args) const override { return EMovieSceneCompileResult::Unimplemented; }

    /**
     * Called after this track has been compiled, regardless of whether it was compiled through CustomCompile, or the default logic
     *
     * @param Track 		Destination track to compile into
     * @param Args 			Compilation arguments
     */
    virtual void PostCompile(FMovieSceneEvaluationTrack& Track, const FMovieSceneTrackCompilerArgs& Args) const override {}


    /**
     * Create a movie scene eval template for the specified section
     *
     * @param InSection		The section to create a template for
     * @return A template, or null
     */
    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override;
};


