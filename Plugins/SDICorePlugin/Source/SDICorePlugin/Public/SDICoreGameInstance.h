#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/GameInstance.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "SDICoreGameInstance.generated.h"

class USDICoreGameInstanceSubObject;
class UTexture;
class UObject;

UCLASS(NonTransient)
class SDICOREPLUGIN_API USDICoreGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config)
    TArray<FSoftClassPath> SubObjectClasses;
    
    UPROPERTY(Transient)
    bool bInitialized;
    
    UPROPERTY(Transient)
    TArray<USDICoreGameInstanceSubObject*> SubObjects;
    
protected:
    UPROPERTY(EditAnywhere)
    TMap<FKey, TSoftObjectPtr<UTexture>> InputKeyTextures;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture> MissingInputKeyTexture;
    
public:
    USDICoreGameInstance();
    UFUNCTION(BlueprintPure)
    static USDICoreGameInstanceSubObject* K2GetSubObject(const UObject* WorldContextObject, TSubclassOf<USDICoreGameInstanceSubObject> SubObjectClass);
    
    UFUNCTION(BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintPure)
    UTexture* GetInputKeyTexture(const FKey& Key) const;
    
};

