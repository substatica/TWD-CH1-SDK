#pragma once
#include "CoreMinimal.h"
#include "SDITuningInventoryActor.h"
#include "ESDIWeaponAttachmentType.h"
#include "UObject/NoExportTypes.h"
#include "SDIWeaponAttachment.generated.h"

class ASDIWeaponActor;

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDIWeaponAttachment : public ASDITuningInventoryActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESDIWeaponAttachmentType AttachmentType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName AttachComponentName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FTransform AttachRelativeTransform;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAllowRemoval;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AttachDistance;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_RepWeaponOwner)
    ASDIWeaponActor* RepWeaponOwner;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ASDIWeaponActor* LocalWeaponOwner;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_bRepAttached)
    bool bRepAttached;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bLocalAttached;
    
public:
    ASDIWeaponAttachment();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void WeaponOwnerUpdated();
    
    UFUNCTION(BlueprintNativeEvent)
    void SetWeaponOwner(ASDIWeaponActor* NewOwner);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetWeaponOwner(ASDIWeaponActor* NewOwner);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerDetachFromWeapon();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerAttachToWeapon();
    
    UFUNCTION()
    void OnRep_RepWeaponOwner(ASDIWeaponActor* OldRepWeaponOwner);
    
    UFUNCTION()
    void OnRep_bRepAttached(bool OldbRepAttached);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsAttached() const;
    
    UFUNCTION(BlueprintPure)
    ASDIWeaponActor* GetWeaponOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DetachFromWeapon(bool bForce, bool bRemove, bool bReplicate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AttachToWeapon(bool bForce, bool bReplicate);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool AllowRemoval() const;
    
};

