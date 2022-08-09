#pragma once
#include "CoreMinimal.h"
#include "SDIVRPlayerUtil.h"
#include "UObject/NoExportTypes.h"
#include "EFactionReaction.h"
#include "EFaction.h"
#include "Chaos/ChaosEngineInterface.h"
#include "DialogueLine.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EDemoModeType.h"
#include "ETWDCharacterHitRegion.h"
#include "UObject/NoExportTypes.h"
#include "TWDUtil.generated.h"

class UTWDGameEntitlements;
class USkeletalMeshComponent;
class UObject;
class AActor;
class UAkAudioEvent;
class UDataTable;
class UBTNode;
class UTWDMapManager;
class UCurveFloat;
class ATWDPlayerCharacter;
class ATWDCharacter;
class UPrimitiveComponent;
class UTWDGameProgression;
class UTWDGameInstance;
class UTWDGameAchievements;
class UTWDPlayerBuffManager;
class ASDIHeldActor;
class UBlendSpaceBase;
class UAkComponent;

UCLASS()
class UTWDUtil : public USDIVRPlayerUtil {
    GENERATED_BODY()
public:
    UTWDUtil();
    UFUNCTION(BlueprintCallable)
    static void UpdateSkeletalMeshCollision(USkeletalMeshComponent* Mesh, const TArray<FName>& DisabledBones, const TArray<FName>& EnabledBones, TArray<int32>& EnabledBonesOut, bool bDisableStrictlyBelow);
    
    UFUNCTION(BlueprintCallable)
    static void SwitchOnFactionReactionToPlayer(const UObject* WorldContextObject, EFaction Faction, EFactionReaction& Reactions);
    
    UFUNCTION(BlueprintPure)
    static bool PublicCheatsAllowed();
    
    UFUNCTION(BlueprintCallable)
    static bool PostAkEvent(UAkAudioEvent* AudioEvent, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool PlaySoundObjectAttached(AActor* AttachActor, UObject* SoundObj);
    
    UFUNCTION(BlueprintCallable)
    static bool PlaySoundObjectAtLocation(UObject* WorldContextObject, UObject* SoundObj, const FVector& Location);
    
    UFUNCTION(BlueprintPure)
    static FRotator OrientToNormal(const FVector& Normal, TEnumAsByte<EAxis::Type> OrientAxis, FRotator InRotation);
    
    UFUNCTION(BlueprintPure)
    static FBlackboardKeySelector MakeBlackboardKeySelector(UBTNode* NodeOwner, FName KeyName);
    
    UFUNCTION(BlueprintCallable)
    static void LoadDialogueLine(UPARAM(Ref) FDialogueLine& DialogueLine);
    
    UFUNCTION()
    static void LoadDataTablesAsDialogueLines(const TArray<UDataTable*>& DataTables);
    
    UFUNCTION(BlueprintCallable)
    static FVector K2ComputeProjectileAimAssistanceTargetHead(UObject* WorldContextObject, const FVector& StartLocation, const FVector& InitialVelocity, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<ECollisionChannel> CollisionChannel, float PathCollisionRadius, float PathCollisionTime, float TargetRadius, const UCurveFloat* TargetRadiusCurve, float TargetZOffset, const UCurveFloat* TargetZOffsetCurve, float MinResultSpeed, bool bAdjustForTargetVelocity, float DebugRenderTime);
    
    UFUNCTION(BlueprintPure)
    static bool IsFriendlyInLOF(ATWDCharacter* Shooter, ATWDCharacter* Target);
    
    UFUNCTION(BlueprintPure)
    static bool IsCombatEnemy(const ATWDCharacter* RelationSubject, const ATWDCharacter* RelationObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsCombatAlly(const ATWDCharacter* RelationSubject, const ATWDCharacter* RelationObject);
    
    UFUNCTION(BlueprintPure)
    static bool HasLOS(ATWDCharacter* Character, UPrimitiveComponent* ComponentToTest);
    
    UFUNCTION(BlueprintPure)
    static bool HasActiveAkEvents(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static UTWDMapManager* GetTWDMapManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UTWDGameProgression* GetTWDGameProgression(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UTWDGameInstance* GetTWDGameInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UTWDGameEntitlements* GetTWDGameEntitlements(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UTWDGameAchievements* GetTWDGameAchievements(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FBox GetTargetBounds(const USkeletalMeshComponent* Target, FName TargetSocketName);
    
    UFUNCTION()
    static TArray<UDataTable*> GetReferencedDataTables(const FName PackageName);
    
    UFUNCTION(BlueprintCallable)
    static ATWDPlayerCharacter* GetLocalPlayerCharacter(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UTWDPlayerBuffManager* GetHoldingPlayerBuffManager(const ASDIHeldActor* HeldActor);
    
    UFUNCTION(BlueprintPure)
    static EDemoModeType GetDemoMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static void GetCombatRelation(const ATWDCharacter* RelationSubject, const ATWDCharacter* RelationObject, bool& bIsAlly, bool& bIsEnemy);
    
    UFUNCTION(BlueprintPure)
    static ETWDCharacterHitRegion GetCharacterHitRegion(USkeletalMeshComponent* Mesh, FName BoneName);
    
    UFUNCTION(BlueprintPure)
    static void GetBuildConfiguration(FString& outConfiguration);
    
    UFUNCTION(BlueprintPure)
    static float GetAnimationLength(UBlendSpaceBase* BlendSpace, FVector BlendInput);
    
    UFUNCTION(BlueprintPure)
    static void GetActiveStream(const UObject* WorldContextObject, bool& bValidStream, FRandomStream& ActiveStream);
    
    UFUNCTION(BlueprintPure)
    static FText FormatTextForGender(const UObject* WorldContextObject, FText InText);
    
    UFUNCTION(BlueprintCallable)
    static void EnableAutoSaving(const UObject* WorldContextObject, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    static void DisableAutoSavingForDuration(const UObject* WorldContextObject, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void DisableAutoSaving(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool DebugMenuAllowed();
    
    UFUNCTION(BlueprintCallable)
    static void CreateNoise(AActor* Instigator, const FVector& Location, float Radius, float VolumeMultiplier, UAkAudioEvent* AudioEvent, UAkComponent* InAkComponent, FName Tag);
    
    UFUNCTION(BlueprintPure)
    static FVector ClampPointToCapsule(const FVector& Point, const FTransform& CapsuleTransform, float CapsuleHalfHeight, float CapsuleRadius, float FudgeFactor);
    
    UFUNCTION(BlueprintCallable)
    static void CheckPoint(const UObject* WorldContextObject, bool bBeforeThisMoment);
    
    UFUNCTION(BlueprintCallable)
    static void ApplySphericalRadiusImpulses(UObject* WorldContextObject, const FVector& Location, float ImpulseRadius, float ImpulseStrength, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<ERadialImpulseFalloff> FalloffMode);
    
    UFUNCTION(BlueprintCallable)
    static void AddSuspendedLevelSaveContext(const UObject* WorldContextObject, const FString& SaveContext);
    
    UFUNCTION(BlueprintPure)
    static FBox Add(FBox A, FBox B);
    
};

