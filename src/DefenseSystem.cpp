#include "DefenseSystem.h"
#include <cstdlib>

DefenseSystem::DefenseSystem() : interceptors(3) {}

void DefenseSystem::deployCountermeasures() {
    if (interceptors > 0) {
        interceptors--;
        std::cout << "[Defense System] Deploying countermeasures! Remaining interceptors: " << interceptors << "\n";
    } else {
        std::cout << "[Defense System] No interceptors left!\n";
    }
}

bool DefenseSystem::interceptMissile() {
    int chance = rand() % 2;
    if (chance == 1) {
        std::cout << "[Defense System] Enemy missile intercepted!\n";
        return true;
    }
    std::cout << "[Defense System] Interception failed!\n";
    return false;
}
