#pragma once
#include "CoreMinimal.h"
#include "SDICoreCharacterADSChangedSignatureDelegate.generated.h"

class ASDICoreCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSDICoreCharacterADSChangedSignature, ASDICoreCharacter*, Character, bool, bIsADS);

