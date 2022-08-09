#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DefaultAttachment.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FDefaultAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<USceneComponent> Comp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<USceneComponent> Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName Socket;
    
    TWD_API FDefaultAttachment();
};

