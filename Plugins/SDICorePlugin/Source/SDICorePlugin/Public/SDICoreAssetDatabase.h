#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "SDIAssetLookupTable.h"
#include "SDICoreAssetDatabase.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class SDICOREPLUGIN_API USDICoreAssetDatabase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleDefaultsOnly)
    TMap<FGuid, FSDIAssetLookupTable> Assets;
    
public:
    USDICoreAssetDatabase();
    UFUNCTION(BlueprintPure)
    bool IsGuidChildOfClass(const FGuid& Child, UClass* Parent) const;
    
    UFUNCTION(BlueprintPure)
    bool IsGuidChildOf(const FGuid& Child, const FGuid& Parent) const;
    
    UFUNCTION(BlueprintPure)
    bool IsClassChildOfGuid(UClass* Child, const FGuid& Parent) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAssetGuid(const FGuid& Guid, bool bUseLoadingFallback) const;
    
    UFUNCTION(BlueprintPure)
    FText GetText(const FGuid& Guid, FName Key) const;
    
    UFUNCTION(BlueprintPure)
    FString GetPath(const FGuid& Guid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<UObject*> GetObjects(const TArray<FGuid>& Guids) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UObject* GetObject(const FGuid& Guid) const;
    
    UFUNCTION(BlueprintPure)
    float GetNumber(const FGuid& Guid, FName Key) const;
    
    UFUNCTION(BlueprintPure)
    FString GetName(const FGuid& Guid) const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetImage(const FGuid& Guid, FName Key) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetGuidReferences(const FGuid& Guid, FName Key, TArray<FGuid>& GuidRefs) const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetGuidByName(const FString& Name, UClass* ClassFilter, bool bAllowSubstr, bool bCaseSensitive) const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetGuidByAsset(const TSoftObjectPtr<UObject>& Asset) const;
    
    UFUNCTION(BlueprintPure)
    FText GetClassExportDisplayName(UClass* Class) const;
    
    UFUNCTION(BlueprintPure)
    FText GetClassExportDescription(UClass* Class) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<UClass*> GetClasses(const TArray<FGuid>& Guids) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UClass* GetClass(const FGuid& Guid) const;
    
    UFUNCTION(BlueprintPure)
    UClass* GetAssetType(const FGuid& Guid) const;
    
    UFUNCTION(BlueprintPure)
    TArray<TSoftObjectPtr<UObject>> GetAssets(const TArray<FGuid>& Guids) const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UObject> GetAsset(const FGuid& Guid) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAllAssetGuids(TArray<FGuid>& Guids, UClass* ClassFilter) const;
    
    UFUNCTION(BlueprintPure)
    bool FindText(const FGuid& Guid, FName Key, FText& OutText) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearResolvedText();
    
};

