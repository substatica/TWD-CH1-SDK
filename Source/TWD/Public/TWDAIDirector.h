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

UCLASS(Blueprintable)
class TWD_API ATWDAIDirector : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* Bounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RoamerSpawnTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAICell> RoamerCells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FAICellMember> WalkerAIs;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AverageCellValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPathLength;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLimitRoamingToPlayerArea;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerAreaCellPercentage;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRespawnInsidePlayerArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NavProjectionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebugInGame;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RemainingRoamersToRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RefreshTimeInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPlayerTargetAgeBeforeDespawn;
    
    ATWDAIDirector();
    UFUNCTION(BlueprintCallable)
    void SpawnRemainingRoamers();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerAreaCellPercentage(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveGravityWell(FGuid UniqueId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RefreshCellData();
    
public:
    UFUNCTION(BlueprintCallable)
    void ModValueTimerComplete(FGuid UniqueId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsCharacterARoamer(ATWDCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable)
    FVector GetNextRoamTarget(ATWDAIController* AIController);
    
    UFUNCTION(BlueprintCallable)
    FGuid AddGravityWell(float Value, FVector Location, float Halflife);
    
};

