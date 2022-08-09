#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SDIReplicatedDamageData.h"
#include "SDIDamageTakenReplicationInterface.generated.h"

UINTERFACE(Blueprintable)
class SDICOREPLUGIN_API USDIDamageTakenReplicationInterface : public UInterface {
    GENERATED_BODY()
};

class SDICOREPLUGIN_API ISDIDamageTakenReplicationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnDamageTaken(const FSDIReplicatedDamageData& DamageTakenData);
    
};

