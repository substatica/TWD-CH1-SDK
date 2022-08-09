#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Interface.h"
#include "Components/PrimitiveComponent.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDISkinnedActorInterface.generated.h"

class UObject;
class UTexture;
class UPrimitiveComponent;
class UMaterialInterface;
class USDISkinObject;
class AActor;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class SDISKINPLUGIN_API USDISkinnedActorInterface : public UInterface {
    GENERATED_BODY()
};

class SDISKINPLUGIN_API ISDISkinnedActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual bool SwapSkinTextureParam(UObject* ParamOwner, int32 inIndex, FName InParam, UTexture* OldValue, UTexture* NewValue) PURE_VIRTUAL(SwapSkinTextureParam, return false;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual bool SwapSkinMaterialParam(UObject* ParamOwner, int32 inIndex, FName InParam, UMaterialInterface* OldValue, UMaterialInterface* NewValue) PURE_VIRTUAL(SwapSkinMaterialParam, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void SkinSetComponentIgnorances(const TArray<UPrimitiveComponent*>& OtherComps) PURE_VIRTUAL(SkinSetComponentIgnorances,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SkinSetComponentIgnorance(UPrimitiveComponent* OtherComp) PURE_VIRTUAL(SkinSetComponentIgnorance,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SkinIgnoreChannelUntilClear(TEnumAsByte<ECollisionChannel> Channel) PURE_VIRTUAL(SkinIgnoreChannelUntilClear,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SkinClearComponentIgnorances(const TArray<UPrimitiveComponent*>& OtherComps, bool bWaitForClearance) PURE_VIRTUAL(SkinClearComponentIgnorances,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SkinClearComponentIgnorance(UPrimitiveComponent* OtherComp, bool bWaitForClearance) PURE_VIRTUAL(SkinClearComponentIgnorance,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SkinClearAllComponentIgnorances(bool bWaitForClearance) PURE_VIRTUAL(SkinClearAllComponentIgnorances,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SkinCancelWaitForClearance(TEnumAsByte<ECollisionChannel> Channel) PURE_VIRTUAL(SkinCancelWaitForClearance,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void SetSkinVectorParam(UObject* ParamOwner, int32 inIndex, FName InParam, FVector InValue) PURE_VIRTUAL(SetSkinVectorParam,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void SetSkinTextureParam(UObject* ParamOwner, int32 inIndex, FName InParam, UTexture* InValue) PURE_VIRTUAL(SetSkinTextureParam,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void SetSkinScalarParam(UObject* ParamOwner, int32 inIndex, FName InParam, float InValue) PURE_VIRTUAL(SetSkinScalarParam,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void SetSkinRenderCustomDepth(bool bRenderCustomDepth) PURE_VIRTUAL(SetSkinRenderCustomDepth,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void SetSkinOwnerNoSee(bool bOwnerNoSee) PURE_VIRTUAL(SetSkinOwnerNoSee,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void SetSkinOnlyOwnerSee(bool bOnlyOwnerSee) PURE_VIRTUAL(SetSkinOnlyOwnerSee,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void SetSkinMaterialParam(UObject* ParamOwner, int32 inIndex, FName InParam, UMaterialInterface* InValue) PURE_VIRTUAL(SetSkinMaterialParam,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void SetSkinHiddenInGame(bool bHidden) PURE_VIRTUAL(SetSkinHiddenInGame,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void SetSkinCustomDepthStencilWriteMask(ERendererStencilMask CustomDepthStencilWriteMask) PURE_VIRTUAL(SetSkinCustomDepthStencilWriteMask,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void SetSkinCustomDepthStencilValue(int32 CustomDepthStencilValue) PURE_VIRTUAL(SetSkinCustomDepthStencilValue,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void SetSkinColorParam(UObject* ParamOwner, int32 inIndex, FName InParam, FLinearColor InValue) PURE_VIRTUAL(SetSkinColorParam,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool SetSkin(TSubclassOf<USDISkinObject> SkinClass, bool bForceUpdate, bool bForceReInit) PURE_VIRTUAL(SetSkin, return false;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void RemoveSkinParam(UObject* ParamOwner, int32 inIndex, FName InParam) PURE_VIRTUAL(RemoveSkinParam,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void RemoveAllSkinParams(UObject* ParamOwner) PURE_VIRTUAL(RemoveAllSkinParams,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsValidSkin(TSubclassOf<USDISkinObject> SkinClass) const PURE_VIRTUAL(IsValidSkin, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual TSubclassOf<USDISkinObject> GetSkin() const PURE_VIRTUAL(GetSkin, return NULL;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    virtual bool CopySkin(AActor* Other, bool bForceReInit) PURE_VIRTUAL(CopySkin, return false;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void ApplySkinParams(bool bForce) PURE_VIRTUAL(ApplySkinParams,);
    
};

