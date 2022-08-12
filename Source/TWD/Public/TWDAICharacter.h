#pragma once
#include "CoreMinimal.h"
#include "EStatusIconState.h"
#include "TWDCharacter.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ETWDCharacterAIAnimationTypes.h"
#include "GameplayTagContainer.h"
#include "TWDAIReactionStateData.h"
#include "Curves/CurveFloat.h"
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

UCLASS(Blueprintable)
class TWD_API ATWDAICharacter : public ATWDCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFullyAwareOfPlayerUntilSeen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasSeenPlayer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* DebugInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMaterialBillboardComponent* ThreatMeterIconComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatusIconState StatusIconState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* ThreatMeterIconMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* DialogueIconMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThreatMeterFadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThreatMeterAttackHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThreatMeterIconScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ThreatMeterIconOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ThreatMeterColorLow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ThreatMeterColorHigh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ThreatMeterColorAlert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FearMeterColorLow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FearMeterColorHigh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FearMeterColorPanic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bThreatMeterEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETWDCharacterAIAnimationTypes, UAnimSequence*> AnimationSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentTargetKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SuspicionStateKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> UROVisibleDistanceFactors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVolume*> StimIgnoreVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVolume*> StimAllowVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDebugShowSignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDebugShowLOD;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AliveAvoidanceGroupMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DeadAvoidanceGroupMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASDIPath* PathObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PathTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentPathId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PreviousPathID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTWDAIReactionStateData> ReactionStateDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseHitProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitAccuracyMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve HitAccuracyScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysSignificant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeverSignificant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MenaceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsInGrappleProcess: 1;
    
    ATWDAICharacter();
    UFUNCTION(BlueprintCallable)
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
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAggroDebugTextSize(float Size);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAggroDebugTextEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAggroDebugTextColor(FColor Color);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAggroDebugText(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllPathTags();
    
    UFUNCTION(BlueprintCallable)
    void RegisterMenace();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPauseAI(bool bPause);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStimLocationAllowed(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationInStimIgnoreVolume(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationInStimAllowVolume(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenLongSinceLastSeenByPlayer(float ThresholdSeconds) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AVolume*> GetStimIgnoreVolumes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AVolume*> GetStimAllowVolumes() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FTWDAIReactionStateData> GetReactionStateDataList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetAnimSequence(const ETWDCharacterAIAnimationTypes AnimType, bool& ResultFound) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugShowAggravation(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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

