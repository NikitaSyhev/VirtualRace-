#include "Motorcycle.h"

Motorcycle::Motorcycle(int averageSpeedMoto) : _averageSpeedMoto(averageSpeedMoto){}

const int Motorcycle::getAverageSpeedMoto() const
{
    return _averageSpeedMoto;
}

void Motorcycle::setAverageSpeedMoto(const int averageSpeedMoto)
{
    _averageSpeedMoto = averageSpeedMoto;
}

const int Motorcycle::getAverageSpeed() const
{
    return 0;
}

void Motorcycle::setAverageSpeed(const int averageSpeed)
{
    return;
}
