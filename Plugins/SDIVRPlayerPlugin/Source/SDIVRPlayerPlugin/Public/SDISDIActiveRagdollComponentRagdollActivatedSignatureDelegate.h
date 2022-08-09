#pragma once
#include "CoreMinimal.h"
#include "SDISDIActiveRagdollComponentRagdollActivatedSignatureDelegate.generated.h"

class AActor;
class USDIActiveRagdollComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSDISDIActiveRagdollComponentRagdollActivatedSignature, AActor*, Actor, USDIActiveRagdollComponent*, Comp);

