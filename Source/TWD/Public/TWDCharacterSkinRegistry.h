#pragma once
#include "CoreMinimal.h"
#include "SDICoreGameInstanceSubObject.h"
#include "TWDSkinSelections.h"
#include "TWDCharacterSkinRegistry.generated.h"

class AActor;

UCLASS(Config=Game)
class UTWDCharacterSkinRegistry : public USDICoreGameInstanceSubObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TMap<TWeakObjectPtr<AActor>, FTWDSkinSelections> SkinUsageRegistry;
    
    UPROPERTY(Transient)
    TMap<TWeakObjectPtr<AActor>, FTWDSkinSelections> SkinRestrictionRegistry;
    
public:
    UTWDCharacterSkinRegistry();
};

