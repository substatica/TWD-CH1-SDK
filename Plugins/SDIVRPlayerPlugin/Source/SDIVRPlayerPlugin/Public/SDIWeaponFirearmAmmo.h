#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDIWeaponFirearmFiredShotInfo.h"
#include "SDIWeaponAttachment.h"
#include "SDISpreadSettings.h"
#include "UObject/NoExportTypes.h"
#include "SDIWeaponFirearmFiredPelletInfo.h"
#include "SDIWeaponFirearmAmmo.generated.h"

class ASDIInventoryActor;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIWeaponFirearmAmmo : public ASDIWeaponAttachment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASDIInventoryActor> CurrencyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNonPlayerHasInfiniteCurrency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPellets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpreadDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDISpreadSettings> PelletSpreadSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDISpreadSettings> PlayerPelletSpreadSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDISpreadSettings> NonVRPlayerPelletSpreadSettings;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ASDIInventoryActor> CurrencyPtr;
    
public:
    ASDIWeaponFirearmAmmo();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInfiniteCurrency() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ASDIInventoryActor> GetCurrencyClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    ASDIInventoryActor* GetCurrency() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Fire(const FSDIWeaponFirearmFiredShotInfo& FiredShotInfo, const FTransform& ShotTransform);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform ApplySpread(const FSDIWeaponFirearmFiredPelletInfo& FiredPelletInfo, const FTransform& ShotTransform, float AdditionalSpread);
    
};

