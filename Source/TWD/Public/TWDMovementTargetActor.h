#pragma once
#include "CoreMinimal.h"
#include "SDIMovementTargetActor.h"
#include "TWDInteractiveHighlightInterface.h"
#include "EPopoutLocation.h"
#include "ECoverType.h"
#include "EMovementTargetType.h"
#include "UObject/NoExportTypes.h"
#include "TWDMovementTargetActor.generated.h"

class AActor;
class UArrowComponent;

UCLASS(Blueprintable)
class ATWDMovementTargetActor : public ASDIMovementTargetActor, public ITWDInteractiveHighlightInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UArrowComponent* LeftArrowPopout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UArrowComponent* RightArrowPopout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementTargetType MoveTargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECoverType CoverType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoverHeightCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoverWidthCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoverDistanceCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisplayDebug;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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

