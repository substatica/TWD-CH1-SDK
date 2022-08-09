#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIComponentReplacement.h"
#include "Curves/CurveFloat.h"
#include "SDIPlayerHandInteractComponentEntry.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ESDIInteractiveInteractType.h"
#include "SDIPlayerHandInteractComponent.generated.h"

class UPrimitiveComponent;
class APawn;
class USDIPlayerHandInteractComponent;
class ASDIPlayerHand;
class APlayerController;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class SDIVRPLAYERPLUGIN_API USDIPlayerHandInteractComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export, Transient)
    TArray<TWeakObjectPtr<UPrimitiveComponent>> OverlappedComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform OriginalHandRelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDIComponentReplacement ComponentAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PendingAsyncGripWorldInflation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AsyncGripWorldInflation;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPhysical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOrientUsingShoulderToHandDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShoulderToHandUseHMDLocationZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShoulderToHandBlendMDDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShoulderToHandHMDDirectionMaxAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve ShoulderToHandHMDDirectionBlendCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseShoulderToHandHybrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShoulderToHandHybridCullToCapsuleArc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShoulderToHandHybridBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ShoulderToHandShoulderOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShoulderToHandDirectionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InventorySlotOverlapRadius;
    
    USDIPlayerHandInteractComponent();
    UFUNCTION(BlueprintCallable)
    void SetPriorityInteractComp(USDIPlayerHandInteractComponent* Comp);
    
    UFUNCTION(BlueprintCallable)
    void PhysicalInteractRelease();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractionInCapsuleTop(const FSDIPlayerHandInteractComponentEntry& Entry, bool bFullSphere) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInteractionInCapsuleSection(const FSDIPlayerHandInteractComponentEntry& Entry, TEnumAsByte<EAxis::Type> Axis, bool bInvertAxis) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractionInCapsuleBottom(const FSDIPlayerHandInteractComponentEntry& Entry, bool bFullSphere) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDIPlayerHand* GetPlayerHand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetInteractCapsuleTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EControllerHand GetControllerHand() const;
    
    UFUNCTION(BlueprintCallable)
    FHitResult CheckInteractWorld(ESDIInteractiveInteractType Type, ASDIPlayerHand* hand, float Inflation);
    
    UFUNCTION(BlueprintCallable)
    FHitResult CheckGripWorld(ASDIPlayerHand* hand, float Inflation, bool bAsync);
    
};

