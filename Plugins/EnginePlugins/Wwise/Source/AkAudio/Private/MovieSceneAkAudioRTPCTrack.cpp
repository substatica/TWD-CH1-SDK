#include "MovieSceneAkAudioRTPCTrack.h"



UMovieSceneAkAudioRTPCTrack::UMovieSceneAkAudioRTPCTrack() {
}


void UMovieSceneAkAudioRTPCTrack::GenerateTemplate(const FMovieSceneTrackCompilerArgs& Args) const
{
	IMovieSceneTrackTemplateProducer::GenerateTemplate(Args);
}

FMovieSceneEvalTemplatePtr UMovieSceneAkAudioRTPCTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
	return FMovieSceneEvalTemplatePtr();
}
