#include "RadarSystem.h"
#include <cstdlib>

RadarSystem::RadarSystem() {
    scanForThreats();
}

void RadarSystem::scanForThreats() {
    detectedThreats.clear();
    int numThreats = rand() % 3;

    for (int i = 0; i < numThreats; i++) {
        detectedThreats.push_back("Enemy Aircraft " + std::to_string(rand() % 100));
    }
}

void RadarSystem::displayThreats() {
    if (detectedThreats.empty()) {
        std::cout << "[Radar System] No threats detected.\n";
    } else {
        std::cout << "[Radar System] Threats detected:\n";
        for (const auto &threat : detectedThreats) {
            std::cout << "  - " << threat << "\n";
        }
    }
}
