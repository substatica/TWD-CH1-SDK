#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDIAttachmentInfo.h"
#include "TWDAICharacter.h"
#include "EHitReactType.h"
#include "ECharacterAnimationSet.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "UObject/NoExportTypes.h"
#include "ETWDCharacterHitDirection.h"
#include "ETWDCharacterHitRegion.h"
#include "EWeaponAnimation.h"
#include "OnFiredRoundDelegate.h"
#include "TWDHumanAICharacter.generated.h"

class ASDIInventoryActor;
class UMaterialInstanceDynamic;
class UStaticMeshComponent;
class UMaterialBillboardComponent;
class UDamageType;

UCLASS(Blueprintable)
class TWD_API ATWDHumanAICharacter : public ATWDAICharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushBackDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushbackMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushBackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockBackDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockBackMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockBackInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KnockBackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHitReactType, float> StunTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StunTimeKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugShowKnockBackVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ABP_TurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ABP_ExitSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAnimationSet RequestedCharacterAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASDIInventoryActor> WeaponClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* EphemeralKnifeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDIAttachmentInfo EphemeralKnifeAttachmentInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator KnockBackCurrentRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator KnockBackTargetRotation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMaterialBillboardComponent* Native_AggroMeterIconRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Native_AggroMeterDMI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector StartingPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector Destination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TotalSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor Native_AggoMeterColorLowRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor Native_AggoMeterColorHighRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor Native_AggroMeterAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AggroMeterAlertHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AggroMeterAlertFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 InTranslateProgress: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DEBUG_ShowReactionInfo: 1;
    
public:
    ATWDHumanAICharacter();
    UFUNCTION(BlueprintCallable)
    void UpdateRotation_PostRM(const FTransform& NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void UpdateLocation_PostRM(const FTransform& NewLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponClass(TSubclassOf<ASDIInventoryActor> NewWeaponClass);
    
    UFUNCTION(BlueprintCallable)
    void ReloadWeapon(EControllerHand hand);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStun(EHitReactType Type, ETWDCharacterHitDirection Direction, FVector Vector);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPersonalSpacePushback();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKnockBack();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHitReactEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitReactBark(ETWDCharacterHitRegion Region, EHitReactType Type, TSubclassOf<UDamageType> DamageTypeClass);
    
    UFUNCTION(BlueprintCallable)
    void Native_UpdateTranslateToDestination(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Native_OnTranslateArrived();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Native_DisplayReactionDebugInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDefaultBehaviorPatrol() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDefaultBehaviorGuard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetWeaponAnimationType(EWeaponAnimation& WeaponAnimType, bool& bIsRevolver) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetGuardPointLocation(bool& ValidLocation);
    
    UFUNCTION(BlueprintCallable)
    void FireWeapon(EControllerHand hand, const FOnFiredRound& OnFiredRound);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateEphemeralKnife();
    
    UFUNCTION(BlueprintCallable)
    void ActivateEphemeralKnifeAtAttachment(FName SocketName, FTransform RelativeTransform);
    
    UFUNCTION(BlueprintCallable)
    void ActivateEphemeralKnife();
    
};

