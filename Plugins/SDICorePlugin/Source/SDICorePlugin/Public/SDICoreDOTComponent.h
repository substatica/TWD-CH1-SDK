#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "RFloatExp.h"
#include "SDIExportInterface.h"
#include "SDIExportData.h"
#include "SDIDamageData.h"
#include "UObject/NoExportTypes.h"
#include "SDICoreDOTComponent.generated.h"

class USDICoreDOTComponent;
class AActor;
class AController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDICOREPLUGIN_API USDICoreDOTComponent : public UActorComponent, public ISDIExportInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIExportData ExportData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIDamageData Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloatExp Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloatExp Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloatExp Interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectedByTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IntervalTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepTotalDuration, meta=(AllowPrivateAccess=true))
    float RepTotalDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float RepDurationTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DelayTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AttachedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* EventInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepDamageCauser, meta=(AllowPrivateAccess=true))
    AActor* RepDamageCauser;
    
public:
    USDICoreDOTComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static int32 RemoveDOT(TSubclassOf<USDICoreDOTComponent> DOTClass, AActor* Target, AController* inEventInstigator, AActor* inDamageCauser);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReApplyWith(const USDICoreDOTComponent* BaseDOT, AActor* Target, AController* inEventInstigator, AActor* inDamageCauser, const TMap<FName, float>& CustomData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProcessCustomData(bool bIsReApply, AActor* Target, AController* inEventInstigator, AActor* inDamageCauser, const TMap<FName, float>& CustomData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepTotalDuration(float OldRepTotalDuration);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepDamageCauser(AActor* OldRepDamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDurationUpdated(float OldRepTotalDuration, float NewRepTotalDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageCauserUpdated(AActor* OldRepDamageCauser, AActor* NewRepDamageCauser);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAuthority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanApplyTo(AActor* Target, AController* inEventInstigator, AActor* inDamageCauser, const TMap<FName, float>& CustomData) const;
    
    UFUNCTION(BlueprintCallable)
    static USDICoreDOTComponent* ApplyDOT(TSubclassOf<USDICoreDOTComponent> DOTClass, AActor* Target, AController* inEventInstigator, AActor* inDamageCauser, const TMap<FName, float>& CustomData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AddCheckExistingDOT(USDICoreDOTComponent* DOTComp, AActor* Target, AController* inEventInstigator, AActor* inDamageCauser, const TMap<FName, float>& CustomData) const;
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    FGuid K2GetExportGuid() const override PURE_VIRTUAL(K2GetExportGuid, return FGuid{};);
    
    UFUNCTION(BlueprintCallable)
    FText GetExportText(FName Key) const override PURE_VIRTUAL(GetExportText, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    FText GetExportDisplayName() const override PURE_VIRTUAL(GetExportDisplayName, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    FText GetExportDescription() const override PURE_VIRTUAL(GetExportDescription, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    bool FindExportText(FName Key, FText& OutText) const override PURE_VIRTUAL(FindExportText, return false;);
    
};

