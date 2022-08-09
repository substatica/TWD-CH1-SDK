#pragma once
#include "CoreMinimal.h"
#include "SDISkinBasic.h"
#include "SDISkinRandom.generated.h"

class USDISkinObject;

UCLASS()
class SDISKINPLUGIN_API USDISkinRandom : public USDISkinBasic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSoftClassPtr<USDISkinObject>> Skins;
    
    USDISkinRandom();
};

