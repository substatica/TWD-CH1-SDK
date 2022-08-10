#include "MovieSceneAkAudioEventTrack.h"

#include "Evaluation/MovieSceneEvalTemplate.h"

UMovieSceneAkAudioEventTrack::UMovieSceneAkAudioEventTrack() {
}

void UMovieSceneAkAudioEventTrack::GenerateTemplate(const FMovieSceneTrackCompilerArgs& Args) const
{
	IMovieSceneTrackTemplateProducer::GenerateTemplate(Args);
}

FMovieSceneEvalTemplatePtr UMovieSceneAkAudioEventTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
	return FMovieSceneEvalTemplatePtr();
}


