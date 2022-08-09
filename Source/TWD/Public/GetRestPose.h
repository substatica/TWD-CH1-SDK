#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "GetRestPose.generated.h"

class USkeletalMeshComponent;

UCLASS(BlueprintType)
class UGetRestPose : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGetRestPose();
    UFUNCTION(BlueprintCallable)
    static FTransform UGetRGetRefPoseBoneTransforms(USkeletalMeshComponent* SkelMesh, FName BoneName);
    
};

