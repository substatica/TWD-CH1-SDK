#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/WidgetComponent.h"
#include "Curves/CurveFloat.h"
#include "RVector2D.h"
#include "UObject/NoExportTypes.h"
#include "RFloat.h"
#include "UObject/NoExportTypes.h"
#include "SDIAttachmentInfo.h"
#include "SDICoreWidgetComponent.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDICOREPLUGIN_API USDICoreWidgetComponent : public UWidgetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBillboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve ScreenSpaceDistanceScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ScreenSpaceDistanceScaleWorldRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRVector2D ScreenSpaceScaleLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve ScreenSpaceDistanceAlphaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloat ScreenSpaceDistanceLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> OffscreenWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOffscreenDrawWhenOnscreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOffscreenDrawAtDesiredSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint OffscreenDrawSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D OffscreenPivot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve OffscreenDistanceScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D OffscreenDistanceScaleWorldRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRVector2D OffscreenScaleLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve OffscreenDistanceAlphaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloat OffscreenDistanceLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve OnscreenDistanceScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D OnscreenDistanceScaleWorldRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRVector2D OnscreenScaleLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve OnscreenDistanceAlphaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloat OnscreenDistanceLimits;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWidgetComponentAutoAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWidgetComponentAutoTickControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSDIAttachmentInfo WidgetAttachmentInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWidgetDistanceCulled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* OffscreenWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetOffscreenUserWidgetObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetOffscreenPivot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOffscreenDrawWhenOnscreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetOffscreenDrawSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOffscreenDrawAtDesiredSize() const;
    
};

