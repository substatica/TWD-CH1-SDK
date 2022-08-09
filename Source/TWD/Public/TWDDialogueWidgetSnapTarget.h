#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "TWDDialogueWidgetSnapTarget.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TWD_API UTWDDialogueWidgetSnapTarget : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SnapThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnabled;
    
public:
    UTWDDialogueWidgetSnapTarget();
    UFUNCTION(BlueprintCallable)
    void SetSnapThreshold(float NewThreshold);
    
    UFUNCTION(BlueprintCallable)
    void SetOffset(FVector NewOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bNewEnabled);
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintPure)
    float GetSnapThreshold() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetOffset() const;
    
};

