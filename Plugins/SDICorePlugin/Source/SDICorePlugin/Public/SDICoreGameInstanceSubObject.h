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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
public:
    USDICoreGameInstanceSubObject();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Shutdown();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Init();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USDICoreGameInstance* GetGameInstance() const;
    
};

