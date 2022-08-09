#pragma once
#include "CoreMinimal.h"
#include "SDISkinStitchedStaticMesh.h"
#include "SDIExportObject.h"
#include "SDISkinStitchedSkeletalMesh.h"
#include "SDISkinDynamicData.h"
#include "SDISkinAttachment.h"
#include "SDISkinReplicationData.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "SDISkinObject.generated.h"

class USceneComponent;
class UStaticMeshComponent;
class UObject;
class USkeletalMeshComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable)
class SDISKINPLUGIN_API USDISkinObject : public USDIExportObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCacheSkin;
    
public:
    USDISkinObject();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshComponent* SpawnStitchedStaticMesh(FSDISkinDynamicData& DynamicSkinData, const FSDISkinStitchedStaticMesh& StitchedMesh, USceneComponent* Parent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* SpawnStitchedSkeletalMesh(FSDISkinDynamicData& DynamicSkinData, const FSDISkinStitchedSkeletalMesh& StitchedMesh, USceneComponent* Parent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* SpawnAttachment(FSDISkinDynamicData& DynamicSkinData, const FSDISkinAttachment& Attachment, USceneComponent* Parent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PreApplySkin(USceneComponent* Root, const FSDISkinReplicationData& ReplicatedSkinData, UPARAM(Ref) FSDISkinDynamicData& DynamicSkinData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostApplySkin(USceneComponent* Root, const FSDISkinReplicationData& ReplicatedSkinData, UPARAM(Ref) FSDISkinDynamicData& DynamicSkinData) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStitchedComponentHitRedirector(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
};

