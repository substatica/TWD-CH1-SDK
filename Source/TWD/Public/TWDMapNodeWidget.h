#pragma once
#include "CoreMinimal.h"
#include "TWDUserWidget.h"
#include "EMapTerritoryNodeStatus.h"
#include "TWDMapNodeWidget.generated.h"

class UImage;
class UMaterialInterface;
class UTexture2D;
class UMaterialInstanceDynamic;
class UTextBlock;

UCLASS(EditInlineNew)
class TWD_API UTWDMapNodeWidget : public UTWDUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool SetupCompleted;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName NodeIconParam;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName NodeLockedParam;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName NodeExploredParam;
    
private:
    UPROPERTY(Export, Transient)
    UImage* NodeIconImage;
    
    UPROPERTY(Export, Transient)
    UTextBlock* NodeTitleBox;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* NodeMID;
    
    UPROPERTY(Export, Transient)
    TArray<UImage*> AttributeImages;
    
public:
    UTWDMapNodeWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateExplorationStatus(EMapTerritoryNodeStatus ExplorationStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetReferences_BP();
    
    UFUNCTION(BlueprintCallable)
    void SetReferences(UImage* NodeIcon, UTextBlock* NodeTitle, UMaterialInstanceDynamic* NodeImageMID);
    
    UFUNCTION(BlueprintCallable)
    void SetNodeData(UTexture2D* NodeIconTexture, FText NodeTitle, EMapTerritoryNodeStatus ExplorationStatus, TArray<UMaterialInterface*> AttributeIconMIs);
    
};

