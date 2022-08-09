#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "Components/WidgetComponent.h"
#include "Curves/CurveFloat.h"
#include "UObject/NoExportTypes.h"
#include "RVector2D.h"
#include "RFloat.h"
#include "SDIAttachmentInfo.h"
#include "SDICoreWidgetComponent.generated.h"

class UUserWidget;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDICOREPLUGIN_API USDICoreWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bIsBillboard;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ScreenSpaceDistanceScaleCurve;
    
    UPROPERTY(EditAnywhere)
    FVector2D ScreenSpaceDistanceScaleWorldRadius;
    
    UPROPERTY(EditAnywhere)
    FRVector2D ScreenSpaceScaleLimits;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ScreenSpaceDistanceAlphaCurve;
    
    UPROPERTY(EditAnywhere)
    FRFloat ScreenSpaceDistanceLimits;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UUserWidget> OffscreenWidgetClass;
    
    UPROPERTY(EditAnywhere)
    bool bOffscreenDrawWhenOnscreen;
    
    UPROPERTY(EditAnywhere)
    bool bOffscreenDrawAtDesiredSize;
    
    UPROPERTY(EditAnywhere)
    FIntPoint OffscreenDrawSize;
    
    UPROPERTY(EditAnywhere)
    FVector2D OffscreenPivot;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve OffscreenDistanceScaleCurve;
    
    UPROPERTY(EditAnywhere)
    FVector2D OffscreenDistanceScaleWorldRadius;
    
    UPROPERTY(EditAnywhere)
    FRVector2D OffscreenScaleLimits;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve OffscreenDistanceAlphaCurve;
    
    UPROPERTY(EditAnywhere)
    FRFloat OffscreenDistanceLimits;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve OnscreenDistanceScaleCurve;
    
    UPROPERTY(EditAnywhere)
    FVector2D OnscreenDistanceScaleWorldRadius;
    
    UPROPERTY(EditAnywhere)
    FRVector2D OnscreenScaleLimits;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve OnscreenDistanceAlphaCurve;
    
    UPROPERTY(EditAnywhere)
    FRFloat OnscreenDistanceLimits;
    
protected:
    UPROPERTY(Transient)
    bool bWidgetComponentAutoAttachment;
    
    UPROPERTY(Transient)
    bool bWidgetComponentAutoTickControl;
    
    UPROPERTY(Transient)
    FSDIAttachmentInfo WidgetAttachmentInfo;
    
    UPROPERTY(Transient)
    bool bWidgetDistanceCulled;
    
    UPROPERTY(Export, Transient)
    UUserWidget* OffscreenWidget;
    
    UPROPERTY(Transient)
    bool bOffscreenWidgetAddedToScreen;
    
public:
    USDICoreWidgetComponent();
    UFUNCTION(BlueprintCallable)
    void SetWidgetComponentAutoTickControl(bool bInWidgetComponentAutoTickControl);
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetComponentAutoAttachment(bool bInWidgetComponentAutoAttachment);
    
    UFUNCTION(BlueprintCallable)
    void SetOffscreenPivot(const FVector2D& InPivot);
    
    UFUNCTION(BlueprintCallable)
    void SetOffscreenDrawWhenOnscreen(bool InbOffscreenDrawWhenOnscreen);
    
    UFUNCTION(BlueprintCallable)
    void SetOffscreenDrawSize(FVector2D Size);
    
    UFUNCTION(BlueprintCallable)
    void SetOffscreenDrawAtDesiredSize(bool InbOffscreenDrawAtDesiredSize);
    
    UFUNCTION(BlueprintCallable)
    void ResetLastWidgetRenderTime();
    
    UFUNCTION(BlueprintPure)
    UUserWidget* GetOffscreenUserWidgetObject() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetOffscreenPivot() const;
    
    UFUNCTION(BlueprintPure)
    bool GetOffscreenDrawWhenOnscreen() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetOffscreenDrawSize() const;
    
    UFUNCTION(BlueprintPure)
    bool GetOffscreenDrawAtDesiredSize() const;
    
};

