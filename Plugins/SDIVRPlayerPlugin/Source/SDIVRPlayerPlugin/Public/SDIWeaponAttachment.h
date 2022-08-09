#pragma once
#include "CoreMinimal.h"
#include "ESDIWeaponAttachmentType.h"
#include "SDITuningInventoryActor.h"
#include "UObject/NoExportTypes.h"
#include "SDIWeaponAttachment.generated.h"

class ASDIWeaponActor;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIWeaponAttachment : public ASDITuningInventoryActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESDIWeaponAttachmentType AttachmentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform AttachRelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRemoval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttachDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepWeaponOwner, meta=(AllowPrivateAccess=true))
    ASDIWeaponActor* RepWeaponOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASDIWeaponActor* LocalWeaponOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bRepAttached, meta=(AllowPrivateAccess=true))
    bool bRepAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLocalAttached;
    
public:
    ASDIWeaponAttachment();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void WeaponOwnerUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWeaponOwner(ASDIWeaponActor* NewOwner);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetWeaponOwner(ASDIWeaponActor* NewOwner);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDetachFromWeapon();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAttachToWeapon();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepWeaponOwner(ASDIWeaponActor* OldRepWeaponOwner);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bRepAttached(bool OldbRepAttached);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttached() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASDIWeaponActor* GetWeaponOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DetachFromWeapon(bool bForce, bool bRemove, bool bReplicate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AttachToWeapon(bool bForce, bool bReplicate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool AllowRemoval() const;
    
};

