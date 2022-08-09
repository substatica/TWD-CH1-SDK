#pragma once
#include "CoreMinimal.h"
#include "NetworkManagerLoginFailedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNetworkManagerLoginFailed, const FString&, ErrorMessage, FText, UserfriendlyMessage);

