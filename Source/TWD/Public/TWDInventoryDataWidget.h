#pragma once
#include "CoreMinimal.h"
#include "TWDUserWidget.h"
#include "ETWDConsumableQuality.h"
#include "UObject/NoExportTypes.h"
#include "TWDInventoryDataWidget.generated.h"

class ASDIInventoryActor;

UCLASS(Blueprintable, EditInlineNew)
class TWD_API UTWDInventoryDataWidget : public UTWDUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SharpnessRating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DurabilityRating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ThrowRating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bStabbingAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDismemberAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HealthEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaxHealthEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaxStaminaEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> DurabilityTiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> QualityTiers;
    
public:
    UTWDInventoryDataWidget();
    UFUNCTION(BlueprintCallable)
    bool SetInventoryActorBP(ASDIInventoryActor* InvActor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNewInventoryItem();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStabbingAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDismemberAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetThrowRating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSharpnessRating() const;
    
    UFUNCTION(BlueprintCallable)
    FText GetSalvageInfo();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetQualityText(ETWDConsumableQuality Quality) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetQualityLevel() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetQualityIndex(ETWDConsumableQuality Quality) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxStaminaEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealthEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetInventoryType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetInventoryName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetInventoryDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetInventoryCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetInventoryCharacteristics() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthEffect() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetDurabilityText(float Durability) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDurabilityRating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDurabilityPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDurabilityLevel() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetDurabilityIndex(float Durability) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDurability() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetConsumableEffectsText() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FormatSalvageEntry(const FGuid& IconGuid, const FText& Name, const int32 quantity, bool bTracking, FString& Result);
    
};

