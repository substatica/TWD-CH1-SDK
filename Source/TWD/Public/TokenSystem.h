#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TokenSystem.generated.h"

class ATWDCharacter;
class UToken;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UTokenSystem : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaximumTokensAvailable;
    
protected:
    UPROPERTY(Export, Transient)
    TArray<UToken*> Tokens;
    
public:
    UTokenSystem();
    UFUNCTION(BlueprintCallable)
    void SetTokenNum(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SetTokenAtIndex(int32 Index, UToken* Token);
    
    UFUNCTION(BlueprintCallable)
    UToken* ReserveTokenAtIndex(int32 Index, const ATWDCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseTokenAtIndex(int32 Index, const ATWDCharacter* Character);
    
    UFUNCTION(BlueprintPure)
    bool IsTokenValidAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    bool IsTokenAvailableAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTokensInUseCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTokenNum() const;
    
    UFUNCTION(BlueprintPure)
    ATWDCharacter* GetTokenHolderAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    UToken* GetTokenAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    bool DoesCharacterHoldTokenAtIndex(int32 Index, const ATWDCharacter* Character) const;
    
};

