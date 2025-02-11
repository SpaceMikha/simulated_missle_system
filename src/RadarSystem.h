#ifndef RADAR_SYSTEM_H
#define RADAR_SYSTEM_H

#include <iostream>
#include <vector>
#include <string>

class RadarSystem {
public:
    RadarSystem();
    void scanForThreats();
    void displayThreats();

private:
    std::vector<std::string> detectedThreats;
};

#endif
