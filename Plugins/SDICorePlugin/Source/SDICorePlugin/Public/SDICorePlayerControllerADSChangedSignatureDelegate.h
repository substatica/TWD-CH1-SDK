#pragma once
#include "CoreMinimal.h"
#include "SDICorePlayerControllerADSChangedSignatureDelegate.generated.h"

class ASDICorePlayerController;
class ASDICoreCharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSDICorePlayerControllerADSChangedSignature, ASDICorePlayerController*, PC, ASDICoreCharacter*, Character, bool, bIsADS);

