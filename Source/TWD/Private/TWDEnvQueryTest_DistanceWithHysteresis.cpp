#include "TWDEnvQueryTest_DistanceWithHysteresis.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UTWDEnvQueryTest_DistanceWithHysteresis::UTWDEnvQueryTest_DistanceWithHysteresis() {
    this->TestMode = ETWDEnvTestDistance::Distance3D;
    this->DistanceTo = UEnvQueryContext_Querier::StaticClass();
}

