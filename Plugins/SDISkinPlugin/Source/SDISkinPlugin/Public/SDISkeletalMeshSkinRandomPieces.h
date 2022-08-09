#pragma once
#include "CoreMinimal.h"
#include "SDISkeletalMeshSkin.h"
#include "SDISkinSkeletalMeshRandomPiecesSet.h"
#include "SDISkeletalMeshSkinRandomPieces.generated.h"

UCLASS(Blueprintable)
class SDISKINPLUGIN_API USDISkeletalMeshSkinRandomPieces : public USDISkeletalMeshSkin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSDISkinSkeletalMeshRandomPiecesSet> Randomizers;
    
    USDISkeletalMeshSkinRandomPieces();
};

