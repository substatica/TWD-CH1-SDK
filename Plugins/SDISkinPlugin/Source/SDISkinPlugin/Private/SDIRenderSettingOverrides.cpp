#include "SDIRenderSettingOverrides.h"

FSDIRenderSettingOverrides::FSDIRenderSettingOverrides() {
    this->bOverrideVisibilitySettings = false;
    this->bOwnerNoSee = false;
    this->bOnlyOwnerSee = false;
    this->bOverrideShadowSettings = false;
    this->bCastShadow = false;
    this->bCastDynamicShadow = false;
    this->bCastHiddenShadow = false;
    this->bCastShadowAsTwoSided = false;
    this->bOverrideTranslucencySettings = false;
    this->TranslucencySortPriority = 0;
    this->bOverrideDecalSettings = false;
    this->bReceivesDecals = false;
    this->bOverrideCustomDepthSettings = false;
    this->bRenderInMainPass = false;
    this->bRenderCustomDepth = false;
    this->CustomDepthStencilValue = 0;
    this->CustomDepthStencilWriteMask = ERendererStencilMask::ERSM_Default;
}

