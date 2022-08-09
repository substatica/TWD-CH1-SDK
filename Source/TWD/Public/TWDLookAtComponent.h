#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LookAtComponentActivatedDelegate.h"
#include "Components/SphereComponent.h"
#include "LookAtComponentDeactivatedDelegate.h"
#include "SavedLookatNotebookData.h"
#include "LookAtCameraInfo.h"
#include "TWDLookAtComponent.generated.h"

class ASDIHeldActor;
class ATWDLookActor;
class ATWDCharacter;
class ATWDPlayerController;
class UCameraComponent;
class AActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UTWDLookAtComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, EditAnywhere)
    FLookAtComponentActivated OnLookAtActivated;
    
    UPROPERTY(BlueprintAssignable, EditAnywhere)
    FLookAtComponentDeactivated OnLookAtDeactivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DetectionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DetectionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseDetectionCone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DetectionConeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseForwardFacingCone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForwardFacingConeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSingleActivationEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDisabled;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bAllowLookingWhenNotHeld;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bLookActorAutomaticHide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bDebugVisualization;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bSaveToNotebook;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDestroyOwnerAfterSave;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float InterpDuration;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FSavedLookatNotebookData SavedNotebookData;
    
protected:
    UPROPERTY()
    TArray<FLookAtCameraInfo> ActiveCameras;
    
private:
    UPROPERTY(EditAnywhere)
    TSubclassOf<ATWDLookActor> LookActorBlueprint;
    
    UPROPERTY()
    ATWDLookActor* LookActor;
    
    UPROPERTY(Transient)
    ASDIHeldActor* InterpActor;
    
    UPROPERTY(Transient)
    ATWDCharacter* InterpTargetCharacter;
    
public:
    UTWDLookAtComponent();
    UFUNCTION(BlueprintCallable)
    bool TrySaveToNotebook();
    
    UFUNCTION()
    bool IsLookInProgress() const;
    
    UFUNCTION(BlueprintCallable)
    void HideLookAtActor();
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanActivateLookAt(const ATWDPlayerController* PlayerController, const UCameraComponent* Camera);
    
private:
    UFUNCTION(BlueprintCallable)
    void BeginNoteConsumption(ASDIHeldActor* HeldActor, AActor* DroppedBy);
    
};

