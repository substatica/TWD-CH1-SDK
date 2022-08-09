#pragma once
#include "CoreMinimal.h"
#include "SDISkinBasic.h"
#include "SDISkinRandom.generated.h"

class USDISkinObject;

UCLASS(Blueprintable)
class SDISKINPLUGIN_API USDISkinRandom : public USDISkinBasic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<USDISkinObject>> Skins;
    
    USDISkinRandom();
};

