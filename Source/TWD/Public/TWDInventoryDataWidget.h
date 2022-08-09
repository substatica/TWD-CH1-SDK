#pragma once
#include "CoreMinimal.h"
#include "TWDUserWidget.h"
#include "ETWDConsumableQuality.h"
#include "UObject/NoExportTypes.h"
#include "TWDInventoryDataWidget.generated.h"

class ASDIInventoryActor;

UCLASS(EditInlineNew)
class TWD_API UTWDInventoryDataWidget : public UTWDUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    float SharpnessRating;
    
    UPROPERTY(Transient)
    float DurabilityRating;
    
    UPROPERTY(Transient)
    float ThrowRating;
    
    UPROPERTY(Transient)
    bool bStabbingAllowed;
    
    UPROPERTY(Transient)
    bool bDismemberAllowed;
    
    UPROPERTY(Transient)
    float HealthEffect;
    
    UPROPERTY(Transient)
    float MaxHealthEffect;
    
    UPROPERTY(Transient)
    float MaxStaminaEffect;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FText> DurabilityTiers;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FText> QualityTiers;
    
public:
    UTWDInventoryDataWidget();
    UFUNCTION(BlueprintCallable)
    bool SetInventoryActorBP(ASDIInventoryActor* InvActor);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnNewInventoryItem();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsStabbingAllowed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDismemberAllowed() const;
    
    UFUNCTION(BlueprintPure)
    float GetThrowRating() const;
    
    UFUNCTION(BlueprintPure)
    float GetSharpnessRating() const;
    
    UFUNCTION(BlueprintCallable)
    FText GetSalvageInfo();
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FText GetQualityText(ETWDConsumableQuality Quality) const;
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetQualityLevel() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    int32 GetQualityIndex(ETWDConsumableQuality Quality) const;
    
public:
    UFUNCTION(BlueprintPure)
    FText GetQuality() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxStaminaEffect() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxHealthEffect() const;
    
    UFUNCTION(BlueprintPure)
    FText GetInventoryType() const;
    
    UFUNCTION(BlueprintPure)
    FText GetInventoryName() const;
    
    UFUNCTION(BlueprintPure)
    FText GetInventoryDescription() const;
    
    UFUNCTION(BlueprintPure)
    FText GetInventoryCount() const;
    
    UFUNCTION(BlueprintPure)
    FText GetInventoryCharacteristics() const;
    
    UFUNCTION(BlueprintPure)
    float GetHealthEffect() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FText GetDurabilityText(float Durability) const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetDurabilityRating() const;
    
    UFUNCTION(BlueprintPure)
    float GetDurabilityPercent() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDurabilityLevel() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    int32 GetDurabilityIndex(float Durability) const;
    
public:
    UFUNCTION(BlueprintPure)
    FText GetDurability() const;
    
    UFUNCTION(BlueprintPure)
    FText GetConsumableEffectsText() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void FormatSalvageEntry(const FGuid& IconGuid, const FText& Name, const int32 quantity, bool bTracking, FString& Result);
    
};

