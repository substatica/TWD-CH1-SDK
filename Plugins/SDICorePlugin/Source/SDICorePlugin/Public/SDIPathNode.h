#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "SDIPathNodeBranch.h"
#include "SDIEnumTypeHandle.h"
#include "EAIBaseGroundMovementSpeedType.h"
#include "SDIPathNode.generated.h"

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDIPathNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Loc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator Rot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSDIPathNodeBranch> Links;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSeqLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CurSeqCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDataTableRowHandle NodeDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSDIEnumTypeHandle AnimationEnumHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAIBaseGroundMovementSpeedType LocomotionSpeed;
    
    FSDIPathNode();
};

