#pragma once
#include "CoreMinimal.h"
#include "TWDNonVRInteractionWidget.h"
#include "TWDNonVRBackpackWidget.generated.h"

class ATWDBackpack;
class ASDIInventoryActor;

UCLASS(Blueprintable, EditInlineNew)
class TWD_API UTWDNonVRBackpackWidget : public UTWDNonVRInteractionWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATWDBackpack* BackpackActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASDIInventoryActor* CurrentlySelectedItem;
    
public:
    UTWDNonVRBackpackWidget();
    UFUNCTION(BlueprintCallable)
    void OnSelectedItemChanged(ASDIInventoryActor* NewItem);
    
};

