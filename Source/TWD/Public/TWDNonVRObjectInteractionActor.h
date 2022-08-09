#pragma once
#include "CoreMinimal.h"
#include "SDINonVRObjectInteractionActor.h"
#include "ETWDNonVRInteraction.h"
#include "SDITimestampInputButton.h"
#include "TWDNonVRInteractionPrompt.h"
#include "ETWDInventoryType.h"
#include "UObject/NoExportTypes.h"
#include "ETWDNonVREquipmentSlot.h"
#include "TWDNonVRObjectInteractionActor.generated.h"

class ASDICorePlayerController;
class ATWDPlayerCharacter;
class AActor;

UCLASS()
class ATWDNonVRObjectInteractionActor : public ASDINonVRObjectInteractionActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FSDITimestampInputButton InputInteractButton;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FSDITimestampInputButton InputConsumeButton;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FSDITimestampInputButton InputStoreButton;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FSDITimestampInputButton InputDropButton;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<ETWDInventoryType, FTransform> TransformOffsetByType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTransform FinalTransformOffset;
    
    UPROPERTY(BlueprintReadOnly)
    bool bInBackpackMode;
    
public:
    ATWDNonVRObjectInteractionActor();
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateInteractionHeld(ETWDNonVRInteraction InteractionType, float Duration, float Time);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractionPromptsChanged(const TArray<FTWDNonVRInteractionPrompt>& NewPrompts);
    
public:
    UFUNCTION()
    void OnDeviceChanged(ASDICorePlayerController* PC, bool bIsUsingGamePad);
    
    UFUNCTION()
    void InputStoreReleased();
    
    UFUNCTION()
    void InputStorePressed();
    
    UFUNCTION()
    void InputInteractReleased();
    
    UFUNCTION()
    void InputInteractPressed();
    
    UFUNCTION()
    void InputDropReleased();
    
    UFUNCTION()
    void InputDropPressed();
    
    UFUNCTION()
    void InputConsumeReleased();
    
    UFUNCTION()
    void InputConsumePressed();
    
    UFUNCTION()
    bool HandleEquipInput(ATWDPlayerCharacter* Char, const FSDITimestampInputButton& ButtonInput, ETWDNonVREquipmentSlot Slot);
    
    UFUNCTION(BlueprintPure)
    FSDITimestampInputButton GetInputStoreButton() const;
    
    UFUNCTION(BlueprintPure)
    FSDITimestampInputButton GetInputInteractButton() const;
    
    UFUNCTION(BlueprintPure)
    FSDITimestampInputButton GetInputDropButton() const;
    
    UFUNCTION(BlueprintPure)
    FSDITimestampInputButton GetInputConsumeButton() const;
    
protected:
    UFUNCTION(BlueprintPure)
    TArray<FTWDNonVRInteractionPrompt> GatherInteractionPrompts(AActor* InteractionActor) const;
    
    UFUNCTION()
    void EndConsumeAction();
    
    UFUNCTION()
    void BeginConsumeAction();
    
};

