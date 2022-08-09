#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SDIAsyncOverlapGeneratorComponentActorBeginOverlapSignatureDelegate.h"
#include "SDIAsyncOverlapGeneratorComponentBeginOverlapSignatureDelegate.h"
#include "SDIAsyncOverlapGeneratorComponentActorEndOverlapSignatureDelegate.h"
#include "SDIAsyncOverlapGeneratorComponentEndOverlapSignatureDelegate.h"
#include "SDIAsyncOverlapEventGeneratorComponent.generated.h"

class UPrimitiveComponent;
class AActor;
class USDIAsyncOverlapEventGeneratorComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDICOREPLUGIN_API USDIAsyncOverlapEventGeneratorComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* PrimitiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> OverlappedComponents;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<AActor>> OverlappedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDynamicallyCreated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsUpdatingOverlaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bClearOverlapsRequested;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<AActor>> PendingActorsDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAsyncOverlapHandlePending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AActor>, bool> ActorClassOverlapFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanOverlapOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRouteActorOverlapsToOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReciprocateComponentOverlapDelegates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReciprocateActorOverlapDelegates;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIAsyncOverlapGeneratorComponentBeginOverlapSignature OnComponentBeginOverlap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIAsyncOverlapGeneratorComponentEndOverlapSignature OnComponentEndOverlap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIAsyncOverlapGeneratorComponentActorBeginOverlapSignature OnActorBeginOverlap;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDIAsyncOverlapGeneratorComponentActorEndOverlapSignature OnActorEndOverlap;
    
    USDIAsyncOverlapEventGeneratorComponent();
    UFUNCTION(BlueprintCallable)
    void SetRouteActorOverlapsToOwner(bool bRouteToOwner);
    
    UFUNCTION(BlueprintCallable)
    void SetReciprocateOverlapDelegates(bool bReciprocateComponents, bool bReciprocateActors);
    
    UFUNCTION(BlueprintCallable)
    void SetComponent(UPrimitiveComponent* InComp);
    
    UFUNCTION(BlueprintCallable)
    void SetCanOverlapOwner(bool bOverlapOwner);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActorClassOverlapFilter(TSoftClassPtr<AActor> ActorClass);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnComponentCollisionSettingsChanged(UPrimitiveComponent* ChangedComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnActorDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverlappingComponent(const UPrimitiveComponent* OtherComp) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverlappingActor(const AActor* Other) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimitiveComponent* GetComponent() const;
    
    UFUNCTION(BlueprintCallable)
    static USDIAsyncOverlapEventGeneratorComponent* GetAsyncOverlapEventGeneratorComponentFor(UPrimitiveComponent* Component, bool bCreate);
    
    UFUNCTION(BlueprintCallable)
    void ClearActorClassOverlapFilter();
    
    UFUNCTION(BlueprintCallable)
    void AddActorClassOverlapFilter(TSoftClassPtr<AActor> ActorClass, bool bAllowOverlap);
    
};

