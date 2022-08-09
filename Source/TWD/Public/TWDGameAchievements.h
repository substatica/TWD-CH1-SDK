#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ETWDAchievement.h"
#include "TWDGameAchievements.generated.h"

UCLASS(BlueprintType)
class TWD_API UTWDGameAchievements : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    bool bAchievementSystemReady;
    
    UPROPERTY(Transient)
    bool bUseFloatForAchievementProgress;
    
public:
    UTWDGameAchievements();
    UFUNCTION(BlueprintCallable)
    bool UnlockAchievement(ETWDAchievement Achievement);
    
    UFUNCTION(BlueprintPure)
    bool IsAchievementSystemReady() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugResetAchievements();
    
};

