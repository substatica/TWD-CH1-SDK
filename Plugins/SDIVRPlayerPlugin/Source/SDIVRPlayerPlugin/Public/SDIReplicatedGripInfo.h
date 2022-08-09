#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "SDIReplicatedGripInfo.generated.h"

USTRUCT(BlueprintType)
struct SDIVRPLAYERPLUGIN_API FSDIReplicatedGripInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString GripCompName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EControllerHand HandEnum;
    
    UPROPERTY(EditAnywhere, Transient)
    uint8 Percent;
    
    UPROPERTY(EditAnywhere, Transient)
    uint16 Twist;
    
    UPROPERTY(EditAnywhere, Transient)
    uint16 Swing1;
    
    UPROPERTY(EditAnywhere, Transient)
    uint16 Swing2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ChangeCounter;
    
public:
    FSDIReplicatedGripInfo();
};

