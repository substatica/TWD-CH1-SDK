#pragma once
#include "CoreMinimal.h"
#include "SDICachedCollisionInfoEntry.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICachedCollisionInfoEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> BodyNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsSkeletalMeshComponent;
    
    FSDICachedCollisionInfoEntry();
};

