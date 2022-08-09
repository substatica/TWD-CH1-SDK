#pragma once
#include "CoreMinimal.h"
#include "SDICoreFXManager.h"
#include "SDICoreFXCurveAnimation.h"
#include "TWDFXManager.generated.h"

class UObject;
class UMaterialInstanceDynamic;
class ATWDFXManager;

UCLASS(Blueprintable)
class ATWDFXManager : public ASDICoreFXManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICoreFXCurveAnimation RecipeHighlightAnim;
    
    UPROPERTY(EditAnywhere, Transient)
    TArray<TWeakObjectPtr<UMaterialInstanceDynamic>> RecipeHighlights;
    
public:
    ATWDFXManager();
    UFUNCTION(BlueprintCallable)
    void RemoveRecipeHighlight(UMaterialInstanceDynamic* MatInst);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ATWDFXManager* GetTWDFXManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void AddRecipeHighlight(UMaterialInstanceDynamic* MatInst);
    
};

