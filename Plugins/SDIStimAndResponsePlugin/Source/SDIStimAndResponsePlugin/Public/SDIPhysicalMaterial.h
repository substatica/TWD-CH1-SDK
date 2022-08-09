#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "GameplayTagAssetInterface.h"
#include "Chaos/ChaosEngineInterface.h"
#include "SDIExportInterface.h"
#include "SDIExportData.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "SDIPhysicalMaterial.generated.h"

UCLASS(CollapseCategories)
class SDISTIMANDRESPONSEPLUGIN_API USDIPhysicalMaterial : public UPhysicalMaterial, public IGameplayTagAssetInterface, public ISDIExportInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FSDIExportData ExportData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer GameplayTagContainer;
    
public:
    USDIPhysicalMaterial();
    UFUNCTION(BlueprintCallable)
    static FName GetSurfaceNameForMaterial(const UPhysicalMaterial* Mat);
    
    UFUNCTION(BlueprintCallable)
    static FName GetSurfaceNameForEnum(TEnumAsByte<EPhysicalSurface> Surface);
    
    UFUNCTION(BlueprintPure)
    FName GetSurfaceName() const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTagContainer GetGameplayTagContainer() const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
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

