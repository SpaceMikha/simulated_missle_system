#ifndef DEFENSE_SYSTEM_H
#define DEFENSE_SYSTEM_H

#include <iostream>
#include <vector>

class DefenseSystem {
public:
    DefenseSystem();
    void deployCountermeasures();
    bool interceptMissile();

private:
    int interceptors;
};

#endif
