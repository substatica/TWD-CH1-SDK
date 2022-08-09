#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMapTerritoryNodeType.h"
#include "ETWDWorldEventType.h"
#include "TWDWorldEvent.generated.h"

UCLASS(BlueprintType)
class TWD_API UTWDWorldEvent : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EMapTerritoryNodeType MapAssociated;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ETWDWorldEventType EventType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName PlayerStartTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bHasDuration;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxDuration;
    
    UPROPERTY(BlueprintReadOnly)
    int32 CurrentDuration;
    
    UPROPERTY(BlueprintReadOnly)
    bool bPendingNotification;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAutoComplete;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    bool bEventComplete;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAdvancesStory;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> IdentifyingTags;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FName> ProhibitedTags;
    
public:
    UTWDWorldEvent();
    UFUNCTION(BlueprintPure)
    bool IsNightEvent() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetProhibitedTags() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetIdentifyingTags() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckIfPendingCompletion();
    
};

