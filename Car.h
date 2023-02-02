#pragma once
#include"IVehicle.h"

class Car:public IVehicle
{
public:
	Car(const int averageSpeed);
	const int getAverageSpeed() const override;

	void setAverageSpeed(const int averageSpeed) override;
	const int getAverageSpeedMoto() const override;
	void setAverageSpeedMoto(const int averageSpeedMoto) override;

private:
	int _averageSpeed;
};

