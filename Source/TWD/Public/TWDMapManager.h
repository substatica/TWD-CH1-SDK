#pragma once
#include "CoreMinimal.h"
#include "MapNodeClickedDelegate.h"
#include "UObject/Object.h"
#include "MapNodeAttributesUpdatedDelegate.h"
#include "MapInitializationCompleteDelegate.h"
#include "MapNodeExplorationStatusUpdatedDelegate.h"
#include "MapTerritoryNode.h"
#include "EMapTerritoryNodeType.h"
#include "ETWDWorldEventType.h"
#include "EMapBiomeType.h"
#include "MapBiomeTerritorySet.h"
#include "EMapTerritoryNodeStatus.h"
#include "MapTerritoryAttribute.h"
#include "TWDMapManager.generated.h"

class UMapTerritoryDataAsset;
class UMapAttributeDataAsset;
class UTWDSaveGame;

UCLASS(BlueprintType)
class TWD_API UTWDMapManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMapInitializationComplete OnMapInitializationComplete;
    
    UPROPERTY(BlueprintAssignable)
    FMapNodeAttributesUpdated OnMapNodeAttributesUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FMapNodeExplorationStatusUpdated OnMapNodeExplorationStatusUpdated;
    
    UPROPERTY(BlueprintAssignable)
    FMapNodeClicked OnMapNodeClicked;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 CurrentNode;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 PreviousNode;
    
    UPROPERTY(BlueprintReadOnly)
    bool HasPlayerTraveledToday;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool IsMapInitialized;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FMapTerritoryNode> MapNodes;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMapTerritoryDataAsset* HubDataAsset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMapTerritoryDataAsset* PrologueDataAsset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMapTerritoryDataAsset* TutorialDataAsset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EMapTerritoryNodeType, UMapTerritoryDataAsset*> TerritoryNodeDataMapping;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<ETWDWorldEventType, UMapAttributeDataAsset*> AttributeDataMapping;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EMapBiomeType, FMapBiomeTerritorySet> TerritoriesPerBiomeMapping;
    
public:
    UTWDMapManager();
    UFUNCTION(BlueprintCallable)
    void UnlockAllNodes();
    
    UFUNCTION(BlueprintCallable)
    void UnlockAdjacentNodes();
    
    UFUNCTION(BlueprintCallable)
    void TravelToMap(FName MapName);
    
    UFUNCTION()
    void SetupInitialSaveGameData(UTWDSaveGame* NewSaveGame);
    
    UFUNCTION(BlueprintCallable)
    void SetNodeExplorationStatus(int32 NodeIndex, EMapTerritoryNodeStatus NewStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentNode(int32 NewNodeIndex);
    
    UFUNCTION()
    void SaveMapDataToGameProgression(UTWDSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAttributeOnNodeByType(EMapTerritoryNodeType NodeType, ETWDWorldEventType AttributeType);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAttributeOnNode(int32 NodeIndex, ETWDWorldEventType AttributeType);
    
    UFUNCTION()
    void LoadFromSaveData(UTWDSaveGame* SaveGame);
    
    UFUNCTION(BlueprintPure)
    bool IsNightLevelSkiffTravelAllowed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsNightLevel() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInHubLevel() const;
    
    UFUNCTION(BlueprintCallable)
    bool HandleNodeClickedEvent(int32 NodeIndex);
    
    UFUNCTION(BlueprintCallable)
    bool HandleHubClickedEvent();
    
    UFUNCTION(BlueprintPure)
    FName GetUMAPName(EMapTerritoryNodeType MapEnum) const;
    
    UFUNCTION(BlueprintPure)
    EMapTerritoryNodeType GetTerritoryTypeByName(FName MapName) const;
    
    UFUNCTION(BlueprintPure)
    EMapTerritoryNodeType GetTerritoryTypeByIndex(int32 NodeIndex);
    
    UFUNCTION(BlueprintPure)
    int32 GetTerritoryIndexByType(EMapTerritoryNodeType NodeType);
    
    UFUNCTION(BlueprintPure)
    EMapTerritoryNodeStatus GetNodeExplorationStatus(int32 NodeIndex);
    
    UFUNCTION(BlueprintPure)
    FText GetMapDisplayName(FName LevelName) const;
    
    UFUNCTION()
    FName GetLightScenarioName() const;
    
    UFUNCTION(BlueprintPure)
    EMapTerritoryNodeType GetCurrentMapTerritoryType() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FMapTerritoryAttribute> GetAttributesOfNode(int32 NodeIndex);
    
    UFUNCTION()
    void AdvanceMapValuesByOneDay();
    
    UFUNCTION(BlueprintCallable)
    void AddAttributesToNodeByType(EMapTerritoryNodeType NodeType, TArray<FMapTerritoryAttribute> NewAttributes);
    
    UFUNCTION(BlueprintCallable)
    void AddAttributesToNode(int32 NodeIndex, TArray<FMapTerritoryAttribute> NewAttributes);
    
};

