#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SDIAssetLookupTable_GuidArray.h"
#include "SDIExportText.h"
#include "SDIAssetLookupTable.generated.h"

class UObject;
class UTexture2D;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIAssetLookupTable {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleDefaultsOnly)
    FString Name;
    
    UPROPERTY(VisibleDefaultsOnly)
    TSoftClassPtr<UObject> Class;
    
protected:
    UPROPERTY(VisibleDefaultsOnly)
    TSoftObjectPtr<UObject> Asset;
    
    UPROPERTY(VisibleDefaultsOnly)
    FString AssetPath;
    
public:
    UPROPERTY(VisibleDefaultsOnly)
    FGuid ParentGuid;
    
    UPROPERTY(VisibleDefaultsOnly)
    bool bDeveloperAsset;
    
    UPROPERTY(VisibleDefaultsOnly)
    TMap<FName, FSDIAssetLookupTable_GuidArray> GuidReferences;
    
    UPROPERTY(VisibleDefaultsOnly)
    TMap<FName, FSDIExportText> Text;
    
    UPROPERTY(Transient)
    TMap<FName, FText> ResolvedText;
    
    UPROPERTY(VisibleDefaultsOnly)
    TMap<FName, TSoftObjectPtr<UTexture2D>> Images;
    
    UPROPERTY(VisibleDefaultsOnly)
    TMap<FName, float> Numbers;
    
    FSDIAssetLookupTable();
};

