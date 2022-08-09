#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "ETWDInteractionType.h"
#include "TWDInteractiveHighlightInterface.generated.h"

class ATWDInteractiveHighlightActor;
class USceneComponent;
class ASDIInteractiveHighlightManager;

UINTERFACE(Blueprintable)
class UTWDInteractiveHighlightInterface : public UInterface {
    GENERATED_BODY()
};

class ITWDInteractiveHighlightInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateHighlightActor(ATWDInteractiveHighlightActor* HighlightActor, float DeltaSeconds, ASDIInteractiveHighlightManager* Manager, USceneComponent* Component, bool bAnyInteractions, bool bLeftHandClose, bool bLeftHandRanged, bool bRightHandClose, bool bRightHandRanged) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShowHighlight(ASDIInteractiveHighlightManager* Manager, USceneComponent* Component, bool bAnyInteractions, bool bLeftHandClose, bool bLeftHandRanged, bool bRightHandClose, bool bRightHandRanged) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitHighlightActor(ATWDInteractiveHighlightActor* HighlightActor, ASDIInteractiveHighlightManager* Manager, USceneComponent* Component, bool bAnyInteractions, bool bLeftHandClose, bool bLeftHandRanged, bool bRightHandClose, bool bRightHandRanged) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ETWDInteractionType GetHighlightType(ASDIInteractiveHighlightManager* Manager, USceneComponent* Component, bool bAnyInteractions, bool bLeftHandClose, bool bLeftHandRanged, bool bRightHandClose, bool bRightHandRanged) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetHighlightTransform(ASDIInteractiveHighlightManager* Manager, USceneComponent* Component, const FTransform& InTransform, const FTransform& CameraTransform, bool bCollide) const;
    
};

