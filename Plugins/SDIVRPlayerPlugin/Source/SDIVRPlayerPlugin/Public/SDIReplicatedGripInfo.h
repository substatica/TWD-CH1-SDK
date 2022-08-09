#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "SDIReplicatedGripInfo.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIReplicatedGripInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    FString GripCompName;
    
    UPROPERTY(Transient)
    EControllerHand HandEnum;
    
    UPROPERTY(Transient)
    uint8 Percent;
    
    UPROPERTY(Transient)
    uint16 Twist;
    
    UPROPERTY(Transient)
    uint16 Swing1;
    
    UPROPERTY(Transient)
    uint16 Swing2;
    
    UPROPERTY(Transient)
    int32 ChangeCounter;
    
public:
    FSDIReplicatedGripInfo();
};

