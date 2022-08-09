#pragma once
#include "CoreMinimal.h"
#include "TWDGeneralSaveDataChangedDelegate.h"
#include "GameFramework/SaveGame.h"
#include "TWDHighScoreEntry.h"
#include "TWDGeneralSaveData.generated.h"

UCLASS(Blueprintable)
class TWD_API UTWDGeneralSaveData : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDGeneralSaveDataChanged OnSaveDataChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTWDHighScoreEntry> WaveModeHighScores;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFinishedTutorial;
    
public:
    UTWDGeneralSaveData();
    UFUNCTION(BlueprintCallable)
    void SetAnyPlayerFinishedTutorial(const bool bFinished);
    
    UFUNCTION(BlueprintCallable)
    int32 SaveWaveModeHighScore(const FTWDHighScoreEntry PlayData);
    
    UFUNCTION(BlueprintCallable)
    bool SaveToDrive();
    
    UFUNCTION(BlueprintCallable)
    void ResetWaveModeHighScores();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyPlayerFinishedTutorial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FTWDHighScoreEntry> GetWaveModeHighScores() const;
    
};

