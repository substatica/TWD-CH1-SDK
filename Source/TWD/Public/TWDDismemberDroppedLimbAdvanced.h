#pragma once
#include "CoreMinimal.h"
#include "TWDDismemberData.h"
#include "TWDDismemberDroppedLimb.h"
#include "SpawnableBouquetElement.h"
#include "ETWDCharacterHitRegion.h"
#include "TWDDismemberDroppedLimbAdvanced.generated.h"

class ATWDCharacter;
class UPhysicsConstraintComponent;

UCLASS(Blueprintable)
class ATWDDismemberDroppedLimbAdvanced : public ATWDDismemberDroppedLimb {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ETWDCharacterHitRegion, FTWDDismemberData> DismemberData;
    
    UPROPERTY(EditAnywhere, Transient)
    uint32 SeveredTorsoExtremityMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UPhysicsConstraintComponent*> SplayConstraintComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSpawnableBouquetElement> DeferredBouquetElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShowAdvancedWoundDebugInfo;
    
public:
    ATWDDismemberDroppedLimbAdvanced();
    UFUNCTION(BlueprintCallable)
    void SpawnDeferredSeverBouquetElements(ATWDCharacter* SourceCharacter);
    
    UFUNCTION(BlueprintCallable)
    void SetShowAdvancedWoundDebugInfo(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void EndSplay(ATWDCharacter* SourceCharacter);
    
    UFUNCTION(BlueprintCallable)
    void DeferSeverBouquetElement(FSpawnableBouquetElement& E);
    
};

