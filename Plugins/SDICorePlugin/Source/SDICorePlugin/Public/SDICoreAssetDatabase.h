#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "SDIAssetLookupTable.h"
#include "SDICoreAssetDatabase.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class SDICOREPLUGIN_API USDICoreAssetDatabase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FSDIAssetLookupTable> Assets;
    
public:
    USDICoreAssetDatabase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGuidChildOfClass(const FGuid& Child, UClass* Parent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGuidChildOf(const FGuid& Child, const FGuid& Parent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClassChildOfGuid(UClass* Child, const FGuid& Parent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAssetGuid(const FGuid& Guid, bool bUseLoadingFallback) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetText(const FGuid& Guid, FName Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPath(const FGuid& Guid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<UObject*> GetObjects(const TArray<FGuid>& Guids) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UObject* GetObject(const FGuid& Guid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNumber(const FGuid& Guid, FName Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetName(const FGuid& Guid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetImage(const FGuid& Guid, FName Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGuidReferences(const FGuid& Guid, FName Key, TArray<FGuid>& GuidRefs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetGuidByName(const FString& Name, UClass* ClassFilter, bool bAllowSubstr, bool bCaseSensitive) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetGuidByAsset(const TSoftObjectPtr<UObject>& Asset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetClassExportDisplayName(UClass* Class) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetClassExportDescription(UClass* Class) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<UClass*> GetClasses(const TArray<FGuid>& Guids) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UClass* GetClass(const FGuid& Guid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* GetAssetType(const FGuid& Guid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSoftObjectPtr<UObject>> GetAssets(const TArray<FGuid>& Guids) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UObject> GetAsset(const FGuid& Guid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAllAssetGuids(TArray<FGuid>& Guids, UClass* ClassFilter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindText(const FGuid& Guid, FName Key, FText& OutText) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearResolvedText();
    
};

