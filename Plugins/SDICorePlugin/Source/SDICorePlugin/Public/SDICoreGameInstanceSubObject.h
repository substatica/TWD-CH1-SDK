#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SDICoreGameInstanceSubObject.generated.h"

class USDICoreGameInstance;

UCLASS(Abstract, Blueprintable)
class SDICOREPLUGIN_API USDICoreGameInstanceSubObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    bool bInitialized;
    
public:
    USDICoreGameInstanceSubObject();
protected:
    UFUNCTION(BlueprintNativeEvent)
    void Shutdown();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInitialized() const;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void Init();
    
public:
    UFUNCTION(BlueprintPure)
    USDICoreGameInstance* GetGameInstance() const;
    
};

