#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ETWDAchievement.h"
#include "TWDGameAchievements.generated.h"

UCLASS(Blueprintable)
class TWD_API UTWDGameAchievements : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAchievementSystemReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUseFloatForAchievementProgress;
    
public:
    UTWDGameAchievements();
    UFUNCTION(BlueprintCallable)
    bool UnlockAchievement(ETWDAchievement Achievement);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAchievementSystemReady() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugResetAchievements();
    
};

