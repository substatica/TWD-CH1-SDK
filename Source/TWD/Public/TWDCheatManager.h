#pragma once
#include "CoreMinimal.h"
#include "EFaction.h"
#include "SDICheatManager.h"
#include "EGender.h"
#include "EGlobalPerceptionSortSubject.h"
#include "EMapTerritoryNodeType.h"
#include "TWDCheatManager.generated.h"

class ASDIInventoryActor;

UCLASS(Blueprintable)
class UTWDCheatManager : public USDICheatManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<ASDIInventoryActor>, int32> CheatTestInventoryItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NoPlayerDeath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NoGrappling();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NoDurabilityLoss();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadEvents(const TArray<FString>& EventCodes, bool bClearCurrentEvents, bool bOverrideConflicts);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInfiniteStamina();
    
    UFUNCTION(BlueprintCallable)
    static bool IsGoofyModeTurbo();
    
    UFUNCTION(BlueprintCallable)
    static bool IsGoofyModeLowGravity();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDemiGod();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IgnorePlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FlashlightInfinite();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatUnlockAllMapNodes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatToggleStimulusSharing();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatToggleRevivePlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatTogglePhysicalCrouch();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatTogglePauseAlwaysAllowed();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatTogglePauseAI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatToggleNoteConsumption();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatToggleLightDependentSightStim();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatToggleInvisibleToAI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatToggleHMDCollisions();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatToggleGPDSortOrder() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatToggleGoofyModeTurbo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatToggleGoofyModeLowGravity();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatToggleGlobalPerceptionDisplay() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatToggleDisplayLightData();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatToggleDisplayAIPerception();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatToggleAISuspicionInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatToggleAICombatRingDebugDraw() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatTeleport(float X, float Y, float Z);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatSuicide();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatSpawnWeaponPile();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatShowNoiseEventSpheres(bool bEnabled, float Duration, bool bUseRandomColor);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatSetUserPlayMode(int32 Mode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatSetSeedString(const FString& SeedString);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatSetSeed(int32 Seed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatSetPlayerHasTraveledToday(bool bHasTraveled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatSetPlayerGender(EGender Gender);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatSetPhysicalUnCrouchThreshold(float Threshold);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatSetPhysicalCrouchDistance(float Distance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatSetNoDurabilityLoss(bool bNewNoDurabilityLoss);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatSetMaxGPD(int32 NumLines) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatSetHealth(float Health);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatSetGripInputMode(int32 Mode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatSetGPDSortSubject(EGlobalPerceptionSortSubject SortSubject) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatSetDay(int32 Day);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatSaveGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatSaveCustomGame(const FString& CustomSaveName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatRushBells(float NewDelay);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatResetHighScores();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatResetAchievements();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatReportNoiseEvent(float MaxRange, float Loudness, bool bUsePlayerLocation, float XWorldSpaceLoc, float YWorldSpaceLoc, float ZWorldSpaceLoc, FName Tag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatRemoveCharacterContext(const FString& CharacterName, const FString& Key) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatPrintFactionReputation(EFaction Faction);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatPrintCharacterContext(const FString& CharacterName) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatPrintCharacterBarkHistory(const FString& CharacterName) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatPrintBarkState() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatPlayDialogue(const FString& CharacterName, const FString& DialogueName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatPlayBark(const FString& CharacterName, const FString& EventName) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatNoPlayerDeath();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatNoGrappling();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatNoDurabilityLoss();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatNoAI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatMaxOutCraftingTables();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatLogNoiseEvents(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatLoadGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatLoadEvents(const FString& EventString, bool bClearCurrentEvents, bool bOverrideConflicts);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void CheatLoadDebugGame(const FString& EventKey);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatLoadCustomGame(const FString& CustomSaveName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatInfiniteStamina();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatIgnorePlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatGripLock();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatGodMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatFlashlightInfinite(bool bInfinite);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatFavorSync();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatFavorSetLocalForTerritory(float NewFavor, EMapTerritoryNodeType Territory);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatFavorSetLocal(float NewFavor);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatFavorSetGlobal(float NewFavor);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatFavorSetEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatFavorPrint();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatFavorClearLocal();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatFavorAlterLocalForTerritory(float FavorDelta, EMapTerritoryNodeType Territory);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatFavorAlterLocal(float FavorDelta);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatFavorAlterGlobal(float FavorDelta);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatEvaluateCriteria_Player(const FString& Criteria);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatEnableSpectatorScreenHUD(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatEnableScreenMessage(bool enable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatEnableNightTravel(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatDisplaySightStimCalculations();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatDisplayFootstepSounds();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatDemiGod();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatDeleteGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatClearCharacterBarkHistory(const FString& CharacterName) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatBreakGrapples();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatAllowAutoSaving(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatAddTestInventory();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatAddPlayerContext_Bool(const FString& Key, bool bValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatAddFactionReputation(EFaction Faction, float Reputation);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatAddCharacterContextString(const FString& CharacterName, const FString& Key, const FString& Value) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatAddCharacterContextInt(const FString& CharacterName, const FString& Key, int32 Value) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatAddCharacterContextFloat(const FString& CharacterName, const FString& Key, float Value) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatAddCharacterContextBool(const FString& CharacterName, const FString& Key, bool bValue) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatActivateStealthMode();
    
};

