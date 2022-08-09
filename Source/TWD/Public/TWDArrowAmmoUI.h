#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "TWDArrowAmmoUI.generated.h"

class UStaticMesh;
class UStaticMeshComponent;
class UMaterialInterface;
class UTWDUserWidget;
class UTWDWidgetComponent;

USTRUCT(BlueprintType)
struct FTWDArrowAmmoUI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UStaticMesh* ArrowMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterialInterface* ArrowMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTransform MeshTransform;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTWDUserWidget> AmmoWidget;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTransform AmmoWidgetTransform;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UTWDWidgetComponent* WidgetComponent;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 CachedArrowCount;
    
    TWD_API FTWDArrowAmmoUI();
};

