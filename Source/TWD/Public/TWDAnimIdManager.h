#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "TWDAnimGroup.h"
#include "TWDAnimIdManager.generated.h"

UCLASS(BlueprintType)
class TWD_API UTWDAnimIdManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TMap<FName, FTWDAnimGroup> GroupList;
    
public:
    UTWDAnimIdManager();
    UFUNCTION(BlueprintCallable)
    void RegisterAnimGroup(FName Name, int32 ReservedMaxSize, int32 MaxAnims, float SpotSize, int32 HashMult, int32 MaxLRUSize);
    
    UFUNCTION(BlueprintCallable)
    int32 GetRandomAnimId(FName Name, const FVector& Location);
    
};

