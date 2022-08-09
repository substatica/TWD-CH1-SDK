#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "TWDCharacter.h"
#include "UObject/NoExportTypes.h"
#include "EStatusIconState.h"
#include "UObject/NoExportTypes.h"
#include "ETWDCharacterAIAnimationTypes.h"
#include "GameplayTagContainer.h"
#include "TWDAIReactionStateData.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ETWDCharacterHitDirection.h"
#include "GameplayTagContainer.h"
#include "TWDAICharacter.generated.h"

class UAIPerceptionStimuliSourceComponent;
class UTextRenderComponent;
class UAnimSequence;
class UMaterialBillboardComponent;
class UMaterialInstance;
class AVolume;
class ASDIPath;

UCLASS()
class TWD_API ATWDAICharacter : public ATWDCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFullyAwareOfPlayerUntilSeen;
    
    UPROPERTY(Transient)
    bool bHasSeenPlayer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UTextRenderComponent* DebugInfo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource;
    
    UPROPERTY(Export)
    UMaterialBillboardComponent* ThreatMeterIconComponent;
    
    UPROPERTY()
    EStatusIconState StatusIconState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInstance* ThreatMeterIconMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInstance* DialogueIconMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ThreatMeterFadeTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ThreatMeterAttackHoldTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ThreatMeterIconScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector ThreatMeterIconOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ThreatMeterColorLow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ThreatMeterColorHigh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ThreatMeterColorAlert;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor FearMeterColorLow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor FearMeterColorHigh;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor FearMeterColorPanic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bThreatMeterEnabled;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TMap<ETWDCharacterAIAnimationTypes, UAnimSequence*> AnimationSequences;
    
    UPROPERTY(EditDefaultsOnly)
    FName CurrentTargetKeyName;
    
    UPROPERTY(EditDefaultsOnly)
    FName SuspicionStateKeyName;
    
    UPROPERTY(EditAnywhere)
    TArray<float> UROVisibleDistanceFactors;
    
    UPROPERTY(EditAnywhere)
    TArray<AVolume*> StimIgnoreVolumes;
    
    UPROPERTY(EditAnywhere)
    TArray<AVolume*> StimAllowVolumes;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bDebugShowSignificance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bDebugShowLOD;
    
public:
    UPROPERTY(Transient)
    int32 AliveAvoidanceGroupMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DeadAvoidanceGroupMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ASDIPath* PathObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer PathTags;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 CurrentPathId;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    int32 PreviousPathID;
    
    UPROPERTY(EditAnywhere)
    TArray<FTWDAIReactionStateData> ReactionStateDataList;
    
    UPROPERTY(EditDefaultsOnly)
    float BaseHitProbability;
    
    UPROPERTY(EditAnywhere)
    float HitAccuracyMultiplier;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve HitAccuracyScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAlwaysSignificant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bNeverSignificant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MenaceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
    uint8 bIsInGrappleProcess: 1;
    
    ATWDAICharacter();
    UFUNCTION()
    void UpdateThreatMeter(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterMenace();
    
    UFUNCTION(BlueprintCallable)
    void SetStimIgnoreVolumes(TArray<AVolume*> Volumes);
    
    UFUNCTION(BlueprintCallable)
    void SetStimAllowVolumes(TArray<AVolume*> Volumes);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugTextEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugTextColor(FColor Color);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugText(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAggroDebugTextSize(float Size);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAggroDebugTextEnable(bool bEnable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAggroDebugTextColor(FColor Color);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetAggroDebugText(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllPathTags();
    
    UFUNCTION(BlueprintCallable)
    void RegisterMenace();
    
protected:
    UFUNCTION()
    void OnPauseAI(bool bPause);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsStimLocationAllowed(const FVector& Location) const;
    
    UFUNCTION(BlueprintPure)
    bool IsLocationInStimIgnoreVolume(const FVector& Location) const;
    
    UFUNCTION(BlueprintPure)
    bool IsLocationInStimAllowVolume(const FVector& Location) const;
    
    UFUNCTION(BlueprintPure)
    bool HasBeenLongSinceLastSeenByPlayer(float ThresholdSeconds) const;
    
    UFUNCTION(BlueprintPure)
    TArray<AVolume*> GetStimIgnoreVolumes() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AVolume*> GetStimAllowVolumes() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FTWDAIReactionStateData> GetReactionStateDataList();
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetAnimSequence(const ETWDCharacterAIAnimationTypes AnimType, bool& ResultFound) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void DebugShowAggravation(bool bShow);
    
    UFUNCTION(BlueprintPure)
    static void ComputeDirection(const FVector& Forward, const FVector& Right, const FVector& DirectionWorldSpace, FRotator& OutForwardRotator, ETWDCharacterHitDirection& OutHitDirection);
    
    UFUNCTION(BlueprintCallable)
    void ClearStimVolumes();
    
    UFUNCTION(BlueprintCallable)
    void ClearStimIgnoreVolumes();
    
    UFUNCTION(BlueprintCallable)
    void ClearStimAllowVolumes();
    
    UFUNCTION(BlueprintCallable)
    void AddPathTag(const FGameplayTag& PathTag);
    
};

