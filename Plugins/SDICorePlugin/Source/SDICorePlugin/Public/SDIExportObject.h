#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "SDIExportInterface.h"
#include "SDIExportData.h"
#include "SDIExportObject.generated.h"

UCLASS()
class SDICOREPLUGIN_API USDIExportObject : public UObject, public ISDIExportInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FSDIExportData ExportData;
    
public:
    USDIExportObject();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    FGuid K2GetExportGuid() const override PURE_VIRTUAL(K2GetExportGuid, return FGuid{};);
    
    UFUNCTION(BlueprintCallable)
    FText GetExportText(FName Key) const override PURE_VIRTUAL(GetExportText, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    FText GetExportDisplayName() const override PURE_VIRTUAL(GetExportDisplayName, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    FText GetExportDescription() const override PURE_VIRTUAL(GetExportDescription, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    bool FindExportText(FName Key, FText& OutText) const override PURE_VIRTUAL(FindExportText, return false;);
    
};

