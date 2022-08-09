#pragma once
#include "CoreMinimal.h"
#include "SDITransformCollisionShape.h"
#include "GameFramework/HUD.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESDICoordinatePivot.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDICoreHUD.generated.h"

class APlayerState;
class UTexture;
class APawn;
class UFont;
class UMaterialInterface;

UCLASS(NonTransient)
class SDICOREPLUGIN_API ASDICoreHUD : public AHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    bool bDrawUtilityAI;
    
    UPROPERTY(Transient)
    bool bDrawMonkey;
    
public:
    ASDICoreHUD();
    UFUNCTION(BlueprintPure)
    bool WorldToScreenSize(FVector WorldLocation, float InWorldW, float InWorldH, float& OutScreenW, float& OutScreenH) const;
    
    UFUNCTION(BlueprintPure)
    bool WorldSphereToScreen(FVector Origin, float Radius, float& OutScreenX, float& OutScreenY, float& OutScreenW, float& OutScreenH) const;
    
    UFUNCTION(BlueprintPure)
    bool WorldBoxToScreen(FVector Origin, FVector BoxExtent, float& OutScreenX, float& OutScreenY, float& OutScreenW, float& OutScreenH) const;
    
    UFUNCTION(Exec)
    void ToggleDrawUtilityAI();
    
    UFUNCTION(Exec)
    void ToggleDrawMonkey();
    
    UFUNCTION(BlueprintPure)
    bool ShapeToScreen(const FSDITransformCollisionShape& Shape, float& OutScreenX, float& OutScreenY, float& OutScreenW, float& OutScreenH) const;
    
    UFUNCTION(BlueprintPure)
    bool IsOnscreen(float ScreenX, float ScreenY, float ScreenW, float ScreenH) const;
    
    UFUNCTION(BlueprintPure)
    APlayerState* GetViewPlayerState() const;
    
    UFUNCTION(BlueprintPure)
    APawn* GetViewPawn() const;
    
    UFUNCTION(BlueprintPure)
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
    
    UFUNCTION(BlueprintPure)
    void CalculateScreenPivot(ESDICoordinatePivot Pivot, float& OutScreenX, float& OutScreenY) const;
    
    UFUNCTION(BlueprintPure)
    float CalculateScreenPercentage(float Percent) const;
    
    UFUNCTION(BlueprintCallable)
    static void CalculatePivot(ESDICoordinatePivot Pivot, float InScreenX, float InScreenY, float InScreenW, float InScreenH, float& OutScreenX, float& OutScreenY);
    
};

