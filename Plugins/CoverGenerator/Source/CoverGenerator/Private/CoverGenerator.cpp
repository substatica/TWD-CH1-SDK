#include "CoverGenerator.h"

class UObject;
class UCoverPoint;
class ANavigationData;
class AController;
class ACoverGenerator;

void ACoverGenerator::ReleaseCover(UCoverPoint* CoverPoint) {
}

void ACoverGenerator::OnNavigationGenerationFinished(ANavigationData* NavData) {
}

bool ACoverGenerator::OccupyCover(UCoverPoint* CoverPoint, AController* Controller) {
    return false;
}

bool ACoverGenerator::IsFreeCoverPoint(const UCoverPoint* CoverPoint) {
    return false;
}

ACoverGenerator* ACoverGenerator::GetCoverGenerator(UObject* Asking) {
    return NULL;
}

ACoverGenerator::ACoverGenerator() {
    this->ForceRefresh = false;
    this->bRegenerateAtBeginPlay = false;
    this->bRegenerateAtNavigationRebuilt = false;
    this->SegmentLength = 10.00f;
    this->MaxSegDist = 350.00f;
    this->CharHeight = 180.00f;
    this->StepDistTrace = 20.00f;
    this->TraceLength = 100.00f;
    this->MinSpaceBetweenValidPoints = 50.00f;
    this->SphereSize = 5.00f;
    this->WidthMaxAgent = 80.00f;
    this->HeightMaxCrouching = 80.00f;
    this->HeightMaxStanding = 180.00f;
    this->OffsetWhenLeaningSides = 65.00f;
    this->OffsetFrontAim = 100.00f;
    this->AllowCrouchLeftCover = true;
    this->AllowCrouchRightCover = true;
    this->bDraw1AllSegmentPointsTested = false;
    this->bDraw2SegmentPointsWithinBounds = false;
    this->bDraw3SimpleCoverGeometryTest = false;
    this->bDraw4SecondPassTracesSides = false;
    this->bDraw4SecondPassTracesSidesFrontAndBottom = false;
    this->bDraw5SecondPassArrows = false;
    this->DebugDrawAllPoints = false;
    this->DebugDrawAllBusyPoints = false;
    this->DebugDisplayLog = false;
    this->DebugDistance = 25000.00f;
    this->bDrawOctreeBounds = false;
    this->HasGeneratedCovers = false;
}

