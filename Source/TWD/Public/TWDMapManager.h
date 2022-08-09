#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MapInitializationCompleteDelegate.h"
#include "MapTerritoryNode.h"
#include "MapNodeAttributesUpdatedDelegate.h"
#include "MapNodeExplorationStatusUpdatedDelegate.h"
#include "MapNodeClickedDelegate.h"
#include "EMapTerritoryNodeType.h"
#include "ETWDWorldEventType.h"
#include "EMapBiomeType.h"
#include "MapBiomeTerritorySet.h"
#include "EMapTerritoryNodeStatus.h"
#include "MapTerritoryAttribute.h"
#include "TWDMapManager.generated.h"

class UMapTerritoryDataAsset;
class UTWDSaveGame;
class UMapAttributeDataAsset;

UCLASS(Blueprintable)
class TWD_API UTWDMapManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapInitializationComplete OnMapInitializationComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapNodeAttributesUpdated OnMapNodeAttributesUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapNodeExplorationStatusUpdated OnMapNodeExplorationStatusUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapNodeClicked OnMapNodeClicked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PreviousNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasPlayerTraveledToday;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsMapInitialized;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapTerritoryNode> MapNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMapTerritoryDataAsset* HubDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMapTerritoryDataAsset* PrologueDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMapTerritoryDataAsset* TutorialDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMapTerritoryNodeType, UMapTerritoryDataAsset*> TerritoryNodeDataMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETWDWorldEventType, UMapAttributeDataAsset*> AttributeDataMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMapBiomeType, FMapBiomeTerritorySet> TerritoriesPerBiomeMapping;
    
public:
    UTWDMapManager();
    UFUNCTION(BlueprintCallable)
    void UnlockAllNodes();
    
    UFUNCTION(BlueprintCallable)
    void UnlockAdjacentNodes();
    
    UFUNCTION(BlueprintCallable)
    void TravelToMap(FName MapName);
    
    UFUNCTION(BlueprintCallable)
    void SetupInitialSaveGameData(UTWDSaveGame* NewSaveGame);
    
    UFUNCTION(BlueprintCallable)
    void SetNodeExplorationStatus(int32 NodeIndex, EMapTerritoryNodeStatus NewStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentNode(int32 NewNodeIndex);
    
    UFUNCTION(BlueprintCallable)
    void SaveMapDataToGameProgression(UTWDSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAttributeOnNodeByType(EMapTerritoryNodeType NodeType, ETWDWorldEventType AttributeType);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAttributeOnNode(int32 NodeIndex, ETWDWorldEventType AttributeType);
    
    UFUNCTION(BlueprintCallable)
    void LoadFromSaveData(UTWDSaveGame* SaveGame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNightLevelSkiffTravelAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNightLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInHubLevel() const;
    
    UFUNCTION(BlueprintCallable)
    bool HandleNodeClickedEvent(int32 NodeIndex);
    
    UFUNCTION(BlueprintCallable)
    bool HandleHubClickedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetUMAPName(EMapTerritoryNodeType MapEnum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMapTerritoryNodeType GetTerritoryTypeByName(FName MapName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMapTerritoryNodeType GetTerritoryTypeByIndex(int32 NodeIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTerritoryIndexByType(EMapTerritoryNodeType NodeType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMapTerritoryNodeStatus GetNodeExplorationStatus(int32 NodeIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMapDisplayName(FName LevelName) const;
    
    UFUNCTION(BlueprintCallable)
    FName GetLightScenarioName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMapTerritoryNodeType GetCurrentMapTerritoryType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMapTerritoryAttribute> GetAttributesOfNode(int32 NodeIndex);
    
    UFUNCTION(BlueprintCallable)
    void AdvanceMapValuesByOneDay();
    
    UFUNCTION(BlueprintCallable)
    void AddAttributesToNodeByType(EMapTerritoryNodeType NodeType, TArray<FMapTerritoryAttribute> NewAttributes);
    
    UFUNCTION(BlueprintCallable)
    void AddAttributesToNode(int32 NodeIndex, TArray<FMapTerritoryAttribute> NewAttributes);
    
};

