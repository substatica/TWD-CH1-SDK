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

class AHUD;
class ACharacter;
class AGameMode;
class AActor;
class USDICoreUtilityAI;
class AController;
class USDICoreUtilityAIState;
class UCanvas;

UCLASS(Blueprintable, NotPlaceable)
class SDICOREPLUGIN_API USDICoreUtilityAIState : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsesTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsesSecondaryTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICoreUtilityAITarget Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSDICoreUtilityAITarget SecondaryTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerTargetPriorityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AITargetPriorityModifier;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AGameMode>> ValidGames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AGameMode>> InvalidGames;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EnterStateTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ExitStateTimestamp;
    
public:
    USDICoreUtilityAIState();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UpdateMovement(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UpdateAiming(float DeltaSeconds, UPARAM(Ref) float& inOutAimSpringK, UPARAM(Ref) float& inOutAimSpringDamp, UPARAM(Ref) float& inOutAimSpringMaxVel, UPARAM(Ref) bool& inOutbAllowOvershoot);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UpdateActions(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float TimeSinceDeactivation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float TimeSinceActivation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickState(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetTarget(AActor* inTarget, const FSDICoreUtilityAITargetList& InTargetList, float DeltaSeconds, float InTargetPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondaryTarget(AActor* inTarget, const FSDICoreUtilityAITargetList& InTargetList, float DeltaSeconds, float InTargetPriority);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUtilityAIAndChar(USDICoreUtilityAI*& UtilityAI, ACharacter*& Char) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USDICoreUtilityAI* GetUtilityAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetTargetPriority(const FSDICoreUtilityAITargetEntry& inTarget, const FSDICoreUtilityAITargetList& InTargetList, const int32 inTargetIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetServerTimestamp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetSecondaryTargetPriority(const FSDICoreUtilityAITargetEntry& inTarget, const FSDICoreUtilityAITargetList& InTargetList, const int32 inTargetIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESDIUtilityAIDifficulty GetDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AController* GetController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetChar() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USDICoreUtilityAIState* GetActiveState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExitState(USDICoreUtilityAIState* NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnterState(USDICoreUtilityAIState* PrevState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float DrawHUD(FVector2D Pos, AHUD* HUD, UCanvas* Canvas, FVector ViewLocation, FRotator ViewRotation, FVector2D CanvasOrigin, FVector2D CanvasSize);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DifficultyUpdated(ESDIUtilityAIDifficulty NewDifficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DestroyState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ComputePriority(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ActiveTime() const;
    
};

