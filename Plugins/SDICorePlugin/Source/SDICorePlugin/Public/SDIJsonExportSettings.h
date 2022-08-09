#pragma once
#include "CoreMinimal.h"
#include "SDIJsonExportSettings.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIJsonExportSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bExportEnumsAsStrings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bExportAssetsAsGuids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bExportSubObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bExportTypeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bExportPreamble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bExportAllProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ExportMetaDataTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bExportBlueprintProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bExportEditableProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bExportTransientProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bExportNonTransientProperties;
    
    FSDIJsonExportSettings();
};

