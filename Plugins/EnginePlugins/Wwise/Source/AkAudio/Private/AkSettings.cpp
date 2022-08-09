#include "AkSettings.h"

UAkSettings::UAkSettings() {
    this->MaxSimultaneousReverbVolumes = 4;
    this->bAutoConnectToWAAPI = false;
    this->DefaultOcclusionCollisionChannel = ECC_GameTraceChannel18;
    this->SplitSwitchContainerMedia = false;
    this->SplitMediaPerFolder = false;
    this->UseEventBasedPackaging = true;
    this->EnableAutomaticAssetSynchronization = false;
    this->CommandletCommitMessage = TEXT("Unreal Wwise Sound Data auto-generation");
    this->AskedToUseNewAssetManagement = false;
    this->bEnableMultiCoreRendering = false;
    this->MigratedEnableMultiCoreRendering = true;
    this->FixupRedirectorsDuringMigration = false;
}

