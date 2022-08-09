#pragma once
#include "CoreMinimal.h"
#include "SDIExportObject.h"
#include "TWDUniqueEntitlementItemID.h"
#include "TWDRecipeInfo.h"
#include "UObject/NoExportTypes.h"
#include "TWDRecipe.generated.h"

class UTexture2D;
class UMaterialInstance;

UCLASS(Blueprintable)
class TWD_API UTWDRecipe : public USDIExportObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RecipeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDUniqueEntitlementItemID OnlineItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* RecipeUIImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RecipeUIDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* RecipeBuildMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTWDRecipeInfo> InputInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTWDRecipeInfo> OutputInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTWDRecipeInfo PrerequisiteItemInfo;
    
    UTWDRecipe();
    UFUNCTION(BlueprintCallable)
    static TMap<FGuid, int32> GetOutputsAsMap(const FGuid& RecipeGuid);
    
    UFUNCTION(BlueprintCallable)
    static TMap<FGuid, int32> GetInputsAsMap(const FGuid& RecipeGuid);
    
};

