#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameSession.h"
#include "SDICoreGameSession.generated.h"

UCLASS(Blueprintable)
class SDICOREPLUGIN_API ASDICoreGameSession : public AGameSession {
    GENERATED_BODY()
public:
    ASDICoreGameSession();
};

