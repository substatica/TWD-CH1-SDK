#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/GameInstance.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "SDICoreGameInstance.generated.h"

class UTexture;
class UObject;
class USDICoreGameInstanceSubObject;

UCLASS(Blueprintable, NonTransient)
class SDICOREPLUGIN_API USDICoreGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftClassPath> SubObjectClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USDICoreGameInstanceSubObject*> SubObjects;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKey, TSoftObjectPtr<UTexture>> InputKeyTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> MissingInputKeyTexture;
    
public:
    USDICoreGameInstance();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USDICoreGameInstanceSubObject* K2GetSubObject(const UObject* WorldContextObject, TSubclassOf<USDICoreGameInstanceSubObject> SubObjectClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture* GetInputKeyTexture(const FKey& Key) const;
    
};

