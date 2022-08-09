#pragma once
#include "CoreMinimal.h"
#include "ECoverType.h"
#include "EMovementTargetType.h"
#include "SDIMovementTargetActor.h"
#include "TWDInteractiveHighlightInterface.h"
#include "UObject/NoExportTypes.h"
#include "EPopoutLocation.h"
#include "TWDMovementTargetActor.generated.h"

class UArrowComponent;
class AActor;

UCLASS()
class ATWDMovementTargetActor : public ASDIMovementTargetActor, public ITWDInteractiveHighlightInterface {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UArrowComponent* LeftArrowPopout;
    
    UPROPERTY(Export, Transient)
    UArrowComponent* RightArrowPopout;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EMovementTargetType MoveTargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECoverType CoverType;
    
    UPROPERTY(EditDefaultsOnly)
    float CoverHeightCheck;
    
    UPROPERTY(EditDefaultsOnly)
    float CoverWidthCheck;
    
    UPROPERTY(EditDefaultsOnly)
    float CoverDistanceCheck;
    
    UPROPERTY(EditAnywhere)
    bool DisplayDebug;
    
private:
    UPROPERTY(Transient)
    AActor* OccupingAgent;
    
public:
    ATWDMovementTargetActor();
    UFUNCTION(BlueprintCallable)
    void SetOccupied(AActor* occupingActor);
    
    UFUNCTION(BlueprintCallable)
    bool IsValidCover();
    
    UFUNCTION(BlueprintCallable)
    bool GetPopoutPositionValid(FVector TargetPos, EPopoutLocation popoutSide, FVector& PopoutPosition);
    
    UFUNCTION(BlueprintCallable)
    bool GetOccupied(AActor*& occupingActor);
    
    UFUNCTION(BlueprintCallable)
    void ClearOccupied();
    
    
    // Fix for true pure virtual functions not being implemented
};

