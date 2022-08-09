#pragma once
#include "CoreMinimal.h"
#include "SDICoreFXManager.h"
#include "SDICoreFXCurveAnimation.h"
#include "TWDFXManager.generated.h"

class UMaterialInstanceDynamic;
class ATWDFXManager;
class UObject;

UCLASS()
class ATWDFXManager : public ASDICoreFXManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FSDICoreFXCurveAnimation RecipeHighlightAnim;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<UMaterialInstanceDynamic>> RecipeHighlights;
    
public:
    ATWDFXManager();
    UFUNCTION(BlueprintCallable)
    void RemoveRecipeHighlight(UMaterialInstanceDynamic* MatInst);
    
    UFUNCTION(BlueprintPure)
    static ATWDFXManager* GetTWDFXManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void AddRecipeHighlight(UMaterialInstanceDynamic* MatInst);
    
};

