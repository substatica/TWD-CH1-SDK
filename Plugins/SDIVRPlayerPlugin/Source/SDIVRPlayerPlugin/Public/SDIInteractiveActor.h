#pragma once
#include "CoreMinimal.h"
#include "SDIStimAndResponseActor.h"
#include "UObject/NoExportTypes.h"
#include "SDIInteractiveActorInterface.h"
#include "SDIExportInterface.h"
#include "SDIExportData.h"
#include "SDIInteractiveActorData.h"
#include "SDIInteractiveActor.generated.h"

class UTexture2D;

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDIInteractiveActor : public ASDIStimAndResponseActor, public ISDIInteractiveActorInterface, public ISDIExportInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FSDIExportData ExportData;
    
    UPROPERTY(EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(EditAnywhere)
    FText Description;
    
    UPROPERTY(EditAnywhere)
    FText FlavorText;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture2D> UIIcon;
    
    UPROPERTY(EditAnywhere)
    FSDIInteractiveActorData InteractiveActorData;
    
public:
    ASDIInteractiveActor();
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UTexture2D* GetUIIcon() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FText GetFlavorText() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FText GetDisplayName() const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FText GetDescription() const;
    
    
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

