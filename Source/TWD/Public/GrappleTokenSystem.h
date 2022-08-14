#pragma once
#include "CoreMinimal.h"
#include "ETWDCharacterGrappleLocation.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "GrappleTokenSystem.generated.h"

class ATWDCharacter;
class UTokenSystem;
class UOuterRingToken;
class UGrappleToken;
class UFeedingToken;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UGrappleTokenSystem : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTokenSystem* GrappleTokens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTokenSystem* FeedingTokens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTokenValid(ETWDCharacterGrappleLocation Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTokenHeldByGrappleCooldown(ETWDCharacterGrappleLocation Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTokenAvailable(ETWDCharacterGrappleLocation Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOuterRingTokenValid(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOuterRingTokenAvailable(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFeedingTokenValid(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFeedingTokenAvailable(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    ATWDCharacter* GetTokenHolder(ETWDCharacterGrappleLocation Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOuterRingTokensInUse(TArray<int32>& OutValidOuterRingIndexes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetOuterRingTokenLocation(int32 Index, float OuterRingMoveLocationOffset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDCharacter* GetOuterRingTokenHolder(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    UOuterRingToken* GetOuterRingToken(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumOuterRingTokensInUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumOuterRingTokens() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumGrappleTokensInUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumFeedingTokensInUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumFeedingTokens() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaximumTokensAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaximumOuterRingTokensAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaximumFeedingTokensAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFeedingTokensInUse(TArray<int32>& OutValidFeedingIndexes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFeedingTokenLocation(int32 Index, float FeedingMoveLocationOffset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDCharacter* GetFeedingTokenHolder(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    UFeedingToken* GetFeedingToken(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesCharacterHoldToken(ETWDCharacterGrappleLocation Location, const ATWDCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesCharacterHoldOuterRingToken(const ATWDCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesCharacterHoldFeedingToken(const ATWDCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable)
    UGrappleToken* AddGrappleToken(ETWDCharacterGrappleLocation Location);
    
};

