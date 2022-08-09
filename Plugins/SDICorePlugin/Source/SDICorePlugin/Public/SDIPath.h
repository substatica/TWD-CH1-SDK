#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "SDIPathNodeTriggerDelegateDelegate.h"
#include "UObject/NoExportTypes.h"
#include "SDIPath.generated.h"

class USDIPathComponent;

UCLASS()
class SDICOREPLUGIN_API ASDIPath : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer PathTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    USDIPathComponent* PathComponent;
    
    UPROPERTY(BlueprintAssignable)
    FSDIPathNodeTriggerDelegate PathNodeTriggerDelegate;
    
    ASDIPath();
    UFUNCTION(BlueprintCallable)
    int32 GetStarterId();
    
    UFUNCTION(BlueprintCallable)
    bool GetPathNode(int32 ID, FVector& Location, FString& Name);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumPathNodes();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNextPathNodeByDirection(FVector Direction, int32 ID, FVector& Location, int32 PreviousId);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNextPathNode(int32 ID, FVector& Location, int32 PreviousId);
    
    UFUNCTION(BlueprintCallable)
    float GetBranchWeight(const FString& PathNode1, const FString& PathNode2);
    
    UFUNCTION(BlueprintCallable)
    int32 ClosestPathNodeToLocationByLinkDistance(FVector InputLocation, float& OutputDist, FVector BiasDirection);
    
    UFUNCTION(BlueprintCallable)
    int32 ClosestPathNodeToLocation(FVector InputLocation, FVector& OutputLocation);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBranchWeight(const FString& PathNode1, const FString& PathNode2, float Weight);
    
};

