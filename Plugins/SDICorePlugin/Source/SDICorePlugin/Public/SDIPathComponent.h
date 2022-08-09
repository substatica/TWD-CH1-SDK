#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "SDIPathNode.h"
#include "SDIPathComponent.generated.h"

class UDataTable;
class UEnum;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDICOREPLUGIN_API USDIPathComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FSDIPathNode> PathNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 StarterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* NodeDescDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UEnum* NodeAnimationEnumData;
    
protected:
    UPROPERTY()
    int32 CounterId;
    
public:
    USDIPathComponent();
    UFUNCTION(BlueprintCallable)
    int32 FindClosestPoint(const FVector& Loc, FVector& ClosestPoint);
    
};

