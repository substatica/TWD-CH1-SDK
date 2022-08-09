#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TokenSystem.generated.h"

class ATWDCharacter;
class UToken;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UTokenSystem : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumTokensAvailable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTokenValidAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTokenAvailableAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTokensInUseCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTokenNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATWDCharacter* GetTokenHolderAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UToken* GetTokenAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesCharacterHoldTokenAtIndex(int32 Index, const ATWDCharacter* Character) const;
    
};

