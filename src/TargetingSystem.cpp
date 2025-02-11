#include "TargetingSystem.h"

TargetingSystem::TargetingSystem() : targetLocked(false) {}

void TargetingSystem::acquireTarget(std::string targetName) {
    std::cout << "[Targeting System] Acquiring target: " << targetName << "...\n";
    currentTarget = targetName;
    targetLocked = true;
}

bool TargetingSystem::confirmTargetLock() {
    if (targetLocked) {
        std::cout << "[Targeting System] Target Locked: " << currentTarget << "\n";
        return true;
    }
    std::cout << "[Targeting System] No target locked.\n";
    return false;
}
