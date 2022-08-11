#include "InterpTrackAkAudioEvent.h"

UInterpTrackAkAudioEvent::UInterpTrackAkAudioEvent() {
    this->bContinueEventOnMatineeEnd = false;
}

const FString UInterpTrackAkAudioEvent::GetEdHelperClassName() const
{
    return FString( TEXT("UnrealEd.InterpTrackAnimControlHelper") );
}

const FString UInterpTrackAkAudioEvent::GetSlateHelperClassName() const
{
    return FString( TEXT("Matinee.MatineeTrackAnimControlHelper") );
}

UTexture2D* UInterpTrackAkAudioEvent::GetTrackIcon() const
{
    return (UTexture2D*)UTexture2D::CreateTransient(1, 1);
}