#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDISkinAttachment.h"
#include "SDISkinStitchedSkeletalMesh.h"
#include "SDISkinStitchedStaticMesh.h"
#include "SDIMeshMaterialParamMultiMap.h"
#include "Engine/EngineTypes.h"
#include "SDISkinDynamicData.generated.h"

class USDISkinObject;
class UObject;
class USkeletalMeshComponent;
class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDISkinDynamicData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<USDISkinObject> DefaultSkin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAsyncLoadSkin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bMergeSkeletalMeshes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bForcePhysicsStateRecreation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 AsyncLoadPriority;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<UObject*, FSDISkinAttachment> Attachments;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<USkeletalMeshComponent*, FSDISkinStitchedSkeletalMesh> StitchedSkeletalMeshes;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<UStaticMeshComponent*, FSDISkinStitchedStaticMesh> StitchedStaticMeshes;
    
    UPROPERTY(Transient)
    FSDIMeshMaterialParamMultiMap SkinParams;
    
    UPROPERTY(Transient)
    FTimerHandle QueueSkinParamApplyTimerHandle;
    
    UPROPERTY(Transient)
    bool bInitializingSkinReplicationData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bUsingFallbackMesh;
    
    FSDISkinDynamicData();
};

