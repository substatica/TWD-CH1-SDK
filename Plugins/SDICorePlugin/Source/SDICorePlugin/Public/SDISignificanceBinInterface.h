#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SDISignificanceBinInterface.generated.h"

UINTERFACE(Blueprintable)
class SDICOREPLUGIN_API USDISignificanceBinInterface : public UInterface {
    GENERATED_BODY()
};

class SDICOREPLUGIN_API ISDISignificanceBinInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSignificanceBinChanged(int32 OldBin, int32 NewBin);
    
};

