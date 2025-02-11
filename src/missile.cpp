#include "Missile.h"

Missile::Missile(std::string type, int range, double speed, double fuel) 
    : missileType(type), range(range), speed(speed), fuel(fuel), isLaunched(false) {}

void Missile::launch() {
    if (!isLaunched && fuel > 0) {
        isLaunched = true;
        std::cout << "[Missile System] Launching " << missileType << " missile with range: " 
                  << range << " km, speed: " << speed << " km/h\n";
    } else {
        std::cout << "[Missile System] Missile cannot be launched (either already launched or no fuel).\n";
    }
}

void Missile::updateStatus() {
    if (isLaunched && fuel > 0) {
        fuel -= speed * 0.01;  // Fuel consumption per update
        std::cout << "[Missile System] Fuel remaining: " << fuel << " L\n";
    }
}

void Missile::selfDestruct() {
    if (isLaunched) {
        std::cout << "[Missile System] Missile self-destructed!\n";
        isLaunched = false;
    } else {
        std::cout << "[Missile System] No missile in flight to self-destruct.\n";
    }
}
