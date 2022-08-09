#pragma once
#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "SDIComponentReplacement.h"
#include "UObject/NoExportTypes.h"
#include "SDIWeaponFirearmADSComponent.generated.h"

class USceneComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDIVRPLAYERPLUGIN_API USDIWeaponFirearmADSComponent : public UArrowComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bAllowAssistance;
    
    UPROPERTY(EditAnywhere)
    float EngageEyeDeltaDegrees;
    
    UPROPERTY(EditAnywhere)
    float DisengageEyeDeltaDegrees;
    
    UPROPERTY(EditAnywhere)
    float MaxHMDDeltaDegrees;
    
    UPROPERTY(EditAnywhere)
    float MinTime;
    
    UPROPERTY(EditAnywhere)
    float MaxEngageSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxDisengageSpeed;
    
    UPROPERTY(EditAnywhere)
    float MovementSmoothMinSpeed;
    
    UPROPERTY(EditAnywhere)
    float MovementSmoothMaxSpeed;
    
    UPROPERTY(EditAnywhere)
    float CorrectionMinOffset;
    
    UPROPERTY(EditAnywhere)
    float CorrectionMaxOffset;
    
    UPROPERTY(EditAnywhere)
    float CorrectionMinSpeed;
    
    UPROPERTY(EditAnywhere)
    float CorrectionMaxSpeed;
    
    UPROPERTY(Transient)
    FSDIComponentReplacement ComponentAttachment;
    
public:
    USDIWeaponFirearmADSComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateAttachmentInfo(USceneComponent* OldParent, USceneComponent* NewParent, const FName& NewParentSocketName);
    
    UFUNCTION(BlueprintPure)
    bool IsADS() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetADSTransform() const;
    
};

