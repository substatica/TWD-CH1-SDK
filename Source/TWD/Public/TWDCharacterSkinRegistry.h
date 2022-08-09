#pragma once
#include "CoreMinimal.h"
#include "SDICoreGameInstanceSubObject.h"
#include "TWDSkinSelections.h"
#include "TWDCharacterSkinRegistry.generated.h"

class AActor;

UCLASS(Blueprintable, Config=Game)
class UTWDCharacterSkinRegistry : public USDICoreGameInstanceSubObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    TMap<TWeakObjectPtr<AActor>, FTWDSkinSelections> SkinUsageRegistry;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<TWeakObjectPtr<AActor>, FTWDSkinSelections> SkinRestrictionRegistry;
    
public:
    UTWDCharacterSkinRegistry();
};

