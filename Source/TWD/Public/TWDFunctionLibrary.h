#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TWDTopic.h"
#include "DialogueFinishedDelegate.h"
#include "TWDDialogueOption.h"
#include "EFactionReaction.h"
#include "EFaction.h"
#include "TWDFunctionLibrary.generated.h"

class ATWDSpawnManager;
class UAkAudioEvent;
class UTexture2D;
class ATWDCharacter;
class UObject;
class UUserWidget;
class APlayerController;
class UTWDDialogue;
class ATWDPlayerController;
class ATWDGameDirector;
class ATWDDialogueManager;
class ATWDCorpseManager;
class ATWDAIDirector;

UCLASS(BlueprintType)
class TWD_API UTWDFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTWDFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static UTexture2D* WidgetToTexture(const UUserWidget* Widget, const FVector2D& DrawSize, UTexture2D* Target, float Scale);
    
    UFUNCTION(BlueprintCallable)
    static void StopDialogue(const UObject* WorldContextObject, TSubclassOf<UTWDDialogue> Dialogue);
    
    UFUNCTION(BlueprintCallable)
    static void SetForceMipLevelsToBeResident(UTexture2D* Texture, bool bForceMiplevelsToBeResident);
    
    UFUNCTION(BlueprintCallable)
    static void PostUIAkEvent(const UObject* WorldContextObject, UAkAudioEvent* AKEvent);
    
    UFUNCTION(BlueprintCallable)
    static UTWDDialogue* PlayDialogue(const UObject* WorldContextObject, TSubclassOf<UTWDDialogue> Dialogue, const TArray<ATWDCharacter*>& Characters, ATWDPlayerController* DialogueInstigator, const FDialogueFinished& DialogueFinished);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_TopicTopic(FTWDTopic A, FName B);
    
    UFUNCTION(BlueprintPure)
    static bool NotEqual_OptionOption(FTWDDialogueOption A, FName B);
    
    UFUNCTION(BlueprintPure)
    static bool LessEqual_FactionReactionFactionReaction(EFactionReaction A, EFactionReaction B);
    
    UFUNCTION(BlueprintPure)
    static bool Less_FactionReactionFactionReaction(EFactionReaction A, EFactionReaction B);
    
    UFUNCTION(BlueprintPure)
    static bool IsPlayerInDialogue(const UObject* WorldContextObject, ATWDPlayerController* PlayerController);
    
    UFUNCTION(BlueprintPure)
    static bool IsCharacterInDialogue(const UObject* WorldContextObject, ATWDCharacter* Character);
    
    UFUNCTION(BlueprintPure)
    static bool GreaterEqual_FactionReactionFactionReaction(EFactionReaction A, EFactionReaction B);
    
    UFUNCTION(BlueprintPure)
    static bool Greater_FactionReactionFactionReaction(EFactionReaction A, EFactionReaction B);
    
    UFUNCTION(BlueprintPure)
    static ATWDSpawnManager* GetSpawnManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ATWDGameDirector* GetGameDirector(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static EFactionReaction GetFactionReaction(const UObject* WorldContextObject, EFaction MyFaction, EFaction TheirFaction);
    
    UFUNCTION(BlueprintPure)
    static ATWDDialogueManager* GetDialogueManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ATWDCorpseManager* GetCorpseManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static ATWDAIDirector* GetAIDirector(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateCriteria_Player(const UObject* WorldContextObject, TArray<FString> Criteria, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateCriteria_Global(const UObject* WorldContextObject, TArray<FString> Criteria);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateCriteria_Faction(const UObject* WorldContextObject, TArray<FString> Criteria, EFaction Faction);
    
    UFUNCTION(BlueprintCallable)
    static bool EvaluateCriteria_Character(const UObject* WorldContextObject, TArray<FString> Criteria, ATWDCharacter* Character);
    
    UFUNCTION(BlueprintPure)
    static void AppendStringMap(TMap<FString, FString> StringMapA, TMap<FString, FString> StringMapB, TMap<FString, FString>& OutStringMap);
    
    UFUNCTION(BlueprintCallable)
    static void AddGlobalContext_String(const UObject* WorldContextObject, const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddGlobalContext_Int(const UObject* WorldContextObject, const FString& Key, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddGlobalContext_Float(const UObject* WorldContextObject, const FString& Key, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddGlobalContext_Bool(const UObject* WorldContextObject, const FString& Key, bool bValue);
    
    UFUNCTION(BlueprintCallable)
    static void AddFactionContext_String(const UObject* WorldContextObject, EFaction Faction, const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddFactionContext_Int(const UObject* WorldContextObject, EFaction Faction, const FString& Key, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddFactionContext_Float(const UObject* WorldContextObject, EFaction Faction, const FString& Key, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void AddFactionContext_Bool(const UObject* WorldContextObject, EFaction Faction, const FString& Key, bool bValue);
    
};

