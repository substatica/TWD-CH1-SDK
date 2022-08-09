#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SDIExportInterface.h"
#include "SDIExportData.h"
#include "ESDIAxis.h"
#include "SDIDamageData.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDICoreProjectileActor.generated.h"

class USDICoreProjectileMovementComponent;
class UPrimitiveComponent;

UCLASS()
class SDICOREPLUGIN_API ASDICoreProjectileActor : public AActor, public ISDIExportInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FSDIExportData ExportData;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USDICoreProjectileMovementComponent* ProjectileMovement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSDIDamageData Damage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSDIDamageData BounceDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSDIDamageData StickDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ProjectileMass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HitReactImpulseMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESDIAxis StickOrientAxis;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StickOffset;
    
    UPROPERTY(Export, Transient)
    TArray<TWeakObjectPtr<UPrimitiveComponent>> OverlappedComponents;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AActor>> OverlapDamagedActors;
    
public:
    ASDICoreProjectileActor();
    UFUNCTION(BlueprintNativeEvent)
    bool ShouldStick(const FHitResult& Hit) const;
    
    UFUNCTION(BlueprintNativeEvent)
    bool ShouldBounce(const FHitResult& Hit) const;
    
protected:
    UFUNCTION()
    void ProjectileEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void ProjectileBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnProjectileStop(const FHitResult& ImpactResult);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnProjectileStick(const FHitResult& ImpactResult);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
    UFUNCTION(BlueprintNativeEvent)
    FTransform GetStickTransform(const FHitResult& ImpactResult);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    UPrimitiveComponent* GetCollisionComponent() const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    FGuid K2GetExportGuid() const override PURE_VIRTUAL(K2GetExportGuid, return FGuid{};);
    
    UFUNCTION(BlueprintCallable)
    FText GetExportText(FName Key) const override PURE_VIRTUAL(GetExportText, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    FText GetExportDisplayName() const override PURE_VIRTUAL(GetExportDisplayName, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    FText GetExportDescription() const override PURE_VIRTUAL(GetExportDescription, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    bool FindExportText(FName Key, FText& OutText) const override PURE_VIRTUAL(FindExportText, return false;);
    
};

