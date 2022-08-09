#pragma once
#include "CoreMinimal.h"
#include "SDIExportInterface.h"
#include "GameFramework/GameMode.h"
#include "SDICoreGameModePlayerLoginDelegateDelegate.h"
#include "SDIExportData.h"
#include "SDICoreGameModePlayerLogoutDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "SDICoreGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class SDICOREPLUGIN_API ASDICoreGameMode : public AGameMode, public ISDIExportInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIExportData ExportData;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICoreGameModePlayerLoginDelegate OnPlayerLoginDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICoreGameModePlayerLogoutDelegate OnPlayerLogoutDelegate;
    
    ASDICoreGameMode();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetServerTimestamp() const;
    
    
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

