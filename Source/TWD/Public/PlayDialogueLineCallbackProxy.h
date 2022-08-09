#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PlayDialogueLineDelegateDelegate.h"
#include "Engine/DataTable.h"
#include "DialogueLine.h"
#include "EDialogueOverlapHandlingMethod.h"
#include "PlayDialogueLineCallbackProxy.generated.h"

class ATWDCharacter;
class UTWDDialogue;
class UPlayDialogueLineCallbackProxy;

UCLASS(BlueprintType, MinimalAPI)
class UPlayDialogueLineCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPlayDialogueLineDelegate LineCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FPlayDialogueLineDelegate LineSkipped;
    
private:
    UPROPERTY(Transient)
    FDataTableRowHandle DialogueLineHandle;
    
public:
    UPlayDialogueLineCallbackProxy();
private:
    UFUNCTION()
    void OnDialogueLineSkipped();
    
    UFUNCTION()
    void OnDialogueLineFinished(const FDialogueLine& DialogueLine, bool bCompleted);
    
public:
    UFUNCTION(BlueprintCallable)
    static UPlayDialogueLineCallbackProxy* CreateProxyObjectForPlayDialogueLine(UTWDDialogue* Dialogue, ATWDCharacter* Character, FDataTableRowHandle NewDialogueLineHandle, EDialogueOverlapHandlingMethod OverlapHandlingMethod);
    
};

