#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UObject/NoExportTypes.h"
#include "SDICoreUserWidget.generated.h"

class APlayerState;
class USDICoreWidgetComponent;
class APawn;

UCLASS(EditInlineNew)
class SDICOREPLUGIN_API USDICoreUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bWidgetComponentAutoVisibility;
    
    UPROPERTY(EditAnywhere)
    bool bWidgetComponentAutoAttachment;
    
    UPROPERTY(EditAnywhere)
    bool bWidgetComponentAutoTickControl;
    
    UPROPERTY(Export)
    TWeakObjectPtr<USDICoreWidgetComponent> WidgetComponentPointer;
    
public:
    USDICoreUserWidget();
    UFUNCTION(BlueprintCallable)
    void SetComponentManuallyRedraw(bool bUseManualRedraw, bool bResetLastWidgetRenderTime);
    
    UFUNCTION(BlueprintCallable)
    void ResetComponentLastWidgetRenderTime();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSynchronizeProperties();
    
    UFUNCTION(BlueprintPure)
    static APlayerState* GetWidgetViewPlayerState(const UUserWidget* Widget);
    
    UFUNCTION(BlueprintPure)
    static APawn* GetWidgetViewPawn(const UUserWidget* Widget);
    
    UFUNCTION(BlueprintPure)
    USDICoreWidgetComponent* GetWidgetComponent() const;
    
    UFUNCTION(BlueprintPure)
    APlayerState* GetViewPlayerState() const;
    
    UFUNCTION(BlueprintPure)
    APawn* GetViewPawn() const;
    
    UFUNCTION(BlueprintPure)
    bool GetDistanceToViewPawn(float& OutDistance, bool bXYOnly, bool bUseWidgetComponentLocation) const;
    
    UFUNCTION(BlueprintPure)
    bool GetDeltaToViewPawn(FVector& OutDelta, bool bUseWidgetComponentLocation) const;
    
    UFUNCTION(BlueprintPure)
    bool GetComponentManuallyRedraw() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyWidgetComponent();
    
    UFUNCTION(BlueprintCallable)
    void ComponentRequestRedraw();
    
};

