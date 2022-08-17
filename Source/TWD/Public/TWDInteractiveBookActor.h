#pragma once
#include "CoreMinimal.h"
#include "TWDProp.h"
#include "TWDInteractiveBookActor.generated.h"

class UArrowComponent;
class USceneComponent;
class UMaterialInterface;
class UHapticFeedbackEffect_Base;
class USkeletalMeshComponent;
class UTWDWidgetComponent;
class UCapsuleComponent;
class USDIPointGripComponent;
class ASDIPlayerHand;
class UAkAudioEvent;
class UUserWidget;

UCLASS(Blueprintable)
class TWD_API ATWDInteractiveBookActor : public ATWDProp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PageMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHapticFeedbackEffect_Base* EdgeTouchHaptic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookConeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenLookConeAngleDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BookMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* Arrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SpineRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTWDWidgetComponent* LeftPageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTWDWidgetComponent* RightPageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* Capsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDIPointGripComponent* PointGripLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USDIPointGripComponent* PointGripRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RightPageRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* LeftPageRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASDIPlayerHand* GrabHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBookOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PageFlipSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInteractPressed;
    
public:
    ATWDInteractiveBookActor(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateBookOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateBookClosed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPopulatePage(int32 PageIndex, UUserWidget* PageWidget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetBookMesh() const;
    
    UFUNCTION(BlueprintCallable)
    void CommitPages();
    
};

