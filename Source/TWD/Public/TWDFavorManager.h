#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "TWDFavorTier.h"
#include "EMapTerritoryNodeType.h"
#include "ETWDFavorReason.h"
#include "TWDFavorManager.generated.h"

class UTWDSaveGame;

UCLASS(Blueprintable)
class TWD_API UTWDFavorManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LocalFavorLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTWDFavorTier> LocalFavorTiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTWDFavorTier> GlobalFavorTiers;
    
public:
    UTWDFavorManager();
    UFUNCTION(BlueprintCallable)
    float SetLocalFavor(EMapTerritoryNodeType Territory, float NewLocalFavor, ETWDFavorReason reason);
    
    UFUNCTION(BlueprintCallable)
    void SaveToSaveData(UTWDSaveGame* SaveGame) const;
    
    UFUNCTION(BlueprintCallable)
    void RefreshLocalFavorTiers();
    
    UFUNCTION(BlueprintCallable, Exec)
    int32 RefreshGlobalFavorTier();
    
    UFUNCTION(BlueprintCallable)
    float RefreshGlobalFavor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalFavorTierAltered(EMapTerritoryNodeType Territory, int32 PrevLocalTierIndex, int32 CurrLocalTierIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGlobalFavorTierAltered(int32 PrevGlobalTierIndex, int32 CurrGlobalTierIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFavorAltered(EMapTerritoryNodeType Territory, float PrevLocalFavor, float CurrLocalFavor, float PrevGlobalFavor, float CurrGlobalFavor, ETWDFavorReason reason);
    
    UFUNCTION(BlueprintCallable)
    void LoadFromSaveData(UTWDSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLocalFavorTierIndex(float InLocalFavor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLocalFavorTierCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTWDFavorTier GetLocalFavorTier(int32 TierIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLocalFavor(EMapTerritoryNodeType Territory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGlobalFavorTierIndex(float InGlobalFavor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGlobalFavorTierCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTWDFavorTier GetGlobalFavorTier(int32 TierIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGlobalFavor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTWDFavorTier GetCurrentLocalFavorTier(EMapTerritoryNodeType Territory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTWDFavorTier GetCurrentGlobalFavorTier() const;
    
    UFUNCTION(BlueprintCallable)
    float DebugSetGlobalFavor(float NewGlobalFavor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DebugLogFavor() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugClearLocalFavor();
    
    UFUNCTION(BlueprintCallable)
    float DebugAlterGlobalFavor(float GlobalFavorDelta);
    
    UFUNCTION(BlueprintCallable)
    float AlterLocalFavor(EMapTerritoryNodeType Territory, float LocalFavorDelta, ETWDFavorReason reason);
    
};

