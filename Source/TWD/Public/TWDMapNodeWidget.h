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

UCLASS(Blueprintable, EditInlineNew)
class TWD_API UTWDMapNodeWidget : public UTWDUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SetupCompleted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NodeIconParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NodeLockedParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NodeExploredParam;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* NodeIconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* NodeTitleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* NodeMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
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

