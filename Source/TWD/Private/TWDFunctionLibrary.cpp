#include "TWDFunctionLibrary.h"
#include "Templates/SubclassOf.h"

class ATWDCharacter;
class UObject;
class UUserWidget;
class ATWDSpawnManager;
class UAkAudioEvent;
class UTexture2D;
class APlayerController;
class UTWDDialogue;
class ATWDPlayerController;
class ATWDGameDirector;
class ATWDDialogueManager;
class ATWDCorpseManager;
class ATWDAIDirector;

UTexture2D* UTWDFunctionLibrary::WidgetToTexture(const UUserWidget* Widget, const FVector2D& DrawSize, UTexture2D* Target, float Scale) {
    return NULL;
}

void UTWDFunctionLibrary::StopDialogue(const UObject* WorldContextObject, TSubclassOf<UTWDDialogue> Dialogue) {
}

void UTWDFunctionLibrary::SetForceMipLevelsToBeResident(UTexture2D* Texture, bool bForceMiplevelsToBeResident) {
}

void UTWDFunctionLibrary::PostUIAkEvent(const UObject* WorldContextObject, UAkAudioEvent* AKEvent) {
}

UTWDDialogue* UTWDFunctionLibrary::PlayDialogue(const UObject* WorldContextObject, TSubclassOf<UTWDDialogue> Dialogue, const TArray<ATWDCharacter*>& Characters, ATWDPlayerController* DialogueInstigator, const FDialogueFinished& DialogueFinished) {
    return NULL;
}

bool UTWDFunctionLibrary::NotEqual_TopicTopic(FTWDTopic A, FName B) {
    return false;
}

bool UTWDFunctionLibrary::NotEqual_OptionOption(FTWDDialogueOption A, FName B) {
    return false;
}

bool UTWDFunctionLibrary::LessEqual_FactionReactionFactionReaction(EFactionReaction A, EFactionReaction B) {
    return false;
}

bool UTWDFunctionLibrary::Less_FactionReactionFactionReaction(EFactionReaction A, EFactionReaction B) {
    return false;
}

bool UTWDFunctionLibrary::IsPlayerInDialogue(const UObject* WorldContextObject, ATWDPlayerController* PlayerController) {
    return false;
}

bool UTWDFunctionLibrary::IsCharacterInDialogue(const UObject* WorldContextObject, ATWDCharacter* Character) {
    return false;
}

bool UTWDFunctionLibrary::GreaterEqual_FactionReactionFactionReaction(EFactionReaction A, EFactionReaction B) {
    return false;
}

bool UTWDFunctionLibrary::Greater_FactionReactionFactionReaction(EFactionReaction A, EFactionReaction B) {
    return false;
}

ATWDSpawnManager* UTWDFunctionLibrary::GetSpawnManager(const UObject* WorldContextObject) {
    return NULL;
}

ATWDGameDirector* UTWDFunctionLibrary::GetGameDirector(const UObject* WorldContextObject) {
    return NULL;
}

EFactionReaction UTWDFunctionLibrary::GetFactionReaction(const UObject* WorldContextObject, EFaction MyFaction, EFaction TheirFaction) {
    return EFactionReaction::Hated;
}

ATWDDialogueManager* UTWDFunctionLibrary::GetDialogueManager(const UObject* WorldContextObject) {
    return NULL;
}

ATWDCorpseManager* UTWDFunctionLibrary::GetCorpseManager(const UObject* WorldContextObject) {
    return NULL;
}

ATWDAIDirector* UTWDFunctionLibrary::GetAIDirector(const UObject* WorldContextObject) {
    return NULL;
}

bool UTWDFunctionLibrary::EvaluateCriteria_Player(const UObject* WorldContextObject, TArray<FString> Criteria, APlayerController* PlayerController) {
    return false;
}

bool UTWDFunctionLibrary::EvaluateCriteria_Global(const UObject* WorldContextObject, TArray<FString> Criteria) {
    return false;
}

bool UTWDFunctionLibrary::EvaluateCriteria_Faction(const UObject* WorldContextObject, TArray<FString> Criteria, EFaction Faction) {
    return false;
}

bool UTWDFunctionLibrary::EvaluateCriteria_Character(const UObject* WorldContextObject, TArray<FString> Criteria, ATWDCharacter* Character) {
    return false;
}

void UTWDFunctionLibrary::AppendStringMap(TMap<FString, FString> StringMapA, TMap<FString, FString> StringMapB, TMap<FString, FString>& OutStringMap) {
}

void UTWDFunctionLibrary::AddGlobalContext_String(const UObject* WorldContextObject, const FString& Key, const FString& Value) {
}

void UTWDFunctionLibrary::AddGlobalContext_Int(const UObject* WorldContextObject, const FString& Key, int32 Value) {
}

void UTWDFunctionLibrary::AddGlobalContext_Float(const UObject* WorldContextObject, const FString& Key, float Value) {
}

void UTWDFunctionLibrary::AddGlobalContext_Bool(const UObject* WorldContextObject, const FString& Key, bool bValue) {
}

void UTWDFunctionLibrary::AddFactionContext_String(const UObject* WorldContextObject, EFaction Faction, const FString& Key, const FString& Value) {
}

void UTWDFunctionLibrary::AddFactionContext_Int(const UObject* WorldContextObject, EFaction Faction, const FString& Key, int32 Value) {
}

void UTWDFunctionLibrary::AddFactionContext_Float(const UObject* WorldContextObject, EFaction Faction, const FString& Key, float Value) {
}

void UTWDFunctionLibrary::AddFactionContext_Bool(const UObject* WorldContextObject, EFaction Faction, const FString& Key, bool bValue) {
}

UTWDFunctionLibrary::UTWDFunctionLibrary() {
}

