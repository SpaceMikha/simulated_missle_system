#include "WeatherSystem.h"
#include <cstdlib>

WeatherSystem::WeatherSystem() {
    generateWeather();
}

void WeatherSystem::generateWeather() {
    int weatherType = rand() % 3;
    
    switch(weatherType) {
        case 0:
            condition = "Clear";
            windSpeed = 5.0;
            break;
        case 1:
            condition = "Stormy";
            windSpeed = 20.0;
            break;
        case 2:
            condition = "Foggy";
            windSpeed = 10.0;
            break;
    }

    std::cout << "[Weather System] Condition: " << condition << ", Wind Speed: " << windSpeed << " km/h\n";
}

double WeatherSystem::getWindSpeed() {
    return windSpeed;
}

std::string WeatherSystem::getCondition() {
    return condition;
}
