#pragma once



class IVehicle
{
public:

	virtual const int getAverageSpeed() const = 0;
	virtual void setAverageSpeed(const int averageSpeed) = 0;
	virtual const int getAverageSpeedMoto() const = 0;
	virtual void setAverageSpeedMoto(const int averageSpeedMoto) = 0;

virtual ~IVehicle(){}
};

