#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UObject/NoExportTypes.h"
#include "SDITransformCollisionShape.h"
#include "ESDICoordinatePivot.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDICoreHUD.generated.h"

class UTexture;
class APlayerState;
class APawn;
class UFont;
class UMaterialInterface;

UCLASS(Blueprintable, NonTransient)
class SDICOREPLUGIN_API ASDICoreHUD : public AHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDrawUtilityAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDrawMonkey;
    
public:
    ASDICoreHUD();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WorldToScreenSize(FVector WorldLocation, float InWorldW, float InWorldH, float& OutScreenW, float& OutScreenH) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WorldSphereToScreen(FVector Origin, float Radius, float& OutScreenX, float& OutScreenY, float& OutScreenW, float& OutScreenH) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WorldBoxToScreen(FVector Origin, FVector BoxExtent, float& OutScreenX, float& OutScreenY, float& OutScreenW, float& OutScreenH) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDrawUtilityAI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDrawMonkey();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShapeToScreen(const FSDITransformCollisionShape& Shape, float& OutScreenX, float& OutScreenY, float& OutScreenW, float& OutScreenH) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnscreen(float ScreenX, float ScreenY, float ScreenW, float ScreenH) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerState* GetViewPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetViewPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetScreenSize(float& OutScreenW, float& OutScreenH) const;
    
    UFUNCTION(BlueprintCallable)
    void DrawWorldLocTextureSimplePivot(UTexture* Texture, ESDICoordinatePivot Pivot, FVector WorldLocation, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void DrawWorldLocTexturePivot(UTexture* Texture, ESDICoordinatePivot Pivot, FVector WorldLocation, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, FLinearColor TintColor, TEnumAsByte<EBlendMode> BlendMode, float Scale, float Rotation, FVector2D RotPivot);
    
    UFUNCTION(BlueprintCallable)
    void DrawWorldLocTextPivot(const FString& Text, FLinearColor TextColor, ESDICoordinatePivot Pivot, FVector WorldLocation, UFont* Font, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void DrawWorldLocSizeTextureSimplePivot(UTexture* Texture, ESDICoordinatePivot Pivot, FVector WorldLocation, float WorldW, float WorldH, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void DrawWorldLocSizeTexturePivot(UTexture* Texture, ESDICoordinatePivot Pivot, FVector WorldLocation, float WorldW, float WorldH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, FLinearColor TintColor, TEnumAsByte<EBlendMode> BlendMode, float Scale, float Rotation, FVector2D RotPivot);
    
    UFUNCTION(BlueprintCallable)
    void DrawWorldLocSizeMaterialSimplePivot(UMaterialInterface* Material, ESDICoordinatePivot Pivot, FVector WorldLocation, float WorldW, float WorldH, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void DrawWorldLocSizeMaterialPivot(UMaterialInterface* Material, ESDICoordinatePivot Pivot, FVector WorldLocation, float WorldW, float WorldH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, float Rotation, FVector2D RotPivot);
    
    UFUNCTION(BlueprintCallable)
    void DrawWorldLocMaterialSimplePivot(UMaterialInterface* Material, ESDICoordinatePivot Pivot, FVector WorldLocation, float ScreenW, float ScreenH, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void DrawWorldLocMaterialPivot(UMaterialInterface* Material, ESDICoordinatePivot Pivot, FVector WorldLocation, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, float Rotation, FVector2D RotPivot);
    
    UFUNCTION(BlueprintCallable)
    void DrawTextureSimplePivot(UTexture* Texture, ESDICoordinatePivot Pivot, float ScreenX, float ScreenY, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void DrawTexturePivot(UTexture* Texture, ESDICoordinatePivot Pivot, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, FLinearColor TintColor, TEnumAsByte<EBlendMode> BlendMode, float Scale, float Rotation, FVector2D RotPivot);
    
    UFUNCTION(BlueprintCallable)
    void DrawTextPivot(const FString& Text, FLinearColor TextColor, ESDICoordinatePivot Pivot, float ScreenX, float ScreenY, UFont* Font, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void DrawMaterialSimplePivot(UMaterialInterface* Material, ESDICoordinatePivot Pivot, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void DrawMaterialPivot(UMaterialInterface* Material, ESDICoordinatePivot Pivot, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, float Rotation, FVector2D RotPivot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalculateScreenPivot(ESDICoordinatePivot Pivot, float& OutScreenX, float& OutScreenY) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalculateScreenPercentage(float Percent) const;
    
    UFUNCTION(BlueprintCallable)
    static void CalculatePivot(ESDICoordinatePivot Pivot, float InScreenX, float InScreenY, float InScreenW, float InScreenH, float& OutScreenX, float& OutScreenY);
    
};

