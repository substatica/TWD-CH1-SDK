#pragma once
#include "CoreMinimal.h"
#include "SDIExportText.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIExportText {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleDefaultsOnly)
    bool bIsEmpty;
    
    UPROPERTY(VisibleDefaultsOnly)
    bool bFromTable;
    
    UPROPERTY(VisibleDefaultsOnly)
    FName TableId;
    
    UPROPERTY(VisibleDefaultsOnly)
    FString Namespace;
    
    UPROPERTY(VisibleDefaultsOnly)
    FString Key;
    
    UPROPERTY(VisibleDefaultsOnly)
    FString SourceString;
    
    FSDIExportText();
};

