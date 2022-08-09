#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "AICell.h"
#include "UObject/NoExportTypes.h"
#include "AICellMember.h"
#include "TWDAIDirector.generated.h"

class UBoxComponent;
class ATWDCharacter;
class ATWDAIController;

UCLASS()
class TWD_API ATWDAIDirector : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 GridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
    UBoxComponent* Bounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName RoamerSpawnTag;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    TArray<FAICell> RoamerCells;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<int32, FAICellMember> WalkerAIs;
    
public:
    UPROPERTY(BlueprintReadOnly)
    float AverageCellValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxPathLength;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bLimitRoamingToPlayerArea;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float PlayerAreaCellPercentage;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bRespawnInsidePlayerArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector NavProjectionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowDebugInGame;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    int32 DebugHeight;
    
    UPROPERTY(Transient)
    int32 RemainingRoamersToRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RefreshTimeInSeconds;
    
    UPROPERTY(EditAnywhere)
    float MaxPlayerTargetAgeBeforeDespawn;
    
    ATWDAIDirector();
    UFUNCTION()
    void SpawnRemainingRoamers();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerAreaCellPercentage(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveGravityWell(FGuid UniqueId);
    
protected:
    UFUNCTION()
    void RefreshCellData();
    
public:
    UFUNCTION()
    void ModValueTimerComplete(FGuid UniqueId);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool IsCharacterARoamer(ATWDCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable)
    FVector GetNextRoamTarget(ATWDAIController* AIController);
    
    UFUNCTION(BlueprintCallable)
    FGuid AddGravityWell(float Value, FVector Location, float Halflife);
    
};

