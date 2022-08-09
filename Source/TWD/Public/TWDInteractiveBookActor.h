#pragma once
#include "CoreMinimal.h"
#include "TWDProp.h"
#include "TWDInteractiveBookActor.generated.h"

class ASDIPlayerHand;
class UArrowComponent;
class USkeletalMeshComponent;
class UMaterialInterface;
class UHapticFeedbackEffect_Base;
class USceneComponent;
class UTWDWidgetComponent;
class UCapsuleComponent;
class USDIPointGripComponent;
class UAkAudioEvent;
class UUserWidget;

UCLASS()
class TWD_API ATWDInteractiveBookActor : public ATWDProp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterialInterface* PageMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UHapticFeedbackEffect_Base* EdgeTouchHaptic;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LookConeAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float OpenLookConeAngleDelta;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* BookMesh;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UArrowComponent* Arrow;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* SpineRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTWDWidgetComponent* LeftPageWidget;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTWDWidgetComponent* RightPageWidget;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UCapsuleComponent* Capsule;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USDIPointGripComponent* PointGripLeft;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USDIPointGripComponent* PointGripRight;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* RightPageRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* LeftPageRoot;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    ASDIPlayerHand* GrabHand;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bBookOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* PageFlipSound;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bInteractPressed;
    
public:
    ATWDInteractiveBookActor();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateBookOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateBookClosed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPopulatePage(int32 PageIndex, UUserWidget* PageWidget);
    
public:
    UFUNCTION(BlueprintPure)
    USkeletalMeshComponent* GetBookMesh() const;
    
    UFUNCTION(BlueprintCallable)
    void CommitPages();
    
};

