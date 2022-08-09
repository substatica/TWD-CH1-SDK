#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InputCoreTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIAttachmentInfo.h"
#include "SDIReplicatedGripInfo.h"
#include "UObject/NoExportTypes.h"
#include "SDIHeldActorHolderInterface.generated.h"

class ASDIHeldActor;
class USceneComponent;
class ASDIPlayerHand;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class SDIVRPLAYERPLUGIN_API USDIHeldActorHolderInterface : public UInterface {
    GENERATED_BODY()
};

class SDIVRPLAYERPLUGIN_API ISDIHeldActorHolderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void SetHeldActor(EControllerHand hand, ASDIHeldActor* HeldActor) PURE_VIRTUAL(SetHeldActor,);
    
    UFUNCTION()
    virtual void ServerSetHeldBy(ASDIHeldActor* HeldActor, const FSDIReplicatedGripInfo& PrimaryGrip, const FSDIReplicatedGripInfo& SecondaryGrip) PURE_VIRTUAL(ServerSetHeldBy,);
    
    UFUNCTION()
    virtual void ServerClearHeldBy(ASDIHeldActor* HeldActor, const FTransform& Transform, const FVector& ThrowVelocity, const FVector& AngularVelocityDeg, const FSDIAttachmentInfo& AttachInfo, bool bCustomThrowPhysicsEngaged) PURE_VIRTUAL(ServerClearHeldBy,);
    
    UFUNCTION(BlueprintCallable)
    virtual USceneComponent* GetThirdPersonHeldActorAttachPoint(EControllerHand hand, FName& SocketName) const PURE_VIRTUAL(GetThirdPersonHeldActorAttachPoint, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual ASDIPlayerHand* GetHolderPlayerHand(EControllerHand hand) const PURE_VIRTUAL(GetHolderPlayerHand, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual ASDIHeldActor* GetHeldActor(EControllerHand hand) const PURE_VIRTUAL(GetHeldActor, return NULL;);
    
};

