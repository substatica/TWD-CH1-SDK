#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerState.h"
#include "TWDTopic.h"
#include "TWDHubStateInfo.h"
#include "TWDPlayerStateInfo.h"
#include "EFactionReaction.h"
#include "EFaction.h"
#include "TWDPlayerState.generated.h"

class UTWDTask;
class UTWDDialogue;

UCLASS()
class ATWDPlayerState : public APlayerState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UTWDTask*> Tasks;
    
    UPROPERTY(Transient)
    TArray<FTWDTopic> Topics;
    
    UPROPERTY(Transient)
    TMap<TSubclassOf<UTWDDialogue>, FString> DialogueBookmarks;
    
    UPROPERTY(Replicated, Transient)
    FTWDHubStateInfo RepHubState;
    
    UPROPERTY(Replicated, Transient)
    FTWDPlayerStateInfo RepPlayerState;
    
public:
    ATWDPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHubStateInfo(const FTWDHubStateInfo& NewHubState);
    
    UFUNCTION(BlueprintPure)
    FTWDHubStateInfo GetHubStateInfo() const;
    
    UFUNCTION(BlueprintCallable)
    float GetFactionReputation(EFaction Faction);
    
    UFUNCTION(BlueprintCallable)
    EFactionReaction GetFactionReaction(EFaction Faction);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddFactionReputation(EFaction Faction, float Reputation);
    
};

