#include "GuidanceSystem.h"

void GuidanceSystem::calculateTrajectory(double startX, double startY, double targetX, double targetY) {
    double dx = targetX - startX;
    double dy = targetY - startY;
    double distance = std::sqrt(dx * dx + dy * dy);
    
    std::cout << "[Guidance System] Calculating trajectory...\n";
    std::cout << "[Guidance System] Distance to target: " << distance << " km\n";
}
