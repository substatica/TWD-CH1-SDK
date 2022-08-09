#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMapTerritoryNodeType.h"
#include "ETWDWorldEventType.h"
#include "TWDWorldEvent.generated.h"

UCLASS(Blueprintable)
class TWD_API UTWDWorldEvent : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapTerritoryNodeType MapAssociated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETWDWorldEventType EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerStartTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPendingNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEventComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdvancesStory;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IdentifyingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ProhibitedTags;
    
public:
    UTWDWorldEvent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNightEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetProhibitedTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetIdentifyingTags() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckIfPendingCompletion();
    
};

