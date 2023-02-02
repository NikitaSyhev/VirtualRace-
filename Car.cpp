#include "Car.h"

Car::Car(const int averageSpeed) : _averageSpeed(averageSpeed){}

const int Car::getAverageSpeed() const
{
	return _averageSpeed;
}

void Car::setAverageSpeed(const int averageSpeed)
{
	_averageSpeed = averageSpeed;
}

const int Car::getAverageSpeedMoto() const
{
	return 0;
}

void Car::setAverageSpeedMoto(const int averageSpeedMoto)
{
	return;
}
