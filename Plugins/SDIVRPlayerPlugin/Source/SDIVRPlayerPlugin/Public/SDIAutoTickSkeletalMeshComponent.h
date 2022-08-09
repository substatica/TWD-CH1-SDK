#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "SDIAutoTickSkeletalMeshComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDIVRPLAYERPLUGIN_API USDIAutoTickSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool bAlwaysTick;
    
    UPROPERTY(EditDefaultsOnly)
    float ExtraTickTime;
    
public:
    USDIAutoTickSkeletalMeshComponent();
    UFUNCTION()
    void DisableTickFromTimer();
    
};

