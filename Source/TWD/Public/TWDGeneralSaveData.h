#pragma once
#include "CoreMinimal.h"
#include "TWDHighScoreEntry.h"
#include "TWDGeneralSaveDataChangedDelegate.h"
#include "GameFramework/SaveGame.h"
#include "TWDGeneralSaveData.generated.h"

UCLASS(BlueprintType)
class TWD_API UTWDGeneralSaveData : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTWDGeneralSaveDataChanged OnSaveDataChanged;
    
    UPROPERTY()
    TArray<FTWDHighScoreEntry> WaveModeHighScores;
    
protected:
    UPROPERTY()
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
    
    UFUNCTION(BlueprintPure)
    bool HasAnyPlayerFinishedTutorial() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FTWDHighScoreEntry> GetWaveModeHighScores() const;
    
};

