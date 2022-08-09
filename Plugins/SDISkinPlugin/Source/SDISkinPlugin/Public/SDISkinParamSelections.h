#pragma once
#include "CoreMinimal.h"
#include "SDISkinSelection.h"
#include "SDISkinParamSelections.generated.h"

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDISkinParamSelections {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CustomizationStartIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDISkinSelection> ScalarParamSelections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDISkinSelection> ColorParamSelections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDISkinSelection> TextureParamSelections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSDISkinSelection> ParamSetSelections;
    
    FSDISkinParamSelections();
};

