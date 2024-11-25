#pragma once
#include "CoreMinimal.h"
#include "SDISkinParamSelections.h"
#include "SDISkinSelection.h"
#include "SDISkinSkeletalMeshSetSelection.generated.h"

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDISkinSkeletalMeshSetSelection : public FSDISkinSelection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDISkinParamSelections ParamInfo;
    
    FSDISkinSkeletalMeshSetSelection();
};

