#pragma once
#include "CoreMinimal.h"
#include "TWDSeverBouquetElement.h"
#include "TWDSeverBouquet.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct TWD_API FTWDSeverBouquet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* AKEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FTWDSeverBouquetElement> Elements;
    
    FTWDSeverBouquet();
};

