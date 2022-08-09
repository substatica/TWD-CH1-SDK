#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "TWDDialogueWidgetSnapTarget.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UTWDDialogueWidgetSnapTarget : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnapThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
public:
    UTWDDialogueWidgetSnapTarget();
    UFUNCTION(BlueprintCallable)
    void SetSnapThreshold(float NewThreshold);
    
    UFUNCTION(BlueprintCallable)
    void SetOffset(FVector NewOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bNewEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSnapThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetOffset() const;
    
};

