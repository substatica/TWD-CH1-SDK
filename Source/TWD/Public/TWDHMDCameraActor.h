#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Camera/CameraActor.h"
#include "EFaction.h"
#include "UObject/NoExportTypes.h"
#include "TWDUINotification.h"
#include "SavedLookatNotebookData.h"
#include "EFactionReaction.h"
#include "TWDHMDCameraActor.generated.h"

class ASDIHeldActor;
class USphereComponent;
class UTexture2D;
class UTWDSubtitleWidget;
class UAkAudioEvent;
class ATWDPlayerCharacter;
class UTWDWidgetComponent;
class UTWDDialogueSelectionWidget;
class UTWDDialogueAvailabilityWidget;
class UTWDRecipe;
class ASDIInventoryActor;
class ATWDPlayerController;

UCLASS(Blueprintable)
class ATWDHMDCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* HeadCollisionSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTWDUINotification> TaskNotificationQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGrappleUIEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGutsModeUIEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFoodConsumptionUIEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerHealthUIEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerInventoryMessageUIEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaveModeCombatUIEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATWDPlayerCharacter* PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PlayerHealthPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PlayerStaminaPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastPlayerHealthPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastPlayerStaminaPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLastSaveRunnableIsActive;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTWDWidgetComponent* SubtitleWidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTWDWidgetComponent* DialogueSelectionWidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTWDWidgetComponent* DialogueAvailabilityWidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DialogueSelectionWidgetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DialogueAvailabilityWidgetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeRemainingPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DialogueWidgetLocationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DialogueWidgetRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFixedDialogueWidgetScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysSnapDialogueWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TranslucencySortPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubtitleAutoDepthMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubtitleAutoDepthInterpolationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubtitleAutoDepthTraceInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ASDIHeldActor>> ShowHealthStaminaHeldActorClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ShowHealthStaminaTemporaryBuffs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTWDSubtitleWidget* SubtitleWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTWDDialogueSelectionWidget* DialogueSelectionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTWDDialogueAvailabilityWidget* DialogueAvailabilityWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDialogueSelectionWidgetWasVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDialogueAvailabilityWidgetWasVisible;
    
public:
    ATWDHMDCameraActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateFadeProxy(float FadeAmount, float ElapsedTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSaveGameNotification();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowHealthStamina() const;
    
    UFUNCTION(BlueprintCallable)
    void SelectDialogueSelectionWithName(const FName& OptionName);
    
    UFUNCTION(BlueprintCallable)
    void QueueCustomNotification(FText Status, FText Title, UTexture2D* CustomUIIcon, UAkAudioEvent* CustomUIAudio);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTrackRecipe(TSubclassOf<UTWDRecipe> RecipeClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTrackedRecipeUpdate(TSubclassOf<UTWDRecipe> RecipeClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnScavengingListUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSaveNote(FSavedLookatNotebookData NoteData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnNotificationComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNewNotification(FTWDUINotification Notification);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFactionReputationChanged(EFaction Faction, float Reputation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFactionReactionChanged(EFaction Faction, EFactionReaction NewReaction, EFactionReaction PreviousReaction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyItemStored(ASDIInventoryActor* InventoryActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDialogueSkipVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideSaveGameNotification();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDPlayerController* GetPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDialogueSkipPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDPlayerCharacter* GetControlledPlayerCharacter() const;
    
};

