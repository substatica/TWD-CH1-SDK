#pragma once
#include "CoreMinimal.h"
#include "ETWDCharacterGrappleLocation.h"
#include "TWDCharacter_GrappleTokenDelegateDelegate.generated.h"

class ATWDCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTWDCharacter_GrappleTokenDelegate, ATWDCharacter*, Character, ETWDCharacterGrappleLocation, Location);

