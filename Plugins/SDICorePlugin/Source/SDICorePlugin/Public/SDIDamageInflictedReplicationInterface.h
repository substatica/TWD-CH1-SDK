#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SDIReplicatedDamageData.h"
#include "SDIDamageInflictedReplicationInterface.generated.h"

UINTERFACE(Blueprintable)
class SDICOREPLUGIN_API USDIDamageInflictedReplicationInterface : public UInterface {
    GENERATED_BODY()
};

class SDICOREPLUGIN_API ISDIDamageInflictedReplicationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnDamageInflicted(const FSDIReplicatedDamageData& DamageInflictedData);
    
};

