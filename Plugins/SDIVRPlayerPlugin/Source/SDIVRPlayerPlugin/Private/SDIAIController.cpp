#include "SDIAIController.h"
#include "Templates/SubclassOf.h"

class UNavigationQueryFilter;

void ASDIAIController::OnAIMovetoNextDestinationFinished(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result) {
}

TEnumAsByte<EPathFollowingRequestResult::Type> ASDIAIController::MoveToLocationWithCustomAgentProperties(const FVector& Dest, const FNavAgentProperties& AgentPropsToUse, float AcceptanceRadius, bool bStopOnOverlap, bool bProjectDestinationToNavigation, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPath) {
    return EPathFollowingRequestResult::Failed;
}

ASDIAIController::ASDIAIController() {
}

