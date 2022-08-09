#pragma once
#include "CoreMinimal.h"
#include "SDIExportObject.h"
#include "SDISkinDynamicData.h"
#include "SDISkinStitchedStaticMesh.h"
#include "SDISkinStitchedSkeletalMesh.h"
#include "SDISkinAttachment.h"
#include "SDISkinReplicationData.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "SDISkinObject.generated.h"

class UStaticMeshComponent;
class USceneComponent;
class USkeletalMeshComponent;
class UObject;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable)
class SDISKINPLUGIN_API USDISkinObject : public USDIExportObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bCacheSkin;
    
public:
    USDISkinObject();
    UFUNCTION(BlueprintPure)
    UStaticMeshComponent* SpawnStitchedStaticMesh(FSDISkinDynamicData& DynamicSkinData, const FSDISkinStitchedStaticMesh& StitchedMesh, USceneComponent* Parent) const;
    
    UFUNCTION(BlueprintPure)
    USkeletalMeshComponent* SpawnStitchedSkeletalMesh(FSDISkinDynamicData& DynamicSkinData, const FSDISkinStitchedSkeletalMesh& StitchedMesh, USceneComponent* Parent) const;
    
    UFUNCTION(BlueprintPure)
    UObject* SpawnAttachment(FSDISkinDynamicData& DynamicSkinData, const FSDISkinAttachment& Attachment, USceneComponent* Parent) const;
    
    UFUNCTION(BlueprintNativeEvent)
    void PreApplySkin(USceneComponent* Root, const FSDISkinReplicationData& ReplicatedSkinData, UPARAM(Ref) FSDISkinDynamicData& DynamicSkinData) const;
    
    UFUNCTION(BlueprintNativeEvent)
    void PostApplySkin(USceneComponent* Root, const FSDISkinReplicationData& ReplicatedSkinData, UPARAM(Ref) FSDISkinDynamicData& DynamicSkinData) const;
    
protected:
    UFUNCTION()
    void OnStitchedComponentHitRedirector(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
};

