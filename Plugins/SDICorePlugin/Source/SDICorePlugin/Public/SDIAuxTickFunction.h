#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SDIAuxTickFunction.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIAuxTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    FSDIAuxTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSDIAuxTickFunction> : public TStructOpsTypeTraitsBase2<FSDIAuxTickFunction>
{
    enum
    {
        WithCopy = false
    };
};