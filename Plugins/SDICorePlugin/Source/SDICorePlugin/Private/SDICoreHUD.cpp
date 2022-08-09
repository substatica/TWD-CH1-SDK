#include "SDICoreHUD.h"

class UTexture;
class APlayerState;
class APawn;
class UFont;
class UMaterialInterface;

bool ASDICoreHUD::WorldToScreenSize(FVector WorldLocation, float InWorldW, float InWorldH, float& OutScreenW, float& OutScreenH) const {
    return false;
}

bool ASDICoreHUD::WorldSphereToScreen(FVector Origin, float Radius, float& OutScreenX, float& OutScreenY, float& OutScreenW, float& OutScreenH) const {
    return false;
}

bool ASDICoreHUD::WorldBoxToScreen(FVector Origin, FVector BoxExtent, float& OutScreenX, float& OutScreenY, float& OutScreenW, float& OutScreenH) const {
    return false;
}

void ASDICoreHUD::ToggleDrawUtilityAI() {
}

void ASDICoreHUD::ToggleDrawMonkey() {
}

bool ASDICoreHUD::ShapeToScreen(const FSDITransformCollisionShape& Shape, float& OutScreenX, float& OutScreenY, float& OutScreenW, float& OutScreenH) const {
    return false;
}

bool ASDICoreHUD::IsOnscreen(float ScreenX, float ScreenY, float ScreenW, float ScreenH) const {
    return false;
}

APlayerState* ASDICoreHUD::GetViewPlayerState() const {
    return NULL;
}

APawn* ASDICoreHUD::GetViewPawn() const {
    return NULL;
}

void ASDICoreHUD::GetScreenSize(float& OutScreenW, float& OutScreenH) const {
}

void ASDICoreHUD::DrawWorldLocTextureSimplePivot(UTexture* Texture, ESDICoordinatePivot Pivot, FVector WorldLocation, float Scale) {
}

void ASDICoreHUD::DrawWorldLocTexturePivot(UTexture* Texture, ESDICoordinatePivot Pivot, FVector WorldLocation, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, FLinearColor TintColor, TEnumAsByte<EBlendMode> BlendMode, float Scale, float Rotation, FVector2D RotPivot) {
}

void ASDICoreHUD::DrawWorldLocTextPivot(const FString& Text, FLinearColor TextColor, ESDICoordinatePivot Pivot, FVector WorldLocation, UFont* Font, float Scale) {
}

void ASDICoreHUD::DrawWorldLocSizeTextureSimplePivot(UTexture* Texture, ESDICoordinatePivot Pivot, FVector WorldLocation, float WorldW, float WorldH, float Scale) {
}

void ASDICoreHUD::DrawWorldLocSizeTexturePivot(UTexture* Texture, ESDICoordinatePivot Pivot, FVector WorldLocation, float WorldW, float WorldH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, FLinearColor TintColor, TEnumAsByte<EBlendMode> BlendMode, float Scale, float Rotation, FVector2D RotPivot) {
}

void ASDICoreHUD::DrawWorldLocSizeMaterialSimplePivot(UMaterialInterface* Material, ESDICoordinatePivot Pivot, FVector WorldLocation, float WorldW, float WorldH, float Scale) {
}

void ASDICoreHUD::DrawWorldLocSizeMaterialPivot(UMaterialInterface* Material, ESDICoordinatePivot Pivot, FVector WorldLocation, float WorldW, float WorldH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, float Rotation, FVector2D RotPivot) {
}

void ASDICoreHUD::DrawWorldLocMaterialSimplePivot(UMaterialInterface* Material, ESDICoordinatePivot Pivot, FVector WorldLocation, float ScreenW, float ScreenH, float Scale) {
}

void ASDICoreHUD::DrawWorldLocMaterialPivot(UMaterialInterface* Material, ESDICoordinatePivot Pivot, FVector WorldLocation, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, float Rotation, FVector2D RotPivot) {
}

void ASDICoreHUD::DrawTextureSimplePivot(UTexture* Texture, ESDICoordinatePivot Pivot, float ScreenX, float ScreenY, float Scale) {
}

void ASDICoreHUD::DrawTexturePivot(UTexture* Texture, ESDICoordinatePivot Pivot, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, FLinearColor TintColor, TEnumAsByte<EBlendMode> BlendMode, float Scale, float Rotation, FVector2D RotPivot) {
}

void ASDICoreHUD::DrawTextPivot(const FString& Text, FLinearColor TextColor, ESDICoordinatePivot Pivot, float ScreenX, float ScreenY, UFont* Font, float Scale) {
}

void ASDICoreHUD::DrawMaterialSimplePivot(UMaterialInterface* Material, ESDICoordinatePivot Pivot, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale) {
}

void ASDICoreHUD::DrawMaterialPivot(UMaterialInterface* Material, ESDICoordinatePivot Pivot, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, float Rotation, FVector2D RotPivot) {
}

void ASDICoreHUD::CalculateScreenPivot(ESDICoordinatePivot Pivot, float& OutScreenX, float& OutScreenY) const {
}

float ASDICoreHUD::CalculateScreenPercentage(float Percent) const {
    return 0.0f;
}

void ASDICoreHUD::CalculatePivot(ESDICoordinatePivot Pivot, float InScreenX, float InScreenY, float InScreenW, float InScreenH, float& OutScreenX, float& OutScreenY) {
}

ASDICoreHUD::ASDICoreHUD() {
    this->bDrawUtilityAI = false;
    this->bDrawMonkey = false;
}

