#include "EnvQueryGenerator_CoverFMemory.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryGenerator_CoverFMemory::UEnvQueryGenerator_CoverFMemory() {
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
}

