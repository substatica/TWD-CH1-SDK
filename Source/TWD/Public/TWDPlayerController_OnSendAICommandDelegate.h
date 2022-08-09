#pragma once
#include "CoreMinimal.h"
#include "ETWDAICommand.h"
#include "UObject/NoExportTypes.h"
#include "TWDPlayerController_OnSendAICommandDelegate.generated.h"

class ATWDPlayerController;
class ATWDCharacter;
class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FTWDPlayerController_OnSendAICommand, ATWDPlayerController*, PC, bool, bSuccess, int32, MultiCmdIndex, ATWDCharacter*, Char, ETWDAICommand, Command, const FTransform&, Transform, AActor*, Target);

