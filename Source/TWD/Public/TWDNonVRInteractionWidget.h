#pragma once
#include "CoreMinimal.h"
#include "TWDUserWidget.h"
#include "TWDNonVRInteractionPrompt.h"
#include "SDICameraSettings.h"
#include "UObject/NoExportTypes.h"
#include "TWDNonVRInteractionWidget.generated.h"

class ASDICorePlayerController;

UCLASS(Blueprintable, EditInlineNew)
class TWD_API UTWDNonVRInteractionWidget : public UTWDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICameraSettings CameraSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseNonVRCameraRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator NonVRCameraRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVRCameraRotationTime;
    
public:
    UTWDNonVRInteractionWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateInteraction();
    
    UFUNCTION(BlueprintCallable)
    void StopInteraction();
    
    UFUNCTION(BlueprintCallable)
    void StartInteraction();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateInteraction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopInteraction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartInteraction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInteractionPromptsChanged(const TArray<FTWDNonVRInteractionPrompt>& NewPrompts);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDeviceChanged(ASDICorePlayerController* PC, bool bIsUsingGamePad);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FTWDNonVRInteractionPrompt> GatherInteractionPrompts() const;
    
};

