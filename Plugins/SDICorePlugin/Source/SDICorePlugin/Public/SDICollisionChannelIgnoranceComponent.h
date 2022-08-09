#pragma once
#include "CoreMinimal.h"
#include "SDICollisionResponseRefCount.h"
#include "Components/ActorComponent.h"
#include "SDIPooledObjectData.h"
#include "Engine/EngineTypes.h"
#include "SDIPooledObjectInterface.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "SDICollisionChannelIgnoranceComponent.generated.h"

class UPrimitiveComponent;
class AActor;
class USDICollisionChannelIgnoranceComponent;
class ASDIObjectPool;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDICOREPLUGIN_API USDICollisionChannelIgnoranceComponent : public UActorComponent, public ISDIPooledObjectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UPrimitiveComponent> WeakCollisionComponent;
    
    UPROPERTY(Transient)
    bool bDynamicallyCreated;
    
    UPROPERTY(Transient)
    TMap<TEnumAsByte<ECollisionChannel>, FSDICollisionResponseRefCount> ChannelIgnoranceMap;
    
    UPROPERTY(Transient)
    TMap<TWeakObjectPtr<UPrimitiveComponent>, TEnumAsByte<ECollisionChannel>> ComponentIgnoranceMap;
    
    UPROPERTY(Transient)
    TMap<TEnumAsByte<ECollisionChannel>, TEnumAsByte<ECollisionResponse>> ClearanceMap;
    
    UPROPERTY(Transient)
    FTimerHandle StaleIgnoranceTimerHandle;
    
private:
    UPROPERTY(Transient)
    FSDIPooledObjectData PooledObjectData;
    
public:
    USDICollisionChannelIgnoranceComponent();
    UFUNCTION(BlueprintCallable)
    int32 SetComponentIgnorances(const TArray<UPrimitiveComponent*>& OtherComps);
    
    UFUNCTION(BlueprintCallable)
    bool SetComponentIgnorance(UPrimitiveComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionComponent(UPrimitiveComponent* InComp);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveChannelIgnorance(TEnumAsByte<ECollisionChannel> Channel, bool bWaitForClearance);
    
    UFUNCTION(BlueprintPure)
    bool K2IsWaitingForClearance(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse>& OutResponse) const;
    
    UFUNCTION(BlueprintPure)
    bool K2IsIgnoringChannel(TEnumAsByte<ECollisionChannel> Channel, int32& OutRefCount) const;
    
    UFUNCTION(BlueprintPure)
    bool IsIgnoringComponent(UPrimitiveComponent* OtherComp) const;
    
    UFUNCTION(BlueprintCallable)
    void IgnoreComponentUntilClear(UPrimitiveComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable)
    void IgnoreComponentsUntilClear(TArray<UPrimitiveComponent*> OtherComps);
    
    UFUNCTION(BlueprintCallable)
    void IgnoreChannelUntilClear(TEnumAsByte<ECollisionChannel> Channel);
    
    UFUNCTION(BlueprintCallable)
    void IgnoreActorUntilClear(AActor* OtherActor);
    
    UFUNCTION(BlueprintPure)
    TArray<UPrimitiveComponent*> GetIgnoredComponents() const;
    
    UFUNCTION(BlueprintPure)
    UPrimitiveComponent* GetCollisionComponent() const;
    
    UFUNCTION(BlueprintCallable)
    static USDICollisionChannelIgnoranceComponent* GetCollisionChannelIgnoranceComponentFor(UPrimitiveComponent* PrimitiveComponent, bool bCreate);
    
    UFUNCTION(BlueprintCallable)
    void ClearComponentIgnorances(const TArray<UPrimitiveComponent*>& OtherComps, bool bWaitForClearance);
    
    UFUNCTION(BlueprintCallable)
    void ClearComponentIgnorance(UPrimitiveComponent* OtherComp, bool bWaitForClearance);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllComponentIgnorances(bool bWaitForClearance);
    
protected:
    UFUNCTION()
    void CleanupStaleIgnorancesCallback();
    
public:
    UFUNCTION(BlueprintCallable)
    void CleanupStaleIgnorances(bool bWaitForClearance);
    
    UFUNCTION(BlueprintCallable)
    void CancelWaitForClearance(TEnumAsByte<ECollisionChannel> Channel);
    
    UFUNCTION(BlueprintCallable)
    int32 AddChannelIgnorance(TEnumAsByte<ECollisionChannel> Channel);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void ReturnToPoolNextFrame() override PURE_VIRTUAL(ReturnToPoolNextFrame,);
    
    UFUNCTION(BlueprintCallable)
    void ReturnToPool() override PURE_VIRTUAL(ReturnToPool,);
    
    UFUNCTION(BlueprintCallable)
    bool IsInsidePool() const override PURE_VIRTUAL(IsInsidePool, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsFromPool() const override PURE_VIRTUAL(IsFromPool, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsBeingReturnedToPoolNextFrame() const override PURE_VIRTUAL(IsBeingReturnedToPoolNextFrame, return false;);
    
    UFUNCTION(BlueprintCallable)
    ASDIObjectPool* GetPool() const override PURE_VIRTUAL(GetPool, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    float GetAcquiredTimestamp() const override PURE_VIRTUAL(GetAcquiredTimestamp, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    void CancelReturnToPoolNextFrame() override PURE_VIRTUAL(CancelReturnToPoolNextFrame,);
    
};

