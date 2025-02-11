#ifndef TARGETING_SYSTEM_H
#define TARGETING_SYSTEM_H

#include <iostream>
#include <string>

class TargetingSystem {
public:
    TargetingSystem();
    void acquireTarget(std::string targetName);
    bool confirmTargetLock();
    
private:
    std::string currentTarget;
    bool targetLocked;
};

#endif
