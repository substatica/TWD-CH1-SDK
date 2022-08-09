#pragma once
#include "CoreMinimal.h"
#include "ETWDInventoryType.h"
#include "UObject/NoExportTypes.h"
#include "ETWDLootType.h"
#include "TWDUniqueEntitlementItemID.h"
#include "ETWDNonVREquipmentType.h"
#include "UObject/NoExportTypes.h"
#include "TWDInventoryActorInterfaceData.generated.h"

class UAkAudioEvent;
class UMaterialInterface;
class UTWDRecipe;

USTRUCT(BlueprintType)
struct FTWDInventoryActorInterfaceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ETWDInventoryType InventoryType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ETWDLootType LootType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ETWDNonVREquipmentType NonVREquipmentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTWDUniqueEntitlementItemID OnlineItemID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SharpnessRating;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DurabilityRating;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ThrowRating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString SerializationString;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FGuid PlacedObjectId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bNearbyHighlightShown;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIgnorePositioningForInventoryData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bNeverShowInventoryData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDropOnArmGrapple;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDropOnArmGrappleOnlyIfTwoHanded;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bApplyPrimaryGripPitchOffsetUserSetting;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform BackpackSlotTransform;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform CharacterSlotTransform;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform ShoulderSlotTransform;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform NonVRInteractTransform;
    
    UPROPERTY(VisibleDefaultsOnly)
    bool bNonVRInteractTransformIsValid;
    
    UPROPERTY()
    bool bSheathed;
    
    UPROPERTY(Transient)
    uint8 LocalInventorySlotIdx;
    
    UPROPERTY(Transient)
    bool bIgnoreReturnToInventoryAudio;
    
    UPROPERTY()
    TArray<UMaterialInterface*> OriginalMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* AudioStoreInInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* AudioRemoveFromInventory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<UTWDRecipe> SalvageRecipe;
    
    UPROPERTY(BlueprintReadOnly)
    FGuid SalvageRecipeGuid;
    
    TWD_API FTWDInventoryActorInterfaceData();
};

