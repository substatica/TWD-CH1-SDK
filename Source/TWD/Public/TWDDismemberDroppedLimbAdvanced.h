#pragma once
#include "CoreMinimal.h"
#include "TWDDismemberDroppedLimb.h"
#include "ETWDCharacterHitRegion.h"
#include "TWDDismemberData.h"
#include "SpawnableBouquetElement.h"
#include "TWDDismemberDroppedLimbAdvanced.generated.h"

class ATWDCharacter;
class UPhysicsConstraintComponent;

UCLASS()
class ATWDDismemberDroppedLimbAdvanced : public ATWDDismemberDroppedLimb {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TMap<ETWDCharacterHitRegion, FTWDDismemberData> DismemberData;
    
    UPROPERTY(Transient)
    uint32 SeveredTorsoExtremityMask;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    TArray<UPhysicsConstraintComponent*> SplayConstraintComponents;
    
    UPROPERTY(Transient)
    TArray<FSpawnableBouquetElement> DeferredBouquetElements;
    
    UPROPERTY(Transient)
    bool bShowAdvancedWoundDebugInfo;
    
public:
    ATWDDismemberDroppedLimbAdvanced();
    UFUNCTION()
    void SpawnDeferredSeverBouquetElements(ATWDCharacter* SourceCharacter);
    
    UFUNCTION()
    void SetShowAdvancedWoundDebugInfo(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void EndSplay(ATWDCharacter* SourceCharacter);
    
    UFUNCTION()
    void DeferSeverBouquetElement(FSpawnableBouquetElement& E);
    
};

