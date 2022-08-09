#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDIWeaponAttachment.h"
#include "SDISpreadSettings.h"
#include "UObject/NoExportTypes.h"
#include "SDIWeaponFirearmFiredShotInfo.h"
#include "SDIWeaponFirearmFiredPelletInfo.h"
#include "SDIWeaponFirearmAmmo.generated.h"

class ASDIInventoryActor;

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDIWeaponFirearmAmmo : public ASDIWeaponAttachment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ASDIInventoryActor> CurrencyClass;
    
    UPROPERTY(EditDefaultsOnly)
    bool bNonPlayerHasInfiniteCurrency;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Cost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 NumPellets;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SpreadDegrees;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSDISpreadSettings> PelletSpreadSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSDISpreadSettings> PlayerPelletSpreadSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSDISpreadSettings> NonVRPlayerPelletSpreadSettings;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ASDIInventoryActor> CurrencyPtr;
    
public:
    ASDIWeaponFirearmAmmo();
    UFUNCTION(BlueprintPure)
    bool HasInfiniteCurrency() const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<ASDIInventoryActor> GetCurrencyClass() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    ASDIInventoryActor* GetCurrency() const;
    
    UFUNCTION(BlueprintNativeEvent)
    int32 GetCost() const;
    
    UFUNCTION(BlueprintNativeEvent)
    int32 Fire(const FSDIWeaponFirearmFiredShotInfo& FiredShotInfo, const FTransform& ShotTransform);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform ApplySpread(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, float AdditionalSpread);
    
};

