#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SDICachedRigidBodyState.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct SDICOREPLUGIN_API FSDICachedRigidBodyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UPrimitiveComponent> PrimComp;
    
    UPROPERTY(Transient)
    TMap<FName, FRigidBodyState> RigidBodyStates;
    
public:
    FSDICachedRigidBodyState();
};

