#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDISkinnedTuningInventoryActor.h"
#include "SDIInitialWeaponAttachment.h"
#include "ESDIWeaponAttachmentType.h"
#include "SDIWeaponActor.generated.h"

class ASDIWeaponAttachment;
class AActor;

UCLASS()
class SDIVRPLAYERPLUGIN_API ASDIWeaponActor : public ASDISkinnedTuningInventoryActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSubclassOf<ASDIWeaponAttachment>> ValidAttachments;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TArray<FSDIInitialWeaponAttachment> InitialAttachments;
    
private:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RepSpawnedActors)
    TArray<AActor*> RepSpawnedActors;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RepAttachments)
    TArray<ASDIWeaponAttachment*> RepAttachments;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bSwappingAttachments;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<AActor*> SpawnedActors;
    
public:
    ASDIWeaponActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void WeaponAttachmentDetached(ASDIWeaponAttachment* Attachment, bool bRemove);
    
    UFUNCTION(BlueprintNativeEvent)
    void WeaponAttachmentAttached(ASDIWeaponAttachment* Attachment);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRemoveWeaponAttachment(TSubclassOf<ASDIWeaponAttachment> AttachmentClass);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRemoveAllWeaponAttachments();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerDetachWeaponAttachment(TSubclassOf<ASDIWeaponAttachment> AttachmentClass);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerDetachAllWeaponAttachments();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerAttachWeaponAttachment(TSubclassOf<ASDIWeaponAttachment> AttachmentClass);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerAddWeaponAttachmentInstance(ASDIWeaponAttachment* Attachment);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerAddWeaponAttachment(TSubclassOf<ASDIWeaponAttachment> AttachmentClass);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveWeaponAttachment(TSubclassOf<ASDIWeaponAttachment> AttachmentClass);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSpawnedActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllWeaponAttachments();
    
protected:
    UFUNCTION()
    void OnRep_RepSpawnedActors(const TArray<AActor*>& OldRepSpawnedActors);
    
    UFUNCTION()
    void OnRep_RepAttachments(const TArray<ASDIWeaponAttachment*>& OldRepAttachments);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsValidAttachment(TSubclassOf<ASDIWeaponAttachment> AttachmentClass) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAttachmentAttached(TSubclassOf<ASDIWeaponAttachment> AttachmentClass) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetValidAttachmentsByType(ESDIWeaponAttachmentType Type, TArray<TSubclassOf<ASDIWeaponAttachment>>& AttachmentClasses) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAttachmentsByType(ESDIWeaponAttachmentType Type, TArray<ASDIWeaponAttachment*>& Attachments, bool bAttachedOnly) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAttachments(TArray<ASDIWeaponAttachment*>& Attachments, bool bAttachedOnly) const;
    
    UFUNCTION(BlueprintPure)
    ASDIWeaponAttachment* GetAttachment(TSubclassOf<ASDIWeaponAttachment> AttachmentClass) const;
    
    UFUNCTION(BlueprintCallable)
    void DetachWeaponAttachment(TSubclassOf<ASDIWeaponAttachment> AttachmentClass);
    
    UFUNCTION(BlueprintCallable)
    void DetachAllWeaponAttachments();
    
    UFUNCTION(BlueprintCallable)
    bool AttachWeaponAttachment(TSubclassOf<ASDIWeaponAttachment> AttachmentClass);
    
    UFUNCTION(BlueprintCallable)
    bool AddWeaponAttachmentInstance(ASDIWeaponAttachment* Attachment, bool bAttach);
    
    UFUNCTION(BlueprintCallable)
    bool AddWeaponAttachment(TSubclassOf<ASDIWeaponAttachment> AttachmentClass, bool bAttach);
    
    UFUNCTION(BlueprintCallable)
    void AddSpawnedActor(AActor* Actor);
    
};

