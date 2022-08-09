#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "SDIExportInterface.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class SDICOREPLUGIN_API USDIExportInterface : public UInterface {
    GENERATED_BODY()
};

class SDICOREPLUGIN_API ISDIExportInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual FGuid K2GetExportGuid() const PURE_VIRTUAL(K2GetExportGuid, return FGuid{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FText GetExportText(FName Key) const PURE_VIRTUAL(GetExportText, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    virtual FText GetExportDisplayName() const PURE_VIRTUAL(GetExportDisplayName, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    virtual FText GetExportDescription() const PURE_VIRTUAL(GetExportDescription, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    virtual bool FindExportText(FName Key, FText& OutText) const PURE_VIRTUAL(FindExportText, return false;);
    
};

