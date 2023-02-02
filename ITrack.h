#pragma once
#include <string>
#include"IVehicle.h"



class ITrack
{	public:

	virtual const std::string& getTrackType() const = 0;
	virtual void setTrackType(const std::string& tracktype) = 0;
	virtual const std::string& getTrack2Type() const = 0;
	virtual void setTrack2Type(const std::string& tracktype) = 0;

	virtual bool raceTrack1(const std::string& trackType, class IVehicle& Car, class IVehicle& Motorcycle) = 0;
	virtual bool raceTrack2(const std::string& track2Type, class IVehicle& Car, class IVehicle& Motorcycle) = 0;

	virtual ~ITrack(){};




};

