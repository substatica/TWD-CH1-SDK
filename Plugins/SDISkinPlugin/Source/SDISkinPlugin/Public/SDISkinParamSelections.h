#pragma once
#include "CoreMinimal.h"
#include "SDISkinSelection.h"
#include "SDISkinParamSelections.generated.h"

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDISkinParamSelections {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 CustomizationStartIndex;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Count;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FSDISkinSelection> ScalarParamSelections;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FSDISkinSelection> ColorParamSelections;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FSDISkinSelection> TextureParamSelections;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<FName, FSDISkinSelection> ParamSetSelections;
    
    FSDISkinParamSelections();
};

