#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "TWDGuardPointLeash.h"
#include "UObject/NoExportTypes.h"
#include "ECharacterReaction.h"
#include "TWDGuardPoint.generated.h"

class ATWDCharacter;

UCLASS()
class TWD_API ATWDGuardPoint : public ATargetPoint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FTWDGuardPointLeash> Leashes;
    
    ATWDGuardPoint();
    UFUNCTION(BlueprintCallable)
    void SetLeashes(TArray<FTWDGuardPointLeash> NewLeashes);
    
    UFUNCTION(BlueprintCallable)
    static bool IsReactionSupportedByGuardPoint(ECharacterReaction Reaction, ATWDCharacter* Character, FName GuardPointKey);
    
    UFUNCTION(BlueprintPure)
    bool IsReactionSupported(ECharacterReaction Reaction) const;
    
    UFUNCTION(BlueprintPure)
    bool IsLocationWithinLeash(FVector Location, ATWDCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable)
    static bool IsLocationWithinGuardPointLeash(FVector Location, ECharacterReaction Reaction, ATWDCharacter* Character, FName GuardPointKey, FName GuardLeashDistanceKey);
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsLocationInLeash(FVector Location, const FTWDGuardPointLeash& Leash, ATWDCharacter* Character) const;
    
public:
    UFUNCTION(BlueprintCallable)
    static bool HasGuardPoint(ECharacterReaction Reaction, ATWDCharacter* Character, FName GuardPointKey);
    
    UFUNCTION(BlueprintPure)
    TArray<FTWDGuardPointLeash> GetLeashes() const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool DoesLeashSupportReaction(const FTWDGuardPointLeash& Leash, ECharacterReaction Reaction) const;
    
};

