#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TWDAchievementData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct TWD_API FTWDAchievementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfKilledHumans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfGrapplesStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfTimesBrainedWalker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfTimesBrainedWalkerWithScrewDriver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfTimesBrainedWalkerWithSpikedBat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfTimesBrainedEliteWalkerWithAxe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfKillsWithPropaneTankExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfKillsOfUnawareEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfTwinkiesEaten;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfLowQualityFoodEaten;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfTimesUsedGutsMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfTimesGivenItemToBeggar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DistanceClimbed;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSet<TSubclassOf<AActor>> CraftedItemTypes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSet<TSubclassOf<AActor>> CraftedMedicalItemTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfGearTableItemsCrafted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfSurvivalTableItemsCrafted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfGunTableItemsCrafted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSet<TSubclassOf<AActor>> CraftedFoodItemTypes;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSet<TSubclassOf<AActor>> ConsumedFoodItemTypes;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TSet<TSubclassOf<AActor>> ConsumedFoodItemTypesToday;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfFoodItemsConsumedToday;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfAngelsInBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 NumberOfPillowsInBus;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSet<FName> VisitedMapNames;
    
    FTWDAchievementData();
};

