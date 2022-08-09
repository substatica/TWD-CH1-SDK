#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataTable.h"
#include "SpawnClassLimit.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSpawnClassLimit : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SpawnLimit;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bIncludeDeadCharacters;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bIncludeNonRunningLogicCharacters;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AActor>> SpawnedActors;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AActor>> ValidActors;
    
    TWD_API FSpawnClassLimit();
};

