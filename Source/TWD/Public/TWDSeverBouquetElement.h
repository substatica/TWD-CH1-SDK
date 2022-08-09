#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "RInt.h"
#include "ESDIAxis.h"
#include "RVector.h"
#include "RFloat.h"
#include "ESeverBouquetAttachActor.h"
#include "TWDSeverBouquetElement.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct TWD_API FTWDSeverBouquetElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseBoneSpacePrimarySeverAxis;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESDIAxis BoneSpacePrimarySeverAxis;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRInt SpawnCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRVector SpawnLocationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRFloat SpawnLocationMaxBoneAxisOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRVector SpawnAngleOffsets;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAlignToSeverDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAnchored;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AnchorBoneName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnablePhysics;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRFloat SpawnImpulse;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseAttachActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESeverBouquetAttachActor AttachActor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName AttachBoneName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDeferUntilSplayComplete;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowDebugInfo;
    
    FTWDSeverBouquetElement();
};

