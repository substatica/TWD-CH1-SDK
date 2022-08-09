#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDISkinnedCharacter.h"
#include "TWDPrologueCharacter.generated.h"

class UTWDCharacterSkin;

UCLASS()
class TWD_API ATWDPrologueCharacter : public ASDISkinnedCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UTWDCharacterSkin> OverrideSkin;
    
public:
    ATWDPrologueCharacter();
};

