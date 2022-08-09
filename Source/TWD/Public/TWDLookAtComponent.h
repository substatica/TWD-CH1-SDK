#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LookAtCameraInfo.h"
#include "LookAtComponentActivatedDelegate.h"
#include "Components/SphereComponent.h"
#include "LookAtComponentDeactivatedDelegate.h"
#include "SavedLookatNotebookData.h"
#include "TWDLookAtComponent.generated.h"

class ASDIHeldActor;
class ATWDCharacter;
class ATWDLookActor;
class ATWDPlayerController;
class UCameraComponent;
class AActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UTWDLookAtComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLookAtComponentActivated OnLookAtActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLookAtComponentDeactivated OnLookAtDeactivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDetectionCone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionConeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseForwardFacingCone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardFacingConeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSingleActivationEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisabled;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowLookingWhenNotHeld;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLookActorAutomaticHide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugVisualization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveToNotebook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyOwnerAfterSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedLookatNotebookData SavedNotebookData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLookAtCameraInfo> ActiveCameras;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATWDLookActor> LookActorBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDLookActor* LookActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASDIHeldActor* InterpActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATWDCharacter* InterpTargetCharacter;
    
public:
    UTWDLookAtComponent();
    UFUNCTION(BlueprintCallable)
    bool TrySaveToNotebook();
    
    UFUNCTION(BlueprintCallable)
    bool IsLookInProgress() const;
    
    UFUNCTION(BlueprintCallable)
    void HideLookAtActor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanActivateLookAt(const ATWDPlayerController* PlayerController, const UCameraComponent* Camera);
    
private:
    UFUNCTION(BlueprintCallable)
    void BeginNoteConsumption(ASDIHeldActor* HeldActor, AActor* DroppedBy);
    
};

