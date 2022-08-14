#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "TWDWeaponBow.h"
#include "Curves/CurveFloat.h"
#include "SDIAkAudioEventPairDynamicLoop.h"
#include "TWDArrowAmmoUI.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TWDWeaponBowV2.generated.h"

class USkeletalMeshComponent;
class USDIPointGripComponent;
class UCapsuleComponent;
class USceneComponent;
class UTWDWidgetComponent;
class ATWDAmmoPropArrow;
class UObject;
class ASDIInventoryActor;

UCLASS(Blueprintable)
class TWD_API ATWDWeaponBowV2 : public ATWDWeaponBow {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BowMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDIPointGripComponent* PrimaryGripLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDIPointGripComponent* PrimaryGripRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDIPointGripComponent* NockGripLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDIPointGripComponent* NockGripRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDIPointGripComponent* InvertedPrimaryGripLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDIPointGripComponent* InvertedPrimaryGripRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDIPointGripComponent* InvertedNockGripLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDIPointGripComponent* InvertedNockGripRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* NockCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* StringGrabCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ArrowUILocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LeftHandNockOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RightHandNockOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinFirePullAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnNockPullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnNockMinNockedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReNockMinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NockArrowMaxAngleDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NockArrowGrabStringDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TEnumAsByte<ECollisionChannel>> NockArrowIgnoreCollisionChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve PullAmountCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve LaunchVelocityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve LaunchDurabilityCostCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve StaminaCostCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve PrimaryHandHapticsCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve SecondaryHandHapticsCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIAkAudioEventPairDynamicLoop DrawSoundLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DrawSoundLoopRTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve DrawSoundLoopRTPCCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ATWDAmmoPropArrow>, FTWDArrowAmmoUI> ArrowTypeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ArrowUIOffset;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> ArrowUIFlipAxis;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> ArrowUIInvertAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGrabHighestDurabilityArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoNockArrowWhenGrabbingString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrioritizeGrabbingStringOverBow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAimAssist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistMinEngagePullAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistPathCollisionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistPathCollisionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistTargetRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve AimAssistTargetRadiusCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistTargetZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve AimAssistTargetZOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistMinDesiredSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform NockGripLeftRelTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform NockGripRightRelTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform InvertedNockGripLeftRelTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform InvertedNockGripRightRelTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform ArrowUILocationRelTransform;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ATWDAmmoPropArrow> NockedArrow;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TEnumAsByte<ECollisionChannel>> NockedArrowCollisionChannelIgnorances;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ATWDAmmoPropArrow> LastUnNockedArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastUnNockedArrowTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanUnNockArrowFromPull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NockedArrowTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUnNockGrabbingArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastPullAmount;
    
public:
    ATWDWeaponBowV2();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateAmmoWidget(UTWDWidgetComponent* WidgetComponent, TSubclassOf<ATWDAmmoPropArrow> ArrowType, int32 ArrowCount);
    
public:
    UFUNCTION(BlueprintCallable)
    ATWDAmmoPropArrow* UnNockArrow(bool bGrabArrow);
    
    UFUNCTION(BlueprintCallable)
    bool NockArrow(ATWDAmmoPropArrow* Arrow, bool bGrabString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidArrowType(UClass* ArrowType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGripInverted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPullDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPullAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetNockTransform(bool bIncludeSideOffset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNockedArrowTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDAmmoPropArrow* GetNockedArrow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetArrowDirection(bool bIncludeSideOffset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArrowCount(UObject* InventoryHolder, TSubclassOf<ATWDAmmoPropArrow> ArrowType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDIInventoryActor* GetAmmoPropArrow(UObject* InventoryHolder, TSubclassOf<ATWDAmmoPropArrow> ArrowType) const;
    
    UFUNCTION(BlueprintCallable)
    bool AttemptNockArrow(ATWDAmmoPropArrow* Arrow);
    
};

