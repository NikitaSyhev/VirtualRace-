#pragma once
#include"IVehicle.h"


class Motorcycle:public IVehicle
{
public:


	Motorcycle(int averageSpeedMoto);
	const int getAverageSpeedMoto() const override;
	void setAverageSpeedMoto(const int averageSpeedMoto) override;
	const int getAverageSpeed() const override;
	void setAverageSpeed(const int averageSpeed) override;

	

private:
	int _averageSpeedMoto;
};

