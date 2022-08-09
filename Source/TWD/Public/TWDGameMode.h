#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDICoreGameMode.h"
#include "PauseAIDelegateDelegate.h"
#include "TWDQueuedExplosion.h"
#include "TWDFactionInfo.h"
#include "Engine/EngineTypes.h"
#include "TWDQueuedRagdoll.h"
#include "EFaction.h"
#include "TWDQueuedExplosionDelegateDelegate.h"
#include "TWDGameMode.generated.h"

class APawn;
class ATWDGameDirector;
class UTWDAIManager;
class UTWDAnimIdManager;
class ATWDAIController;
class UBehaviorTree;
class AController;
class ATWDCharacter;
class UDamageType;
class AActor;

UCLASS(Blueprintable, NonTransient)
class TWD_API ATWDGameMode : public ASDICoreGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APawn> DefaultNonVRPawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName MatchSubState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle QueuedExplosionTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTWDQueuedExplosion> QueuedExplosions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bProcessingQueuedExplosions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTWDQueuedRagdoll> QueuedRagdolls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle QueuedRagdollTimerHandle;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPauseAIDelegate PauseAIDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTWDAIManager> AIManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSleepingAISystem;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATWDGameDirector> GameDirectorBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFaction, FTWDFactionInfo> FactionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNotebookEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATWDGameDirector* GameDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTWDAIManager* AIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTWDAnimIdManager* AnimIdManager;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBehaviorTree*> PreloadBehaviorTree;
    
    ATWDGameMode();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartBells();
    
    UFUNCTION(BlueprintCallable)
    void SetMatchSubState(FName NewState);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveQueuedExplosion(const FTWDQueuedExplosionDelegate& ExplosionDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void QueueExplosion(AController* EventInstigator, const FTWDQueuedExplosionDelegate& ExplosionDelegate);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ProcessQueuedRagdolls();
    
    UFUNCTION(BlueprintCallable)
    void ProcessQueuedExplosions();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMatchSubStateSet();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCharacterDeath(ATWDCharacter* Character, float PrevHealth, TSubclassOf<UDamageType> DamageTypeClass, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotebookEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsExplosionQueued(const FTWDQueuedExplosionDelegate& ExplosionDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeAIByGameMode(ATWDAIController* AIController);
    
    UFUNCTION(BlueprintCallable)
    UTWDAnimIdManager* GetAnimIdManager();
    
    UFUNCTION(BlueprintCallable)
    UTWDAIManager* GetAIManager();
    
};

