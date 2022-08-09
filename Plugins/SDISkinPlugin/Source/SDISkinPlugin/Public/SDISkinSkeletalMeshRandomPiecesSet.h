#pragma once
#include "CoreMinimal.h"
#include "RInt.h"
#include "SDISkinSkeletalMeshSet.h"
#include "SDISkinSkeletalMeshRandomPiecesSet.generated.h"

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDISkinSkeletalMeshRandomPiecesSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString SetName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRInt NumToChoose;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSDISkinSkeletalMeshSet> Sets;
    
    FSDISkinSkeletalMeshRandomPiecesSet();
};

