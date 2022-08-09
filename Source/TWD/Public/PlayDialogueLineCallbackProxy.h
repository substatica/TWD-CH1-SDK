#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "PlayDialogueLineDelegateDelegate.h"
#include "DialogueLine.h"
#include "EDialogueOverlapHandlingMethod.h"
#include "PlayDialogueLineCallbackProxy.generated.h"

class ATWDCharacter;
class UTWDDialogue;
class UPlayDialogueLineCallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class UPlayDialogueLineCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayDialogueLineDelegate LineCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayDialogueLineDelegate LineSkipped;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DialogueLineHandle;
    
public:
    UPlayDialogueLineCallbackProxy();
private:
    UFUNCTION(BlueprintCallable)
    void OnDialogueLineSkipped();
    
    UFUNCTION(BlueprintCallable)
    void OnDialogueLineFinished(const FDialogueLine& DialogueLine, bool bCompleted);
    
public:
    UFUNCTION(BlueprintCallable)
    static UPlayDialogueLineCallbackProxy* CreateProxyObjectForPlayDialogueLine(UTWDDialogue* Dialogue, ATWDCharacter* Character, FDataTableRowHandle NewDialogueLineHandle, EDialogueOverlapHandlingMethod OverlapHandlingMethod);
    
};

