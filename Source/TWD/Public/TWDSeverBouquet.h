#pragma once
#include "CoreMinimal.h"
#include "TWDSeverBouquetElement.h"
#include "TWDSeverBouquet.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct TWD_API FTWDSeverBouquet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AKEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTWDSeverBouquetElement> Elements;
    
    FTWDSeverBouquet();
};

