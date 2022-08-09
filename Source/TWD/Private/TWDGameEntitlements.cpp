#include "TWDGameEntitlements.h"

bool UTWDGameEntitlements::IsEntitlementSystemReady() const {
    return false;
}

bool UTWDGameEntitlements::CheckItemEntitlement(const FTWDUniqueEntitlementItemID& ItemId) {
    return false;
}

UTWDGameEntitlements::UTWDGameEntitlements() {
    this->bEntitlementSystemReady = false;
}

