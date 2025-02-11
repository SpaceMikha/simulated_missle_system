#ifndef WEATHER_SYSTEM_H
#define WEATHER_SYSTEM_H

#include <iostream>
#include <string>

class WeatherSystem {
public:
    WeatherSystem();
    void generateWeather();
    double getWindSpeed();
    std::string getCondition();

private:
    double windSpeed;
    std::string condition;
};

#endif
