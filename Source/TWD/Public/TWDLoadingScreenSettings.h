#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TWDLoadingScreenSettings.generated.h"

class UUserWidget;
class UTexture;

USTRUCT(BlueprintType)
struct TWD_API FTWDLoadingScreenSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UUserWidget> WidgetClass;
    
    UPROPERTY(EditAnywhere)
    UTexture* LoadingBarTexture;
    
    UPROPERTY(EditAnywhere)
    UTexture* EnvTexture;
    
    UPROPERTY(EditAnywhere)
    UTexture* BlackTexture;
    
    UPROPERTY(EditAnywhere)
    FVector2D Size;
    
    UPROPERTY(EditAnywhere)
    FVector2D Scale;
    
    UPROPERTY(EditAnywhere)
    FIntVector LoadingBarDim;
    
    UPROPERTY(EditAnywhere)
    FIntVector LoadingBarPos;
    
protected:
    UPROPERTY(EditAnywhere)
    FVector DefaultOffset;
    
    UPROPERTY(EditAnywhere)
    TMap<FString, FVector> OverrideOffsetForHMD;
    
public:
    FTWDLoadingScreenSettings();
};

