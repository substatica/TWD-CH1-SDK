#include "SDIJsonExportSettings.h"

FSDIJsonExportSettings::FSDIJsonExportSettings() {
    this->bExportEnumsAsStrings = false;
    this->bExportAssetsAsGuids = false;
    this->bExportSubObjects = false;
    this->bExportTypeInfo = false;
    this->bExportPreamble = false;
    this->bExportAllProperties = false;
    this->bExportBlueprintProperties = false;
    this->bExportEditableProperties = false;
    this->bExportTransientProperties = false;
    this->bExportNonTransientProperties = false;
}

