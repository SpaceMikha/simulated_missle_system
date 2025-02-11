#include <iostream>
#include "Missile.h"
#include "TargetingSystem.h"
#include "GuidanceSystem.h"
#include "WeatherSystem.h"
#include "RadarSystem.h"
#include "DefenseSystem.h"

int main() {
    std::cout << "=== Raspberry Pi Missile Defense System ===\n";

    TargetingSystem targetingSystem;
    Missile missile("Long-Range", 1000, 800, 500);
    WeatherSystem weather;
    RadarSystem radar;
    DefenseSystem defense;

    targetingSystem.acquireTarget("Enemy Base");
    
    if (targetingSystem.confirmTargetLock()) {
        GuidanceSystem::calculateTrajectory(0, 0, 500, 800);

        radar.scanForThreats();
        radar.displayThreats();

        if (weather.getWindSpeed() < 15.0) {
            missile.launch();
        } else {
            std::cout << "[System] Launch aborted due to bad weather!\n";
        }

        defense.deployCountermeasures();
        defense.interceptMissile();
    }

    return 0;
}
