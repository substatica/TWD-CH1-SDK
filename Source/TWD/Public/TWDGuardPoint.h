#pragma once
#include "CoreMinimal.h"
#include "TWDGuardPointLeash.h"
#include "Engine/TargetPoint.h"
#include "ECharacterReaction.h"
#include "UObject/NoExportTypes.h"
#include "TWDGuardPoint.generated.h"

class ATWDCharacter;

UCLASS(Blueprintable)
class TWD_API ATWDGuardPoint : public ATargetPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTWDGuardPointLeash> Leashes;
    
    ATWDGuardPoint();
    UFUNCTION(BlueprintCallable)
    void SetLeashes(TArray<FTWDGuardPointLeash> NewLeashes);
    
    UFUNCTION(BlueprintCallable)
    static bool IsReactionSupportedByGuardPoint(ECharacterReaction Reaction, ATWDCharacter* Character, FName GuardPointKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReactionSupported(ECharacterReaction Reaction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationWithinLeash(FVector Location, ATWDCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable)
    static bool IsLocationWithinGuardPointLeash(FVector Location, ECharacterReaction Reaction, ATWDCharacter* Character, FName GuardPointKey, FName GuardLeashDistanceKey);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationInLeash(FVector Location, const FTWDGuardPointLeash& Leash, ATWDCharacter* Character) const;
    
public:
    UFUNCTION(BlueprintCallable)
    static bool HasGuardPoint(ECharacterReaction Reaction, ATWDCharacter* Character, FName GuardPointKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FTWDGuardPointLeash> GetLeashes() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesLeashSupportReaction(const FTWDGuardPointLeash& Leash, ECharacterReaction Reaction) const;
    
};

