#ifndef MISSILE_H
#define MISSILE_H

#include <iostream>
#include <string>

class Missile {
public:
    Missile(std::string type, int range, double speed, double fuel);
    void launch();
    void updateStatus();
    void selfDestruct();

private:
    std::string missileType;
    int range;
    double speed;
    double fuel;
    bool isLaunched;
};

#endif
