#include "SDIPhysicalMaterial.h"

class UPhysicalMaterial;

FName USDIPhysicalMaterial::GetSurfaceNameForMaterial(const UPhysicalMaterial* Mat) {
    return NAME_None;
}

FName USDIPhysicalMaterial::GetSurfaceNameForEnum(TEnumAsByte<EPhysicalSurface> Surface) {
    return NAME_None;
}

FName USDIPhysicalMaterial::GetSurfaceName() const {
    return NAME_None;
}

FGameplayTagContainer USDIPhysicalMaterial::GetGameplayTagContainer() const {
    return FGameplayTagContainer{};
}

USDIPhysicalMaterial::USDIPhysicalMaterial() {
}

