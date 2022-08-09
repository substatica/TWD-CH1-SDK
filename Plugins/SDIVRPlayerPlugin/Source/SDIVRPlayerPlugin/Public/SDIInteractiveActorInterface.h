#pragma once
#include "CoreMinimal.h"
#include "ESDIInteractRangeType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "InputCoreTypes.h"
#include "Engine/EngineTypes.h"
#include "ESDIDirection.h"
#include "SDIPlayerHandInteractComponentEntry.h"
#include "ESDIInteractiveInteractType.h"
#include "UObject/NoExportTypes.h"
#include "SDIInteractionDescription.h"
#include "ESDIHandPose.h"
#include "SDIInteractiveActorInterface.generated.h"

class ASDIPlayerHand;
class ASDIPlayerController;
class UPrimitiveComponent;
class AActor;
class USDIPlayerHandPhysicalInteractComponent;
class UHapticFeedbackEffect_Base;

UINTERFACE(Blueprintable)
class SDIVRPLAYERPLUGIN_API USDIInteractiveActorInterface : public UInterface {
    GENERATED_BODY()
};

class SDIVRPLAYERPLUGIN_API ISDIInteractiveActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    bool RemoveInteractionHighlight(ASDIPlayerController* PC, EControllerHand hand, ESDIInteractRangeType RangeType, UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPhysicalInteractRelease(ASDIPlayerHand* hand, UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintNativeEvent)
    bool OnPhysicalInteractPush(ASDIPlayerHand* hand, UPrimitiveComponent* Component, const FVector& PushDelta, float PushTime, bool bPushCollisionValid, const FHitResult& PushCollision);
    
    UFUNCTION(BlueprintNativeEvent)
    AActor* OnPhysicalInteractPress(ASDIPlayerHand* hand, UPrimitiveComponent* Component, const FSDIPlayerHandInteractComponentEntry& Entry);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnInteractRelease(ESDIInteractiveInteractType Type, ASDIPlayerHand* hand);
    
    UFUNCTION(BlueprintNativeEvent)
    AActor* OnInteractPress(ESDIInteractiveInteractType Type, ASDIPlayerHand* hand, UPrimitiveComponent* Component, const FSDIPlayerHandInteractComponentEntry& Entry);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnInteractLongHeld(ESDIInteractiveInteractType Type, ASDIPlayerHand* hand, UPrimitiveComponent* Component, const FSDIPlayerHandInteractComponentEntry& Entry);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnInteractionHighlightChanged(bool bAnyInteractions, bool bLeftHandClose, bool bLeftHandRanged, bool bRightHandClose, bool bRightHandRanged);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnHandEndOverlap(ASDIPlayerController* PC, EControllerHand hand, ESDIInteractRangeType RangeType, UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnHandBeginOverlap(ASDIPlayerController* PC, EControllerHand hand, ESDIInteractRangeType RangeType, UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnGripRelease(ASDIPlayerHand* hand);
    
    UFUNCTION(BlueprintNativeEvent)
    AActor* OnGripPress(ASDIPlayerHand* hand, UPrimitiveComponent* Component, const FSDIPlayerHandInteractComponentEntry& Entry);
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsValidPhysicalInteractionMagnet(ASDIPlayerHand* hand, USDIPlayerHandPhysicalInteractComponent* InteractComp, UPrimitiveComponent* Component, const FVector& InteractCompCapsuleTop, FVector& MagnetLocation, FVector& MagnetAxis);
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsValidInteractionHighlight(ASDIPlayerController* PC, UPrimitiveComponent* Component, const FSDIPlayerHandInteractComponentEntry& Entry);
    
    UFUNCTION(BlueprintNativeEvent)
    void HandLockIsExceedingArmLengthReleaseFactor(ASDIPlayerHand* hand, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetNonVRInteractionHighlightDirections(ASDIPlayerController* PC);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UPrimitiveComponent* GetNonVRInteractionHighlight(ASDIPlayerController* PC, UPrimitiveComponent* Current, ESDIDirection Dir);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetNonVRInteractionActor(ASDIPlayerController* PC);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetInteractionHighlights(bool& bLeftHandClose, bool& bLeftHandRanged, bool& bRightHandClose, bool& bRightHandRanged);
    
    UFUNCTION(BlueprintNativeEvent)
    TArray<FSDIInteractionDescription> GetInteractionDescriptions(ASDIPlayerController* PC, UPrimitiveComponent* Component, const FSDIPlayerHandInteractComponentEntry& Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UHapticFeedbackEffect_Base* GetInteractFeedback(ESDIInteractiveInteractType Type, ASDIPlayerHand* hand, ESDIInteractRangeType RangeType, UPrimitiveComponent* Component) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ESDIHandPose GetHighlightHandPose(ASDIPlayerHand* hand, ESDIInteractRangeType RangeType, UPrimitiveComponent* Component) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UHapticFeedbackEffect_Base* GetHighlightFeedback(ASDIPlayerHand* hand, ESDIInteractRangeType RangeType, UPrimitiveComponent* Component) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UHapticFeedbackEffect_Base* GetGripFeedback(ASDIPlayerHand* hand, ESDIInteractRangeType RangeType, UPrimitiveComponent* Component) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetDisableNonVRInteractionMovement();
    
    UFUNCTION(BlueprintNativeEvent)
    bool AddInteractionHighlight(ASDIPlayerController* PC, EControllerHand hand, ESDIInteractRangeType RangeType, UPrimitiveComponent* Component);
    
};

