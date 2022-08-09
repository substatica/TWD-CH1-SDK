#pragma once
#include "CoreMinimal.h"
#include "SDISkinSkeletalMeshRandomPiecesSet.h"
#include "SDISkeletalMeshSkin.h"
#include "SDISkeletalMeshSkinRandomPieces.generated.h"

UCLASS()
class SDISKINPLUGIN_API USDISkeletalMeshSkinRandomPieces : public USDISkeletalMeshSkin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSDISkinSkeletalMeshRandomPiecesSet> Randomizers;
    
    USDISkeletalMeshSkinRandomPieces();
};

