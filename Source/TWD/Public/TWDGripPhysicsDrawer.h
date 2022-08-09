#pragma once
#include "CoreMinimal.h"
#include "TWDGripPhysicsActor.h"
#include "TWDGripPhysicsDrawer.generated.h"

class ATWDCharacter;

UCLASS(Blueprintable)
class TWD_API ATWDGripPhysicsDrawer : public ATWDGripPhysicsActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNonVRDrawerAutoOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonVROpenVelocity;
    
public:
    ATWDGripPhysicsDrawer();
    UFUNCTION(BlueprintCallable)
    bool NonVROpenDrawer(ATWDCharacter* Character);
    
};

