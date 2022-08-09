#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TWDInventoryActorInterfaceData.h"
#include "ETWDNonVREquipmentType.h"
#include "UObject/NoExportTypes.h"
#include "ETWDLootType.h"
#include "ETWDInventoryType.h"
#include "TWDInventoryActorInterface.generated.h"

class ATWDBackpack;
class ASDIInventorySlot;
class ASDIInventoryActor;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UTWDInventoryActorInterface : public UInterface {
    GENERATED_BODY()
};

class ITWDInventoryActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool ShouldApplyPrimaryGripPitchOffsetUserSetting() const PURE_VIRTUAL(ShouldApplyPrimaryGripPitchOffsetUserSetting, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetSerializationString(const FString& NewString) PURE_VIRTUAL(SetSerializationString,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetNearbyHighlightShown(bool bShown) PURE_VIRTUAL(SetNearbyHighlightShown,);
    
    UFUNCTION()
    virtual void OnRep_RepTWDInventoryData_Internal() PURE_VIRTUAL(OnRep_RepTWDInventoryData_Internal,);
    
    UFUNCTION(BlueprintCallable)
    virtual FTWDInventoryActorInterfaceData K2GetTWDInventoryData() const PURE_VIRTUAL(K2GetTWDInventoryData, return FTWDInventoryActorInterfaceData{};);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsNearbyHighlightShown() const PURE_VIRTUAL(IsNearbyHighlightShown, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsInsideBackpack(ATWDBackpack*& Backpack) const PURE_VIRTUAL(IsInsideBackpack, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual FTransform GetTWDSlotTransform(ASDIInventorySlot* InvSlot, const ASDIInventoryActor* InterfaceImpl) const PURE_VIRTUAL(GetTWDSlotTransform, return FTransform{};);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetThrowRating() const PURE_VIRTUAL(GetThrowRating, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetSharpnessRating() const PURE_VIRTUAL(GetSharpnessRating, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual FString GetSerializationString() const PURE_VIRTUAL(GetSerializationString, return TEXT(""););
    
    UFUNCTION(BlueprintCallable)
    virtual ETWDNonVREquipmentType GetNonVREquipmentType() const PURE_VIRTUAL(GetNonVREquipmentType, return ETWDNonVREquipmentType::None;);
    
    UFUNCTION(BlueprintCallable)
    virtual FText GetLootTypeText() const PURE_VIRTUAL(GetLootTypeText, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    virtual ETWDLootType GetLootType() const PURE_VIRTUAL(GetLootType, return ETWDLootType::Default;);
    
    UFUNCTION(BlueprintCallable)
    virtual FText GetInventoryTypeText() const PURE_VIRTUAL(GetInventoryTypeText, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    virtual ETWDInventoryType GetInventoryType() const PURE_VIRTUAL(GetInventoryType, return ETWDInventoryType::Default;);
    
    UFUNCTION(BlueprintCallable)
    virtual uint8 GetInventorySlotIdx() const PURE_VIRTUAL(GetInventorySlotIdx, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual void GetInventoryDisplayInfo(FText& Name, int32& Count, FText& Type, FText& Description, FText& FlavorText, float& SharpnessRating, float& DurabilityRating, float& ThrowRating, bool& bStabbingAllowed, bool& bDismemberAllowed) const PURE_VIRTUAL(GetInventoryDisplayInfo,);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetDurabilityRating() const PURE_VIRTUAL(GetDurabilityRating, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool DropOnArmGrapple() const PURE_VIRTUAL(DropOnArmGrapple, return false;);
    
};

