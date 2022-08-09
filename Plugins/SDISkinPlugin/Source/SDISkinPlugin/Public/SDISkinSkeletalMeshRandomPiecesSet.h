#pragma once
#include "CoreMinimal.h"
#include "RInt.h"
#include "SDISkinSkeletalMeshSet.h"
#include "SDISkinSkeletalMeshRandomPiecesSet.generated.h"

USTRUCT(BlueprintType)
struct SDISKINPLUGIN_API FSDISkinSkeletalMeshRandomPiecesSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRInt NumToChoose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDISkinSkeletalMeshSet> Sets;
    
    FSDISkinSkeletalMeshRandomPiecesSet();
};

