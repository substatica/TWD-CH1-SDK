#pragma once
#include "CoreMinimal.h"
#include "NetworkManagerLoginFailedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNetworkManagerLoginFailed, const FString&, ErrorMessage, FText, UserfriendlyMessage);

