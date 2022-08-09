#pragma once
#include "CoreMinimal.h"
#include "SDICoreCharacterMovementComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/NetSerialization.h"
#include "SavedMove_SDICharacterAdvanced_MoveData.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDIPlayerHandMove.h"
#include "RFloat.h"
#include "SDICharacterAdvancedMovementMantleUpSettings.h"
#include "SDICharacterAdvancedMovementMantleOverSettings.h"
#include "Engine/NetSerialization.h"
#include "GameFramework/RootMotionSource.h"
#include "NetworkPredictionData_Server_SDICharacterAdvanced_Adjustment.h"
#include "Engine/NetSerialization.h"
#include "SDICharacterAdvancedMovementComponent.generated.h"

class UPrimitiveComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SDIVRPLAYERPLUGIN_API USDICharacterAdvancedMovementComponent : public USDICoreCharacterMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient)
    FSavedMove_SDICharacterAdvanced_MoveData MoveData;
    
    UPROPERTY(Transient)
    bool bLastClimbingFacingValid;
    
    UPROPERTY(Transient)
    FVector LastClimbingFacing;
    
    UPROPERTY(Transient)
    FVector LastBaseClimbingFacing;
    
    UPROPERTY(Transient)
    FVector LastClimbingFacingRightHandLocation;
    
    UPROPERTY(Transient)
    FVector LastClimbingFacingLeftHandLocation;
    
    UPROPERTY(Transient)
    FVectorRK4SpringInterpolator MovementSpring;
    
    UPROPERTY(Transient)
    FFloatRK4SpringInterpolator YawSpring;
    
    UPROPERTY(Transient)
    bool bWantsToCrawl;
    
    UPROPERTY(Transient)
    bool bCrawlMaintainsBaseLocation;
    
    UPROPERTY(Transient)
    FHitResult TeleportHitResult;
    
    UPROPERTY(Transient)
    bool bDesiredTeleportTransformValid;
    
    UPROPERTY(Transient)
    bool bTeleportCrouching;
    
    UPROPERTY(Transient)
    FTransform DesiredTeleportTransform;
    
    UPROPERTY(Transient)
    FTransform DesiredRelativeTeleportTransform;
    
    UPROPERTY(Transient)
    bool bTeleporting;
    
    UPROPERTY(Transient)
    bool bTeleportingCancelled;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MaxWalkSpeedCrawl;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CrawlHalfHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanWalkOffLedgesWhenCrawling;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanCrawl;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanClimb;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanGrabAndPull;
    
    UPROPERTY(EditDefaultsOnly)
    float SurfaceGripMaxPhysicsLinearVel;
    
    UPROPERTY(EditDefaultsOnly)
    float SurfaceGripMaxPhysicsAngularVelDeg;
    
    UPROPERTY(EditDefaultsOnly)
    float GrabAndPullSpringStiffness;
    
    UPROPERTY(EditDefaultsOnly)
    float GrabAndPullSpringDamp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRFloat GrabAndPullEyeHeightOffsetRange;
    
    UPROPERTY(EditDefaultsOnly)
    float ClimbingSpringStiffness;
    
    UPROPERTY(EditDefaultsOnly)
    float ClimbingSpringDamp;
    
    UPROPERTY(EditDefaultsOnly)
    float ClimbingYawSpringStiffness;
    
    UPROPERTY(EditDefaultsOnly)
    float ClimbingYawSpringDamp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bClimbingFacingUseHandLocations;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bClimbingFacingInvertHandLocation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ClimbingFacingHandLocationLimitYawDeg;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ClimbingScanDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanMantleOver;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanMantleUp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDICharacterAdvancedMovementMantleOverSettings ClimbingMantleOver;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDICharacterAdvancedMovementMantleUpSettings ClimbingMantleUp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDICharacterAdvancedMovementMantleOverSettings WalkingMantleOver;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDICharacterAdvancedMovementMantleUpSettings WalkingMantleUp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDICharacterAdvancedMovementMantleOverSettings NonVRMantleOver;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDICharacterAdvancedMovementMantleUpSettings NonVRMantleUp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ClimbingMantleVerticalTestDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ClimbingMantleMaxDistanceToFloor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ClimbingMantleCheckStep;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ClimbingAutoMantleVerticalTestDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ClimbingMantleCheckSideStep;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ClimbingMantleCheckSideStepCapsuleRadiusMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WalkingMantleVerticalTestDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WalkingMantleMaxDistanceToFloor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WalkingMantleCheckStep;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WalkingAutoMantleVerticalTestDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WalkingMantleCheckSideStep;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WalkingMantleCheckSideStepCapsuleRadiusMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float NonVRMantleVerticalTestDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float NonVRMantleMaxDistanceToFloor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float NonVRMantleCheckStep;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float NonVRMantleCheckSideStep;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float NonVRMantleCheckSideStepCapsuleRadiusMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float NonVRMantleMinAnalogInput;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float NonVRMantleInputAngleDeg;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSDIPlayerHandMove MantleHandMove;
    
public:
    USDICharacterAdvancedMovementComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerMoveSDI(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, const FSavedMove_SDICharacterAdvanced_MoveData& ServerMoveData, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerMoveOldSDI(float OldTimeStamp, FVector_NetQuantize10 OldAccel, uint8 OldMoveFlags, const FSavedMove_SDICharacterAdvanced_MoveData& OldServerMoveData);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerMoveDualSDI(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, const FSavedMove_SDICharacterAdvanced_MoveData& PendingServerMoveData, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, const FSavedMove_SDICharacterAdvanced_MoveData& NewServerMoveData, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void ServerMoveDualHybridRootMotionSDI(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, const FSavedMove_SDICharacterAdvanced_MoveData& PendingServerMoveData, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, const FSavedMove_SDICharacterAdvanced_MoveData& NewServerMoveData, uint8 ClientRoll, uint32 View, UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);
    
    UFUNCTION(BlueprintPure)
    bool IsTeleporting() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMantlingUp() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMantlingOver() const;
    
    UFUNCTION(BlueprintPure)
    bool IsMantling() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGrabbingAndPulling() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCrawling() const;
    
    UFUNCTION(BlueprintPure)
    bool IsClimbing() const;
    
    UFUNCTION(BlueprintCallable)
    void GetGripState(bool& bLeftGripping, bool& bLeftClimbing, bool& bRightGripping, bool& bRightClimbing);
    
    UFUNCTION(Client, Unreliable)
    void ClientVeryShortAdjustPositionSDI(float Timestamp, FVector NewLoc, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode, FNetworkPredictionData_Server_SDICharacterAdvanced_Adjustment PendingAdjustmentSDI);
    
    UFUNCTION(Client, Unreliable)
    void ClientAdjustRootMotionSourcePositionSDI(float Timestamp, FRootMotionSourceGroup ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode, FNetworkPredictionData_Server_SDICharacterAdvanced_Adjustment PendingAdjustmentSDI);
    
    UFUNCTION(Client, Unreliable)
    void ClientAdjustRootMotionPositionSDI(float Timestamp, float ServerMontageTrackPosition, FVector ServerLoc, FVector_NetQuantizeNormal ServerRotation, float ServerVelZ, UPrimitiveComponent* ServerBase, FName ServerBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode, FNetworkPredictionData_Server_SDICharacterAdvanced_Adjustment PendingAdjustmentSDI);
    
    UFUNCTION(Client, Unreliable)
    void ClientAdjustPositionSDI(float Timestamp, FVector NewLoc, FVector NewVel, UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, uint8 ServerMovementMode, FNetworkPredictionData_Server_SDICharacterAdvanced_Adjustment PendingAdjustmentSDI);
    
    UFUNCTION(BlueprintCallable)
    bool CheckForMantle(float VerticalTestDistance, FHitResult& OutMantleTargetInfo, bool& bMantleOver, bool& bMantleRequireCrouch, bool bCheckMantleUp, bool bCheckMantleOver, FVector MotionDirection);
    
    UFUNCTION(BlueprintCallable)
    void CancelTeleport();
    
    UFUNCTION(BlueprintCallable)
    bool CancelClimbNonVR();
    
    UFUNCTION(BlueprintCallable)
    bool AttemptTeleport(const FTransform& DesiredTransform, const FHitResult& HitResult);
    
};

