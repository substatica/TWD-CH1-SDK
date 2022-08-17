#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SDISkinnedTuningInventoryActor.h"
#include "SDIInitialWeaponAttachment.h"
#include "ESDIWeaponAttachmentType.h"
#include "SDIWeaponActor.generated.h"

class ASDIWeaponAttachment;
class AActor;

UCLASS(Blueprintable)
class SDIVRPLAYERPLUGIN_API ASDIWeaponActor : public ASDISkinnedTuningInventoryActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ASDIWeaponAttachment>> ValidAttachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDIInitialWeaponAttachment> InitialAttachments;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepSpawnedActors, meta=(AllowPrivateAccess=true))
    TArray<AActor*> RepSpawnedActors;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepAttachments, meta=(AllowPrivateAccess=true))
    TArray<ASDIWeaponAttachment*> RepAttachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSwappingAttachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedActors;
    
public:
    ASDIWeaponActor(const FObjectInitializer& ObjectInitializer);
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void WeaponAttachmentDetached(ASDIWeaponAttachment* Attachment, bool bRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void WeaponAttachmentAttached(ASDIWeaponAttachment* Attachment);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRemoveWeaponAttachment(TSubclassOf<ASDIWeaponAttachment> AttachmentClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRemoveAllWeaponAttachments();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDetachWeaponAttachment(TSubclassOf<ASDIWeaponAttachment> AttachmentClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDetachAllWeaponAttachments();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAttachWeaponAttachment(TSubclassOf<ASDIWeaponAttachment> AttachmentClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAddWeaponAttachmentInstance(ASDIWeaponAttachment* Attachment);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAddWeaponAttachment(TSubclassOf<ASDIWeaponAttachment> AttachmentClass);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveWeaponAttachment(TSubclassOf<ASDIWeaponAttachment> AttachmentClass);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSpawnedActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllWeaponAttachments();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RepSpawnedActors(const TArray<AActor*>& OldRepSpawnedActors);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RepAttachments(const TArray<ASDIWeaponAttachment*>& OldRepAttachments);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidAttachment(TSubclassOf<ASDIWeaponAttachment> AttachmentClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttachmentAttached(TSubclassOf<ASDIWeaponAttachment> AttachmentClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetValidAttachmentsByType(ESDIWeaponAttachmentType Type, TArray<TSubclassOf<ASDIWeaponAttachment>>& AttachmentClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAttachmentsByType(ESDIWeaponAttachmentType Type, TArray<ASDIWeaponAttachment*>& Attachments, bool bAttachedOnly) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAttachments(TArray<ASDIWeaponAttachment*>& Attachments, bool bAttachedOnly) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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

