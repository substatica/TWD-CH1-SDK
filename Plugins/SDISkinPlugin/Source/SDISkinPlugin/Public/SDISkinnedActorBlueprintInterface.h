#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Interface.h"
#include "SDISkinnedActorBlueprintInterface.generated.h"

class USDISkinObject;

UINTERFACE(Blueprintable)
class SDISKINPLUGIN_API USDISkinnedActorBlueprintInterface : public UInterface {
    GENERATED_BODY()
};

class SDISKINPLUGIN_API ISDISkinnedActorBlueprintInterface : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintNativeEvent)
    void UpdateSkinReplicationData(TSubclassOf<USDISkinObject> NewSkin);
    
    UFUNCTION(BlueprintNativeEvent)
    void PreApplySkin(TSubclassOf<USDISkinObject> NewSkin);
    
    UFUNCTION(BlueprintNativeEvent)
    void PostApplySkin(TSubclassOf<USDISkinObject> AppliedSkin);
    
    UFUNCTION(BlueprintNativeEvent)
    TArray<TSubclassOf<USDISkinObject>> GetPossibleSkins() const;
    
};

