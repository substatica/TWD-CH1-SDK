#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "SDICoreUtilityAITargetEntry.h"
#include "SDICoreUtilityAITarget.h"
#include "UObject/NoExportTypes.h"
#include "SDICoreUtilityAITargetList.h"
#include "ESDIUtilityAIDifficulty.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SDICoreUtilityAIState.generated.h"

class USDICoreUtilityAI;
class ACharacter;
class AGameMode;
class AActor;
class AController;
class USDICoreUtilityAIState;
class AHUD;
class UCanvas;

UCLASS(Blueprintable, NotPlaceable)
class SDICOREPLUGIN_API USDICoreUtilityAIState : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUsesTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUsesSecondaryTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSDICoreUtilityAITarget Target;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSDICoreUtilityAITarget SecondaryTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PlayerTargetPriorityModifier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AITargetPriorityModifier;
    
public:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<AGameMode>> ValidGames;
    
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<AGameMode>> InvalidGames;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    float Priority;
    
    UPROPERTY(Transient)
    float EnterStateTimestamp;
    
    UPROPERTY(Transient)
    float ExitStateTimestamp;
    
public:
    USDICoreUtilityAIState();
    UFUNCTION(BlueprintNativeEvent)
    bool UpdateMovement(float DeltaSeconds);
    
    UFUNCTION(BlueprintNativeEvent)
    bool UpdateAiming(float DeltaSeconds, UPARAM(Ref) float& inOutAimSpringK, UPARAM(Ref) float& inOutAimSpringDamp, UPARAM(Ref) float& inOutAimSpringMaxVel, UPARAM(Ref) bool& inOutbAllowOvershoot);
    
    UFUNCTION(BlueprintNativeEvent)
    bool UpdateActions(float DeltaSeconds);
    
    UFUNCTION(BlueprintPure)
    float TimeSinceDeactivation() const;
    
    UFUNCTION(BlueprintPure)
    float TimeSinceActivation() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void TickState(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetTarget(AActor* inTarget, const FSDICoreUtilityAITargetList& InTargetList, float DeltaSeconds, float InTargetPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryTarget(AActor* inTarget, const FSDICoreUtilityAITargetList& InTargetList, float DeltaSeconds, float InTargetPriority);
    
    UFUNCTION(BlueprintPure)
    bool IsActiveState() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void InitState();
    
    UFUNCTION(BlueprintPure)
    bool GetUtilityAIAndChar(USDICoreUtilityAI*& UtilityAI, ACharacter*& Char) const;
    
    UFUNCTION(BlueprintPure)
    USDICoreUtilityAI* GetUtilityAI() const;
    
    UFUNCTION(BlueprintNativeEvent)
    float GetTargetPriority(const FSDICoreUtilityAITargetEntry& inTarget, const FSDICoreUtilityAITargetList& InTargetList, const int32 inTargetIndex);
    
    UFUNCTION(BlueprintPure)
    float GetServerTimestamp() const;
    
    UFUNCTION(BlueprintNativeEvent)
    float GetSecondaryTargetPriority(const FSDICoreUtilityAITargetEntry& inTarget, const FSDICoreUtilityAITargetList& InTargetList, const int32 inTargetIndex);
    
    UFUNCTION(BlueprintPure)
    float GetPriority() const;
    
    UFUNCTION(BlueprintPure)
    ESDIUtilityAIDifficulty GetDifficulty() const;
    
    UFUNCTION(BlueprintPure)
    AController* GetController() const;
    
    UFUNCTION(BlueprintPure)
    ACharacter* GetChar() const;
    
    UFUNCTION(BlueprintPure)
    USDICoreUtilityAIState* GetActiveState() const;
    
    UFUNCTION(BlueprintNativeEvent)
    void ExitState(USDICoreUtilityAIState* NewState);
    
    UFUNCTION(BlueprintNativeEvent)
    void EnterState(USDICoreUtilityAIState* PrevState);
    
    UFUNCTION(BlueprintNativeEvent)
    float DrawHUD(FVector2D Pos, AHUD* HUD, UCanvas* Canvas, FVector ViewLocation, FRotator ViewRotation, FVector2D CanvasOrigin, FVector2D CanvasSize);
    
    UFUNCTION(BlueprintNativeEvent)
    void DifficultyUpdated(ESDIUtilityAIDifficulty NewDifficulty);
    
    UFUNCTION(BlueprintNativeEvent)
    void DestroyState();
    
    UFUNCTION(BlueprintNativeEvent)
    void ComputePriority(float DeltaSeconds);
    
    UFUNCTION(BlueprintPure)
    float ActiveTime() const;
    
};

