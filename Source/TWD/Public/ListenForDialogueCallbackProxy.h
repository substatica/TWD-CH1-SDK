#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ListenForDialogueDelegateDelegate.h"
#include "Engine/DataTable.h"
#include "TWDDialogueOption.h"
#include "ListenForDialogueCallbackProxy.generated.h"

class ATWDCharacter;
class UListenForDialogueCallbackProxy;
class UTWDDialogue;

UCLASS(Blueprintable, MinimalAPI)
class UListenForDialogueCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FListenForDialogueDelegate DialogueReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FListenForDialogueDelegate ListenExpired;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> OptionHandles;
    
public:
    UListenForDialogueCallbackProxy();
private:
    UFUNCTION(BlueprintCallable)
    void OnListenExpired();
    
    UFUNCTION(BlueprintCallable)
    void OnDialogueReceived(const FTWDDialogueOption& DialogueOption, ATWDCharacter* Instigator);
    
public:
    UFUNCTION(BlueprintCallable)
    static UListenForDialogueCallbackProxy* CreateProxyObjectForListenForDialogue(int32 NodeId, UTWDDialogue* Dialogue, ATWDCharacter* Character, TArray<FDataTableRowHandle> NewOptionHandles, float Duration);
    
};

