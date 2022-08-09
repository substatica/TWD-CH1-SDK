#pragma once
#include "CoreMinimal.h"
#include "TWDAmmoProp.h"
#include "UObject/NoExportTypes.h"
#include "TWDAmmoPropArrow.generated.h"

class UTWDWeaponHitCapsuleComponent;
class ATWDWeaponBowV2;
class USDISplineGripComponent;

UCLASS()
class TWD_API ATWDAmmoPropArrow : public ATWDAmmoProp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTWDWeaponHitCapsuleComponent* ArrowHitCapsule;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USDISplineGripComponent* ShaftGripLeft;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USDISplineGripComponent* ShaftGripRight;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USDISplineGripComponent* ShaftGripLeftFlip;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USDISplineGripComponent* ShaftGripRightFlip;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float NockedStabMinTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LaunchedMaxDuration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LaunchedMinVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxMergeDurabilityDelta;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ATWDWeaponBowV2> NockedBow;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ATWDWeaponBowV2> LaunchedBow;
    
    UPROPERTY(Transient)
    float LaunchedTimestamp;
    
public:
    ATWDAmmoPropArrow();
    UFUNCTION(BlueprintNativeEvent)
    void SetNockedBow(ATWDWeaponBowV2* Bow);
    
    UFUNCTION(BlueprintNativeEvent)
    void Launch(ATWDWeaponBowV2* Bow, const FVector& LaunchVelocity);
    
    UFUNCTION(BlueprintPure)
    ATWDWeaponBowV2* GetNockedBow() const;
    
};

