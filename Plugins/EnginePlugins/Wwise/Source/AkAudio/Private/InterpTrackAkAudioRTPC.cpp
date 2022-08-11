#include "InterpTrackAkAudioRTPC.h"

UInterpTrackAkAudioRTPC::UInterpTrackAkAudioRTPC() {
    this->bPlayOnReverse = false;
    this->bContinueRTPCOnMatineeEnd = false;
}

const FString UInterpTrackAkAudioRTPC::GetEdHelperClassName() const
{
    return FString( TEXT("UnrealEd.InterpTrackAnimControlHelper") );
}

const FString UInterpTrackAkAudioRTPC::GetSlateHelperClassName() const
{
    return FString( TEXT("Matinee.MatineeTrackAnimControlHelper") );
}

UTexture2D* UInterpTrackAkAudioRTPC::GetTrackIcon() const
{
    return (UTexture2D*)UTexture2D::CreateTransient(1, 1);
}