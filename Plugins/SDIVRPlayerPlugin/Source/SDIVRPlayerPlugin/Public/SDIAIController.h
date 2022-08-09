#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Navigation/PathFollowingComponent.h"
#include "Navigation/PathFollowingComponent.h"
#include "AIController.h"
#include "AI/Navigation/NavigationTypes.h"
#include "AITypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIAIController.generated.h"

class UNavigationQueryFilter;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIAIController : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FNavAgentProperties> NavAgentPropsList;
    
    ASDIAIController();
    UFUNCTION()
    void OnAIMovetoNextDestinationFinished(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPathFollowingRequestResult::Type> MoveToLocationWithCustomAgentProperties(const FVector& Dest, const FNavAgentProperties& AgentPropsToUse, float AcceptanceRadius, bool bStopOnOverlap, bool bProjectDestinationToNavigation, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPath);
    
};

