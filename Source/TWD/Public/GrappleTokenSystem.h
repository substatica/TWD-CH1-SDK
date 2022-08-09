#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "ETWDCharacterGrappleLocation.h"
#include "GrappleTokenSystem.generated.h"

class UGrappleToken;
class UTokenSystem;
class UOuterRingToken;
class ATWDCharacter;
class UFeedingToken;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UGrappleTokenSystem : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UTokenSystem* GrappleTokens;
    
    UPROPERTY(Export)
    UTokenSystem* FeedingTokens;
    
    UPROPERTY(Export)
    UTokenSystem* OuterRingTokens;
    
public:
    UGrappleTokenSystem();
    UFUNCTION(BlueprintCallable)
    void SetNumOuterRingTokens(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SetNumFeedingTokens(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SetMaximumTokensAvailable(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SetMaximumOuterRingTokensAvailable(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SetMaximumFeedingTokensAvailable(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    UOuterRingToken* ReserveOuterRingToken(int32 Index, const ATWDCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    UGrappleToken* ReserveGrappleToken(ETWDCharacterGrappleLocation Location, const ATWDCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    UFeedingToken* ReserveFeedingToken(int32 Index, const ATWDCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseOuterRingToken(int32 Index, const ATWDCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseGrappleToken(ETWDCharacterGrappleLocation Location, const ATWDCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseFeedingToken(int32 Index, const ATWDCharacter* Character);
    
    UFUNCTION(BlueprintPure)
    bool IsTokenValid(ETWDCharacterGrappleLocation Location) const;
    
    UFUNCTION(BlueprintPure)
    bool IsTokenHeldByGrappleCooldown(ETWDCharacterGrappleLocation Location) const;
    
    UFUNCTION(BlueprintPure)
    bool IsTokenAvailable(ETWDCharacterGrappleLocation Location) const;
    
    UFUNCTION(BlueprintPure)
    bool IsOuterRingTokenValid(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    bool IsOuterRingTokenAvailable(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    bool IsFeedingTokenValid(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    bool IsFeedingTokenAvailable(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    ATWDCharacter* GetTokenHolder(ETWDCharacterGrappleLocation Location);
    
    UFUNCTION(BlueprintPure)
    int32 GetOuterRingTokensInUse(TArray<int32>& OutValidOuterRingIndexes) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetOuterRingTokenLocation(int32 Index, float OuterRingMoveLocationOffset) const;
    
    UFUNCTION(BlueprintPure)
    ATWDCharacter* GetOuterRingTokenHolder(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    UOuterRingToken* GetOuterRingToken(int32 Index);
    
    UFUNCTION(BlueprintPure)
    int32 GetNumOuterRingTokensInUse() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumOuterRingTokens() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumGrappleTokensInUse() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumFeedingTokensInUse() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumFeedingTokens() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaximumTokensAvailable() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaximumOuterRingTokensAvailable() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaximumFeedingTokensAvailable() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFeedingTokensInUse(TArray<int32>& OutValidFeedingIndexes) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFeedingTokenLocation(int32 Index, float FeedingMoveLocationOffset) const;
    
    UFUNCTION(BlueprintPure)
    ATWDCharacter* GetFeedingTokenHolder(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    UFeedingToken* GetFeedingToken(int32 Index);
    
    UFUNCTION(BlueprintPure)
    bool DoesCharacterHoldToken(ETWDCharacterGrappleLocation Location, const ATWDCharacter* Character) const;
    
    UFUNCTION(BlueprintPure)
    bool DoesCharacterHoldOuterRingToken(const ATWDCharacter* Character) const;
    
    UFUNCTION(BlueprintPure)
    bool DoesCharacterHoldFeedingToken(const ATWDCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable)
    UGrappleToken* AddGrappleToken(ETWDCharacterGrappleLocation Location);
    
};

