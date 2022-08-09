#pragma once
#include "CoreMinimal.h"
#include "SDICheatManager.h"
#include "EMapTerritoryNodeType.h"
#include "EGender.h"
#include "EGlobalPerceptionSortSubject.h"
#include "EFaction.h"
#include "TWDCheatManager.generated.h"

class ASDIInventoryActor;

UCLASS()
class UTWDCheatManager : public USDICheatManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TMap<TSoftClassPtr<ASDIInventoryActor>, int32> CheatTestInventoryItems;
    
    UPROPERTY(EditAnywhere)
    TSet<TSoftClassPtr<ASDIInventoryActor>> WeaponPileClasses;
    
public:
    UTWDCheatManager();
    UFUNCTION(BlueprintCallable)
    static void SetInfiniteStamina(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetGoofyModeTurbo(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetGoofyModeLowGravity(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetDemiGod(bool bEnable);
    
    UFUNCTION(BlueprintPure)
    static bool NoPlayerDeath();
    
    UFUNCTION(BlueprintPure)
    static bool NoGrappling();
    
    UFUNCTION(BlueprintPure)
    static bool NoDurabilityLoss();
    
    UFUNCTION(BlueprintImplementableEvent)
    void LoadEvents(const TArray<FString>& EventCodes, bool bClearCurrentEvents, bool bOverrideConflicts);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInfiniteStamina();
    
    UFUNCTION(BlueprintCallable)
    static bool IsGoofyModeTurbo();
    
    UFUNCTION(BlueprintCallable)
    static bool IsGoofyModeLowGravity();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDemiGod();
    
    UFUNCTION(BlueprintPure)
    static bool IgnorePlayer();
    
    UFUNCTION(BlueprintPure)
    static bool FlashlightInfinite();
    
    UFUNCTION(Exec)
    void CheatUnlockAllMapNodes();
    
    UFUNCTION(Exec)
    void CheatToggleStimulusSharing();
    
    UFUNCTION(Exec)
    void CheatToggleRevivePlayer();
    
    UFUNCTION(Exec)
    void CheatTogglePhysicalCrouch();
    
    UFUNCTION(Exec)
    void CheatTogglePauseAlwaysAllowed();
    
    UFUNCTION(Exec)
    void CheatTogglePauseAI();
    
    UFUNCTION(Exec)
    void CheatToggleNoteConsumption();
    
    UFUNCTION(Exec)
    void CheatToggleLightDependentSightStim();
    
    UFUNCTION(Exec)
    void CheatToggleInvisibleToAI();
    
    UFUNCTION(Exec)
    void CheatToggleHMDCollisions();
    
    UFUNCTION(Exec)
    void CheatToggleGPDSortOrder() const;
    
    UFUNCTION(Exec)
    void CheatToggleGoofyModeTurbo();
    
    UFUNCTION(Exec)
    void CheatToggleGoofyModeLowGravity();
    
    UFUNCTION(Exec)
    void CheatToggleGlobalPerceptionDisplay() const;
    
    UFUNCTION(Exec)
    void CheatToggleDisplayLightData();
    
    UFUNCTION(Exec)
    void CheatToggleDisplayAIPerception();
    
    UFUNCTION(Exec)
    void CheatToggleAISuspicionInfo();
    
    UFUNCTION(Exec)
    void CheatToggleAICombatRingDebugDraw() const;
    
    UFUNCTION(Exec)
    void CheatTeleport(float X, float Y, float Z);
    
    UFUNCTION(Exec)
    void CheatSuicide();
    
    UFUNCTION(Exec)
    void CheatSpawnWeaponPile();
    
    UFUNCTION(Exec)
    void CheatShowNoiseEventSpheres(bool bEnabled, float Duration, bool bUseRandomColor);
    
    UFUNCTION(Exec)
    void CheatSetUserPlayMode(int32 Mode);
    
    UFUNCTION(Exec)
    void CheatSetSeedString(const FString& SeedString);
    
    UFUNCTION(Exec)
    void CheatSetSeed(int32 Seed);
    
    UFUNCTION(Exec)
    void CheatSetPlayerHasTraveledToday(bool bHasTraveled);
    
    UFUNCTION(Exec)
    void CheatSetPlayerGender(EGender Gender);
    
    UFUNCTION(Exec)
    void CheatSetPhysicalUnCrouchThreshold(float Threshold);
    
    UFUNCTION(Exec)
    void CheatSetPhysicalCrouchDistance(float Distance);
    
    UFUNCTION(Exec)
    void CheatSetNoDurabilityLoss(bool bNewNoDurabilityLoss);
    
    UFUNCTION(Exec)
    void CheatSetMaxGPD(int32 NumLines) const;
    
    UFUNCTION(Exec)
    void CheatSetHealth(float Health);
    
    UFUNCTION(Exec)
    void CheatSetGripInputMode(int32 Mode);
    
    UFUNCTION(Exec)
    void CheatSetGPDSortSubject(EGlobalPerceptionSortSubject SortSubject) const;
    
    UFUNCTION(Exec)
    void CheatSetDay(int32 Day);
    
    UFUNCTION(Exec)
    void CheatSaveGame();
    
    UFUNCTION(Exec)
    void CheatSaveCustomGame(const FString& CustomSaveName);
    
    UFUNCTION(Exec)
    void CheatRushBells(float NewDelay);
    
    UFUNCTION(Exec)
    void CheatResetHighScores();
    
    UFUNCTION(Exec)
    void CheatResetAchievements();
    
    UFUNCTION(Exec)
    void CheatReportNoiseEvent(float MaxRange, float Loudness, bool bUsePlayerLocation, float XWorldSpaceLoc, float YWorldSpaceLoc, float ZWorldSpaceLoc, FName Tag);
    
    UFUNCTION(Exec)
    void CheatRemoveCharacterContext(const FString& CharacterName, const FString& Key) const;
    
    UFUNCTION(Exec)
    void CheatPrintFactionReputation(EFaction Faction);
    
    UFUNCTION(Exec)
    void CheatPrintCharacterContext(const FString& CharacterName) const;
    
    UFUNCTION(Exec)
    void CheatPrintCharacterBarkHistory(const FString& CharacterName) const;
    
    UFUNCTION(Exec)
    void CheatPrintBarkState() const;
    
    UFUNCTION(Exec)
    void CheatPlayDialogue(const FString& CharacterName, const FString& DialogueName);
    
    UFUNCTION(Exec)
    void CheatPlayBark(const FString& CharacterName, const FString& EventName) const;
    
    UFUNCTION(Exec)
    void CheatNoPlayerDeath();
    
    UFUNCTION(Exec)
    void CheatNoGrappling();
    
    UFUNCTION(Exec)
    void CheatNoDurabilityLoss();
    
    UFUNCTION(Exec)
    void CheatNoAI();
    
    UFUNCTION(Exec)
    void CheatMaxOutCraftingTables();
    
    UFUNCTION(Exec)
    void CheatLogNoiseEvents(bool bEnabled);
    
    UFUNCTION(Exec)
    void CheatLoadGame();
    
    UFUNCTION(Exec)
    void CheatLoadEvents(const FString& EventString, bool bClearCurrentEvents, bool bOverrideConflicts);
    
    UFUNCTION(BlueprintImplementableEvent, Exec)
    void CheatLoadDebugGame(const FString& EventKey);
    
    UFUNCTION(Exec)
    void CheatLoadCustomGame(const FString& CustomSaveName);
    
    UFUNCTION(Exec)
    void CheatInfiniteStamina();
    
    UFUNCTION(Exec)
    void CheatIgnorePlayer();
    
    UFUNCTION(Exec)
    void CheatGripLock();
    
    UFUNCTION(Exec)
    void CheatGodMode();
    
    UFUNCTION(Exec)
    void CheatFlashlightInfinite(bool bInfinite);
    
    UFUNCTION(Exec)
    void CheatFavorSync();
    
    UFUNCTION(Exec)
    void CheatFavorSetLocalForTerritory(float NewFavor, EMapTerritoryNodeType Territory);
    
    UFUNCTION(Exec)
    void CheatFavorSetLocal(float NewFavor);
    
    UFUNCTION(Exec)
    void CheatFavorSetGlobal(float NewFavor);
    
    UFUNCTION(Exec)
    void CheatFavorSetEnabled(bool bEnabled);
    
    UFUNCTION(Exec)
    void CheatFavorPrint();
    
    UFUNCTION(Exec)
    void CheatFavorClearLocal();
    
    UFUNCTION(Exec)
    void CheatFavorAlterLocalForTerritory(float FavorDelta, EMapTerritoryNodeType Territory);
    
    UFUNCTION(Exec)
    void CheatFavorAlterLocal(float FavorDelta);
    
    UFUNCTION(Exec)
    void CheatFavorAlterGlobal(float FavorDelta);
    
    UFUNCTION(Exec)
    void CheatEvaluateCriteria_Player(const FString& Criteria);
    
    UFUNCTION(Exec)
    void CheatEnableSpectatorScreenHUD(bool bEnable);
    
    UFUNCTION(Exec)
    void CheatEnableScreenMessage(bool enable);
    
    UFUNCTION(Exec)
    void CheatEnableNightTravel(bool bEnable);
    
    UFUNCTION(Exec)
    void CheatDisplaySightStimCalculations();
    
    UFUNCTION(Exec)
    void CheatDisplayFootstepSounds();
    
    UFUNCTION(Exec)
    void CheatDemiGod();
    
    UFUNCTION(Exec)
    void CheatDeleteGame();
    
    UFUNCTION(Exec)
    void CheatClearCharacterBarkHistory(const FString& CharacterName) const;
    
    UFUNCTION(Exec)
    void CheatBreakGrapples();
    
    UFUNCTION(Exec)
    void CheatAllowAutoSaving(bool bEnable);
    
    UFUNCTION(Exec)
    void CheatAddTestInventory();
    
    UFUNCTION(Exec)
    void CheatAddPlayerContext_Bool(const FString& Key, bool bValue);
    
    UFUNCTION(Exec)
    void CheatAddFactionReputation(EFaction Faction, float Reputation);
    
    UFUNCTION(Exec)
    void CheatAddCharacterContextString(const FString& CharacterName, const FString& Key, const FString& Value) const;
    
    UFUNCTION(Exec)
    void CheatAddCharacterContextInt(const FString& CharacterName, const FString& Key, int32 Value) const;
    
    UFUNCTION(Exec)
    void CheatAddCharacterContextFloat(const FString& CharacterName, const FString& Key, float Value) const;
    
    UFUNCTION(Exec)
    void CheatAddCharacterContextBool(const FString& CharacterName, const FString& Key, bool bValue) const;
    
    UFUNCTION(Exec)
    void CheatActivateStealthMode();
    
};

