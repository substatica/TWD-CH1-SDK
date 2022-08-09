#pragma once
#include "CoreMinimal.h"
#include "SDICoreUtilityAITargetEntry.h"
#include "GenericTeamAgentInterface.h"
#include "RFloat.h"
#include "SDICoreUtilityAITargetList.generated.h"

class USDICoreUtilityAI;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICoreUtilityAITargetList {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 LOSChecksPerFrame;
    
    UPROPERTY(EditAnywhere)
    bool bForceTeamAttitudeUpdates;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    USDICoreUtilityAI* Owner;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 LOSCheckIndex;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FGenericTeamId OwnerTeam;
    
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<FSDICoreUtilityAITargetEntry> Targets;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRFloat Distance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRFloat Distance2D;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FRFloat ViewAngleDeg;
    
    FSDICoreUtilityAITargetList();
};

