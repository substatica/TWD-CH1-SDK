#pragma once
#include "CoreMinimal.h"
#include "SDICoreUtilityAITargetEntryLocation.h"
#include "GenericTeamAgentInterface.h"
#include "GenericTeamAgentInterface.h"
#include "SDICoreUtilityAITargetEntry.generated.h"

class USDICoreUtilityAI;
class AActor;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICoreUtilityAITargetEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    USDICoreUtilityAI* Owner;
    
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AActor> Target;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Timer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Priority;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FSDICoreUtilityAITargetEntryLocation Location;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FSDICoreUtilityAITargetEntryLocation LastKnownLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FSDICoreUtilityAITargetEntryLocation GroundLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FSDICoreUtilityAITargetEntryLocation LastKnownGroundLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FGenericTeamId TeamID;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TEnumAsByte<ETeamAttitude::Type> AttitudeTowards;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TEnumAsByte<ETeamAttitude::Type> AttitudeFrom;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bTeamAttitudeUpdated;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bForced;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bLocationBased;
    
    FSDICoreUtilityAITargetEntry();
};

