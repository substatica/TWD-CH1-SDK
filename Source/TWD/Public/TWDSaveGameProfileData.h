#pragma once
#include "CoreMinimal.h"
#include "TWDSaveGameProfileData.generated.h"

class UTWDSaveGame;

USTRUCT(BlueprintType)
struct FTWDSaveGameProfileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTWDSaveGame*> LocalSaveGameCopies;
    
    TWD_API FTWDSaveGameProfileData();
};

