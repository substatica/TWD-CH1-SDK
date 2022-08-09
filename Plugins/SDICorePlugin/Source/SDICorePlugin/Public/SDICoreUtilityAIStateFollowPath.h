#pragma once
#include "CoreMinimal.h"
#include "SDICoreUtilityAIStateWander.h"
#include "GameplayTagContainer.h"
#include "RFloatExp.h"
#include "UObject/NoExportTypes.h"
#include "SDICoreUtilityAIStateFollowPath.generated.h"

class ASDIPath;
class USDICoreUtilityAIStateFollowPath;

UCLASS(Blueprintable)
class SDICOREPLUGIN_API USDICoreUtilityAIStateFollowPath : public USDICoreUtilityAIStateWander {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRFloatExp PathPointRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PreferredTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 StartPathId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASDIPath* ChosenPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastPathId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentPathId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CurrentPathLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentPathLocRetries;
    
public:
    USDICoreUtilityAIStateFollowPath();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool UpdatePathLocation(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TransferPathTo(USDICoreUtilityAIStateFollowPath* NewState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetNextPathId(ASDIPath* Path, int32 ID, int32 PreviousId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ASDIPath* FindNewPath(int32& OutClosestId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearPath();
    
};

