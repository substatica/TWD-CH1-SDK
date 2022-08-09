#pragma once
#include "CoreMinimal.h"
#include "SDIVRPlayerUtil.h"
#include "UObject/NoExportTypes.h"
#include "EFaction.h"
#include "EFactionReaction.h"
#include "UObject/NoExportTypes.h"
#include "EDemoModeType.h"
#include "DialogueLine.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "Engine/EngineTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "ETWDCharacterHitRegion.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TWDUtil.generated.h"

class USkeletalMeshComponent;
class UTWDMapManager;
class UObject;
class ASDIHeldActor;
class UTWDGameProgression;
class UAkAudioEvent;
class AActor;
class UBTNode;
class UAkComponent;
class UTWDGameInstance;
class UDataTable;
class UCurveFloat;
class ATWDCharacter;
class UPrimitiveComponent;
class UTWDGameEntitlements;
class UTWDGameAchievements;
class ATWDPlayerCharacter;
class UTWDPlayerBuffManager;
class UBlendSpaceBase;

UCLASS(Blueprintable)
class UTWDUtil : public USDIVRPlayerUtil {
    GENERATED_BODY()
public:
    UTWDUtil();
    UFUNCTION(BlueprintCallable)
    static void UpdateSkeletalMeshCollision(USkeletalMeshComponent* Mesh, const TArray<FName>& DisabledBones, const TArray<FName>& EnabledBones, TArray<int32>& EnabledBonesOut, bool bDisableStrictlyBelow);
    
    UFUNCTION(BlueprintCallable)
    static void SwitchOnFactionReactionToPlayer(const UObject* WorldContextObject, EFaction Faction, EFactionReaction& Reactions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool PublicCheatsAllowed();
    
    UFUNCTION(BlueprintCallable)
    static bool PostAkEvent(UAkAudioEvent* AudioEvent, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool PlaySoundObjectAttached(AActor* AttachActor, UObject* SoundObj);
    
    UFUNCTION(BlueprintCallable)
    static bool PlaySoundObjectAtLocation(UObject* WorldContextObject, UObject* SoundObj, const FVector& Location);
    
    UFUNCTION(BlueprintPure)
    static FRotator OrientToNormal(const FVector& Normal, TEnumAsByte<EAxis::Type> OrientAxis, FRotator InRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBlackboardKeySelector MakeBlackboardKeySelector(UBTNode* NodeOwner, FName KeyName);
    
    UFUNCTION(BlueprintCallable)
    static void LoadDialogueLine(UPARAM(Ref) FDialogueLine& DialogueLine);
    
    UFUNCTION(BlueprintCallable)
    static void LoadDataTablesAsDialogueLines(const TArray<UDataTable*>& DataTables);
    
    UFUNCTION(BlueprintCallable)
    static FVector K2ComputeProjectileAimAssistanceTargetHead(UObject* WorldContextObject, const FVector& StartLocation, const FVector& InitialVelocity, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<ECollisionChannel> CollisionChannel, float PathCollisionRadius, float PathCollisionTime, float TargetRadius, const UCurveFloat* TargetRadiusCurve, float TargetZOffset, const UCurveFloat* TargetZOffsetCurve, float MinResultSpeed, bool bAdjustForTargetVelocity, float DebugRenderTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFriendlyInLOF(ATWDCharacter* Shooter, ATWDCharacter* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCombatEnemy(const ATWDCharacter* RelationSubject, const ATWDCharacter* RelationObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCombatAlly(const ATWDCharacter* RelationSubject, const ATWDCharacter* RelationObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasLOS(ATWDCharacter* Character, UPrimitiveComponent* ComponentToTest);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasActiveAkEvents(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTWDMapManager* GetTWDMapManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTWDGameProgression* GetTWDGameProgression(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTWDGameInstance* GetTWDGameInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTWDGameEntitlements* GetTWDGameEntitlements(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTWDGameAchievements* GetTWDGameAchievements(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBox GetTargetBounds(const USkeletalMeshComponent* Target, FName TargetSocketName);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UDataTable*> GetReferencedDataTables(const FName PackageName);
    
    UFUNCTION(BlueprintCallable)
    static ATWDPlayerCharacter* GetLocalPlayerCharacter(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UTWDPlayerBuffManager* GetHoldingPlayerBuffManager(const ASDIHeldActor* HeldActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EDemoModeType GetDemoMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetCombatRelation(const ATWDCharacter* RelationSubject, const ATWDCharacter* RelationObject, bool& bIsAlly, bool& bIsEnemy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ETWDCharacterHitRegion GetCharacterHitRegion(USkeletalMeshComponent* Mesh, FName BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetBuildConfiguration(FString& outConfiguration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetAnimationLength(UBlendSpaceBase* BlendSpace, FVector BlendInput);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetActiveStream(const UObject* WorldContextObject, bool& bValidStream, FRandomStream& ActiveStream);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FormatTextForGender(const UObject* WorldContextObject, FText InText);
    
    UFUNCTION(BlueprintCallable)
    static void EnableAutoSaving(const UObject* WorldContextObject, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    static void DisableAutoSavingForDuration(const UObject* WorldContextObject, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void DisableAutoSaving(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DebugMenuAllowed();
    
    UFUNCTION(BlueprintCallable)
    static void CreateNoise(AActor* Instigator, const FVector& Location, float Radius, float VolumeMultiplier, UAkAudioEvent* AudioEvent, UAkComponent* InAkComponent, FName Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ClampPointToCapsule(const FVector& Point, const FTransform& CapsuleTransform, float CapsuleHalfHeight, float CapsuleRadius, float FudgeFactor);
    
    UFUNCTION(BlueprintCallable)
    static void CheckPoint(const UObject* WorldContextObject, bool bBeforeThisMoment);
    
    UFUNCTION(BlueprintCallable)
    static void ApplySphericalRadiusImpulses(UObject* WorldContextObject, const FVector& Location, float ImpulseRadius, float ImpulseStrength, const TArray<AActor*>& ActorsToIgnore, TEnumAsByte<ERadialImpulseFalloff> FalloffMode);
    
    UFUNCTION(BlueprintCallable)
    static void AddSuspendedLevelSaveContext(const UObject* WorldContextObject, const FString& SaveContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBox Add(FBox A, FBox B);
    
};

