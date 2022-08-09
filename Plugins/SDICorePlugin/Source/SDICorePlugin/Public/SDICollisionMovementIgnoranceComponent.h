#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SDICollisionMovementIgnoranceComponent.generated.h"

class UPrimitiveComponent;
class AActor;
class USDICollisionMovementIgnoranceComponent;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDICOREPLUGIN_API USDICollisionMovementIgnoranceComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UPrimitiveComponent> WeakCollisionComponent;
    
    UPROPERTY(Transient)
    bool bDynamicallyCreated;
    
    UPROPERTY(Transient)
    TMap<TWeakObjectPtr<UPrimitiveComponent>, bool> ComponentIgnoranceMap;
    
    UPROPERTY(Transient)
    TMap<TWeakObjectPtr<UPrimitiveComponent>, bool> ComponentClearanceMap;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AActor>> ActorIgnorances;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AActor>> ActorClearances;
    
public:
    USDICollisionMovementIgnoranceComponent();
    UFUNCTION(BlueprintCallable)
    int32 SetComponentIgnorances(const TArray<UPrimitiveComponent*>& OtherComps, bool bReciprocate);
    
    UFUNCTION(BlueprintCallable)
    bool SetComponentIgnorance(UPrimitiveComponent* OtherComp, bool bReciprocate);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionComponent(UPrimitiveComponent* InComp);
    
    UFUNCTION(BlueprintCallable)
    int32 SetActorIgnorances(const TArray<AActor*>& OtherActors);
    
    UFUNCTION(BlueprintCallable)
    bool SetActorIgnorance(AActor* OtherActor);
    
    UFUNCTION(BlueprintPure)
    bool K2IsIgnoringComponent(UPrimitiveComponent* OtherComp, bool& bOutReciprocate) const;
    
    UFUNCTION(BlueprintPure)
    bool K2IsComponentWaitingForClearance(UPrimitiveComponent* OtherComp, bool& bOutReciprocate) const;
    
    UFUNCTION(BlueprintPure)
    bool IsIgnoringActor(AActor* OtherActor) const;
    
    UFUNCTION(BlueprintPure)
    bool IsActorWaitingForClearance(AActor* OtherActor) const;
    
    UFUNCTION(BlueprintCallable)
    void IgnoreComponentUntilClear(UPrimitiveComponent* OtherComp, bool bReciprocate);
    
    UFUNCTION(BlueprintCallable)
    void IgnoreActorUntilClear(AActor* OtherActor);
    
    UFUNCTION(BlueprintPure)
    TMap<UPrimitiveComponent*, bool> GetIgnoredComponents() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> GetIgnoredActors() const;
    
    UFUNCTION(BlueprintPure)
    TMap<UPrimitiveComponent*, bool> GetComponentsWaitingForClearance() const;
    
    UFUNCTION(BlueprintCallable)
    static USDICollisionMovementIgnoranceComponent* GetCollisionMovementIgnoranceComponentFor(UPrimitiveComponent* PrimitiveComponent, bool bCreate);
    
    UFUNCTION(BlueprintPure)
    UPrimitiveComponent* GetCollisionComponent() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> GetActorsWaitingForClearance() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearComponentIgnorances(const TArray<UPrimitiveComponent*>& OtherComps, bool bWaitForClearance);
    
    UFUNCTION(BlueprintCallable)
    void ClearComponentIgnorance(UPrimitiveComponent* OtherComp, bool bWaitForClearance);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllComponentIgnorances(bool bWaitForClearance);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllActorIgnorances(bool bWaitForClearance);
    
    UFUNCTION(BlueprintCallable)
    void ClearActorIgnorances(const TArray<AActor*>& OtherActors, bool bWaitForClearance);
    
    UFUNCTION(BlueprintCallable)
    void ClearActorIgnorance(AActor* OtherActor, bool bWaitForClearance);
    
    UFUNCTION(BlueprintCallable)
    void CancelComponentWaitForClearances(const TArray<UPrimitiveComponent*>& OtherComps);
    
    UFUNCTION(BlueprintCallable)
    void CancelComponentWaitForClearance(UPrimitiveComponent* OtherComp);
    
    UFUNCTION(BlueprintCallable)
    void CancelAllComponentWaitForClearances();
    
    UFUNCTION(BlueprintCallable)
    void CancelAllActorWaitForClearances();
    
    UFUNCTION(BlueprintCallable)
    void CancelActorWaitForClearances(const TArray<AActor*>& OtherActors);
    
    UFUNCTION(BlueprintCallable)
    void CancelActorWaitForClearance(AActor* OtherActor);
    
};

