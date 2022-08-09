#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "SDIAimAssistTargetInterface.generated.h"

class ASDICorePlayerController;

UINTERFACE(Blueprintable)
class SDICOREPLUGIN_API USDIAimAssistTargetInterface : public UInterface {
    GENERATED_BODY()
};

class SDICOREPLUGIN_API ISDIAimAssistTargetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAimAssistEnabled(const ASDICorePlayerController* PC, const FVector& ViewLocation, const FRotator& ViewRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetAimAssistTargetInfo(const ASDICorePlayerController* PC, const FVector& ViewLocation, const FRotator& ViewRotation, const FVector& CapsuleStart, const FVector& CapsuleEnd, float StartRadius, float EndRadius, FVector& OutLocation) const;
    
};

