#pragma once
#include "CoreMinimal.h"
#include "SDISDIActiveRagdollComponentRagdollDeactivatedSignatureDelegate.generated.h"

class AActor;
class USDIActiveRagdollComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSDISDIActiveRagdollComponentRagdollDeactivatedSignature, AActor*, Actor, USDIActiveRagdollComponent*, Comp);

