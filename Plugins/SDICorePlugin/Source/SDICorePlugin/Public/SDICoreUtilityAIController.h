#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIController.h"
#include "ESDIUtilityAIDifficulty.h"
#include "SDICoreUtilityAIController.generated.h"

class UBlackboardComponent;
class USDICoreUtilityAI;
class UBehaviorTree;
class ACharacter;

UCLASS(Blueprintable)
class SDICOREPLUGIN_API ASDICoreUtilityAIController : public AAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USDICoreUtilityAI> UtilityAIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUtilityAIEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESDIUtilityAIDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<USDICoreUtilityAI> LastCharacterUtilityAIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USDICoreUtilityAI* UtilityAI;
    
public:
    ASDICoreUtilityAIController();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool UtilityAIEnabled() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateUtilityAI();
    
public:
    UFUNCTION(BlueprintCallable)
    bool StopBehaviorTree(UBehaviorTree* BTAsset);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetUtilityAIEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetDifficulty(ESDIUtilityAIDifficulty NewDifficulty);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAIName(const FString& AIName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsUsingUtilityAI() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    USDICoreUtilityAI* GetUtilityAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetServerTimestamp() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    ESDIUtilityAIDifficulty GetDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetChar() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    UBlackboardComponent* GetBlackboard() const;
    
};

