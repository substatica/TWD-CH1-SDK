#pragma once
#include "CoreMinimal.h"
#include "SDICameraSettingsData.h"
#include "SDIBlendOption.h"
#include "SDICameraSettings.generated.h"

class UObject;
class ASDICorePlayerCameraManager;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICameraSettings : public FSDICameraSettingsData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSDIBlendOption BlendOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSDICameraSettingsData> InterpolatedCameraSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSDIBlendOption InterpolatedOption;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 ID;
    
    UPROPERTY(Transient)
    int32 LastID;
    
    UPROPERTY(Transient)
    float Timestamp;
    
    UPROPERTY(Transient)
    float Weight;
    
    UPROPERTY(Transient)
    float BlendSpeed;
    
    UPROPERTY(Transient)
    float InterpolatedAlpha;
    
    UPROPERTY(Transient)
    float InterpolatedFinalAlpha;
    
    UPROPERTY(Transient)
    bool bInterpolatedInitialized;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<ASDICorePlayerCameraManager> WeakCameraManager;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<UObject> WeakOwner;
    
public:
    FSDICameraSettings();
};

