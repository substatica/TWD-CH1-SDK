#pragma once
#include "CoreMinimal.h"
#include "TWDGripPhysicsActor.h"
#include "TWDGripPhysicsDrawer.generated.h"

class ATWDCharacter;

UCLASS()
class TWD_API ATWDGripPhysicsDrawer : public ATWDGripPhysicsActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    bool bIsOpen;
    
    UPROPERTY(Transient)
    bool bNonVRDrawerAutoOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float NonVROpenVelocity;
    
public:
    ATWDGripPhysicsDrawer();
    UFUNCTION()
    bool NonVROpenDrawer(ATWDCharacter* Character);
    
};

