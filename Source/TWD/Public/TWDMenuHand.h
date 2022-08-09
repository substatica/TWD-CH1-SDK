#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TWDMenuHand.generated.h"

class UStaticMeshComponent;
class UMotionControllerComponent;
class USkeletalMeshComponent;
class UWidgetInteractionComponent;
class USceneComponent;

UCLASS()
class TWD_API ATWDMenuHand : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UMotionControllerComponent* MotionControllerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* HandMeshComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UStaticMeshComponent* MenuPointerComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UWidgetInteractionComponent* WidgetInteractionComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* HitIndicatorComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString ClickInputName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString NonVRClickInputName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bClicking;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator HMDControllerRotOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FVector HMDControllerLocOffset;
    
public:
    ATWDMenuHand();
};

