#include "Track2.h"

Track2::Track2(const std::string& track2Type) : _track2Type(track2Type){}

const std::string& Track2::getTrack2Type() const
{
	return _track2Type;
}

void Track2::setTrack2Type(const std::string& tracktype)
{
	_track2Type = tracktype;
}

bool Track2::raceTrack2(const std::string& track2Type, IVehicle& Car, IVehicle& Motorcycle)
{
	int distance = 100;
	if (track2Type == "Moto") {
		double AutoSpeed = 0.98 * Car.getAverageSpeed();
		double MotorSpeed = 1.3 * Motorcycle.getAverageSpeedMoto();
		if (distance / AutoSpeed < distance / MotorSpeed) {

			return 0;
		}

		else

			return 1;
	}
	return false;
}

const std::string& Track2::getTrackType() const
{
	return _track2Type ;
}

void Track2::setTrackType(const std::string& tracktype)
{
	return;
}

bool Track2::raceTrack1(const std::string& trackType, IVehicle& Car, IVehicle& Motorcycle)
{
	return 0 ;
}

