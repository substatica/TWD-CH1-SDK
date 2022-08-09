#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SDIAndroidPermissionHandler.generated.h"

UCLASS()
class SDIVRPLAYERPLUGIN_API USDIAndroidPermissionHandler : public UObject {
    GENERATED_BODY()
public:
    USDIAndroidPermissionHandler();
    UFUNCTION()
    void OnPermissionsRequestReply(const TArray<FString>& Permissions, const TArray<bool>& Granted);
    
};

