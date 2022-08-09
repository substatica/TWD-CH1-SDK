#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TWDAnimNotify_PlayBark.generated.h"

UCLASS(CollapseCategories)
class TWD_API UTWDAnimNotify_PlayBark : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FString BarkToPlay;
    
public:
    UTWDAnimNotify_PlayBark();
};

