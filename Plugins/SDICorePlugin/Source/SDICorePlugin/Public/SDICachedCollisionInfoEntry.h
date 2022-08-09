#pragma once
#include "CoreMinimal.h"
#include "SDICachedCollisionInfoEntry.generated.h"

USTRUCT()
struct SDICOREPLUGIN_API FSDICachedCollisionInfoEntry {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FName> BodyNames;
    
    UPROPERTY(Transient)
    bool bIsSkeletalMeshComponent;
    
    FSDICachedCollisionInfoEntry();
};

