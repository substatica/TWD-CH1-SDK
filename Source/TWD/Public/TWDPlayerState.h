#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerState.h"
#include "EFaction.h"
#include "TWDHubStateInfo.h"
#include "TWDTopic.h"
#include "TWDPlayerStateInfo.h"
#include "EFactionReaction.h"
#include "TWDPlayerState.generated.h"

class UTWDDialogue;
class UTWDTask;

UCLASS(Blueprintable)
class ATWDPlayerState : public APlayerState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTWDTask*> Tasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTWDTopic> Topics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UTWDDialogue>, FString> DialogueBookmarks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FTWDHubStateInfo RepHubState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FTWDPlayerStateInfo RepPlayerState;
    
public:
    ATWDPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetHubStateInfo(const FTWDHubStateInfo& NewHubState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTWDHubStateInfo GetHubStateInfo() const;
    
    UFUNCTION(BlueprintCallable)
    float GetFactionReputation(EFaction Faction);
    
    UFUNCTION(BlueprintCallable)
    EFactionReaction GetFactionReaction(EFaction Faction);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddFactionReputation(EFaction Faction, float Reputation);
    
};

