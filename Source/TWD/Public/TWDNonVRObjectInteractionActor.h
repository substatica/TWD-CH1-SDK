#pragma once
#include "CoreMinimal.h"
#include "SDINonVRObjectInteractionActor.h"
#include "SDITimestampInputButton.h"
#include "ETWDInventoryType.h"
#include "ETWDNonVREquipmentSlot.h"
#include "UObject/NoExportTypes.h"
#include "ETWDNonVRInteraction.h"
#include "TWDNonVRInteractionPrompt.h"
#include "TWDNonVRObjectInteractionActor.generated.h"

class ATWDPlayerCharacter;
class ASDICorePlayerController;
class AActor;

UCLASS(Blueprintable)
class ATWDNonVRObjectInteractionActor : public ASDINonVRObjectInteractionActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDITimestampInputButton InputInteractButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDITimestampInputButton InputConsumeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDITimestampInputButton InputStoreButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDITimestampInputButton InputDropButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETWDInventoryType, FTransform> TransformOffsetByType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform FinalTransformOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInBackpackMode;
    
public:
    ATWDNonVRObjectInteractionActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateInteractionHeld(ETWDNonVRInteraction InteractionType, float Duration, float Time);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInteractionPromptsChanged(const TArray<FTWDNonVRInteractionPrompt>& NewPrompts);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDeviceChanged(ASDICorePlayerController* PC, bool bIsUsingGamePad);
    
    UFUNCTION(BlueprintCallable)
    void InputStoreReleased();
    
    UFUNCTION(BlueprintCallable)
    void InputStorePressed();
    
    UFUNCTION(BlueprintCallable)
    void InputInteractReleased();
    
    UFUNCTION(BlueprintCallable)
    void InputInteractPressed();
    
    UFUNCTION(BlueprintCallable)
    void InputDropReleased();
    
    UFUNCTION(BlueprintCallable)
    void InputDropPressed();
    
    UFUNCTION(BlueprintCallable)
    void InputConsumeReleased();
    
    UFUNCTION(BlueprintCallable)
    void InputConsumePressed();
    
    UFUNCTION(BlueprintCallable)
    bool HandleEquipInput(ATWDPlayerCharacter* Char, const FSDITimestampInputButton& ButtonInput, ETWDNonVREquipmentSlot Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSDITimestampInputButton GetInputStoreButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSDITimestampInputButton GetInputInteractButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSDITimestampInputButton GetInputDropButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSDITimestampInputButton GetInputConsumeButton() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FTWDNonVRInteractionPrompt> GatherInteractionPrompts(AActor* InteractionActor) const;
    
    UFUNCTION(BlueprintCallable)
    void EndConsumeAction();
    
    UFUNCTION(BlueprintCallable)
    void BeginConsumeAction();
    
};

