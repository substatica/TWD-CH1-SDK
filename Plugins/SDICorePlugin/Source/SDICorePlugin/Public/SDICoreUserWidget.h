#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UObject/NoExportTypes.h"
#include "SDICoreUserWidget.generated.h"

class APlayerState;
class USDICoreWidgetComponent;
class APawn;

UCLASS(Blueprintable, EditInlineNew)
class SDICOREPLUGIN_API USDICoreUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWidgetComponentAutoVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWidgetComponentAutoAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWidgetComponentAutoTickControl;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<USDICoreWidgetComponent> WidgetComponentPointer;
    
public:
    USDICoreUserWidget();
    UFUNCTION(BlueprintCallable)
    void SetComponentManuallyRedraw(bool bUseManualRedraw, bool bResetLastWidgetRenderTime);
    
    UFUNCTION(BlueprintCallable)
    void ResetComponentLastWidgetRenderTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSynchronizeProperties();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APlayerState* GetWidgetViewPlayerState(const UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static APawn* GetWidgetViewPawn(const UUserWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USDICoreWidgetComponent* GetWidgetComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerState* GetViewPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetViewPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDistanceToViewPawn(float& OutDistance, bool bXYOnly, bool bUseWidgetComponentLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDeltaToViewPawn(FVector& OutDelta, bool bUseWidgetComponentLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetComponentManuallyRedraw() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyWidgetComponent();
    
    UFUNCTION(BlueprintCallable)
    void ComponentRequestRedraw();
    
};

