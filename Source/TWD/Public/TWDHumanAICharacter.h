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
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
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

UCLASS()
class TWD_API ATWDHumanAICharacter : public ATWDAICharacter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float PushBackDistance;
    
    UPROPERTY(EditAnywhere)
    float PushbackMaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float PushBackTime;
    
    UPROPERTY(EditAnywhere)
    float KnockBackDistance;
    
    UPROPERTY(EditAnywhere)
    float KnockBackMaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float KnockBackInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float KnockBackTime;
    
    UPROPERTY(EditAnywhere)
    TMap<EHitReactType, float> StunTime;
    
    UPROPERTY(EditAnywhere)
    FName StunTimeKey;
    
    UPROPERTY(EditAnywhere)
    bool bDebugShowKnockBackVector;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ABP_TurnSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ABP_ExitSpeed;
    
    UPROPERTY(BlueprintReadWrite)
    ECharacterAnimationSet RequestedCharacterAnimationSet;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<ASDIInventoryActor> WeaponClass;
    
private:
    UPROPERTY(Export, VisibleAnywhere)
    UStaticMeshComponent* EphemeralKnifeComponent;
    
    UPROPERTY(Transient)
    FSDIAttachmentInfo EphemeralKnifeAttachmentInfo;
    
    UPROPERTY(Transient)
    FRotator KnockBackCurrentRotation;
    
    UPROPERTY(Transient)
    FRotator KnockBackTargetRotation;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UMaterialBillboardComponent* Native_AggroMeterIconRef;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    UMaterialInstanceDynamic* Native_AggroMeterDMI;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FVector StartingPos;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FVector Destination;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float TotalSeconds;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FLinearColor Native_AggoMeterColorLowRef;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FLinearColor Native_AggoMeterColorHighRef;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FLinearColor Native_AggroMeterAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AggroMeterAlertHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AggroMeterAlertFadeTime;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    uint8 InTranslateProgress: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
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
    
    UFUNCTION(BlueprintNativeEvent)
    void OnPersonalSpacePushback();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnKnockBack();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHitReactEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitReactBark(ETWDCharacterHitRegion Region, EHitReactType Type, TSubclassOf<UDamageType> DamageTypeClass);
    
    UFUNCTION(BlueprintCallable)
    void Native_UpdateTranslateToDestination(float DeltaSeconds);
    
    UFUNCTION(BlueprintImplementableEvent)
    void Native_OnTranslateArrived();
    
    UFUNCTION(BlueprintImplementableEvent)
    void Native_DisplayReactionDebugInfo();
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsDefaultBehaviorPatrol() const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool IsDefaultBehaviorGuard() const;
    
    UFUNCTION(BlueprintPure)
    void GetWeaponAnimationType(EWeaponAnimation& WeaponAnimType, bool& bIsRevolver) const;
    
    UFUNCTION(BlueprintNativeEvent)
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

