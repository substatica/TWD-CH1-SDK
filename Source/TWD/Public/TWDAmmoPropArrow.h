#pragma once
#include "CoreMinimal.h"
#include "TWDAmmoProp.h"
#include "UObject/NoExportTypes.h"
#include "TWDAmmoPropArrow.generated.h"

class UTWDWeaponHitCapsuleComponent;
class ATWDWeaponBowV2;
class USDISplineGripComponent;

UCLASS(Blueprintable)
class TWD_API ATWDAmmoPropArrow : public ATWDAmmoProp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTWDWeaponHitCapsuleComponent* ArrowHitCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDISplineGripComponent* ShaftGripLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDISplineGripComponent* ShaftGripRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDISplineGripComponent* ShaftGripLeftFlip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDISplineGripComponent* ShaftGripRightFlip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NockedStabMinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchedMaxDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchedMinVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxMergeDurabilityDelta;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ATWDWeaponBowV2> NockedBow;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ATWDWeaponBowV2> LaunchedBow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LaunchedTimestamp;
    
public:
    ATWDAmmoPropArrow();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNockedBow(ATWDWeaponBowV2* Bow);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Launch(ATWDWeaponBowV2* Bow, const FVector& LaunchVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDWeaponBowV2* GetNockedBow() const;
    
};

