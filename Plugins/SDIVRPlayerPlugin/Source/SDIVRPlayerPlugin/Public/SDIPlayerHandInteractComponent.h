#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "UObject/NoExportTypes.h"
#include "SDIComponentReplacement.h"
#include "SDIPlayerHandInteractComponentEntry.h"
#include "Curves/CurveFloat.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "Engine/EngineTypes.h"
#include "ESDIInteractiveInteractType.h"
#include "SDIPlayerHandInteractComponent.generated.h"

class UPrimitiveComponent;
class USDIPlayerHandInteractComponent;
class ASDIPlayerHand;
class APlayerController;
class APawn;

UCLASS(EditInlineNew, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class SDIVRPLAYERPLUGIN_API USDIPlayerHandInteractComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    TArray<TWeakObjectPtr<UPrimitiveComponent>> OverlappedComponents;
    
    UPROPERTY(Transient)
    FTransform OriginalHandRelativeTransform;
    
    UPROPERTY(Transient)
    FSDIComponentReplacement ComponentAttachment;
    
    UPROPERTY(Transient)
    float PendingAsyncGripWorldInflation;
    
    UPROPERTY(Transient)
    float AsyncGripWorldInflation;
    
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bRanged;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bPhysical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOrientUsingShoulderToHandDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShoulderToHandUseHMDLocationZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShoulderToHandBlendMDDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShoulderToHandHMDDirectionMaxAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve ShoulderToHandHMDDirectionBlendCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseShoulderToHandHybrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShoulderToHandHybridCullToCapsuleArc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShoulderToHandHybridBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector ShoulderToHandShoulderOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ShoulderToHandDirectionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InventorySlotOverlapRadius;
    
    USDIPlayerHandInteractComponent();
    UFUNCTION(BlueprintCallable)
    void SetPriorityInteractComp(USDIPlayerHandInteractComponent* Comp);
    
    UFUNCTION(BlueprintCallable)
    void PhysicalInteractRelease();
    
    UFUNCTION(BlueprintPure)
    bool IsInteractionInCapsuleTop(const FSDIPlayerHandInteractComponentEntry& Entry, bool bFullSphere) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInteractionInCapsuleSection(const FSDIPlayerHandInteractComponentEntry& Entry, TEnumAsByte<EAxis::Type> Axis, bool bInvertAxis) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInteractionInCapsuleBottom(const FSDIPlayerHandInteractComponentEntry& Entry, bool bFullSphere) const;
    
    UFUNCTION(BlueprintPure)
    ASDIPlayerHand* GetPlayerHand() const;
    
    UFUNCTION(BlueprintPure)
    APlayerController* GetPlayerController() const;
    
    UFUNCTION(BlueprintPure)
    APawn* GetPawn() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetInteractCapsuleTransform() const;
    
    UFUNCTION(BlueprintPure)
    EControllerHand GetControllerHand() const;
    
    UFUNCTION()
    FHitResult CheckInteractWorld(ESDIInteractiveInteractType Type, ASDIPlayerHand* hand, float Inflation);
    
    UFUNCTION()
    FHitResult CheckGripWorld(ASDIPlayerHand* hand, float Inflation, bool bAsync);
    
};

