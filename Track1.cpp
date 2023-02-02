#include "Track2.h"
#include "Track1.h"

Track1::Track1(const std::string& trackType) : _trackType(trackType){}

const std::string& Track1::getTrackType() const
{
	return _trackType;
}

void Track1::setTrackType(const std::string& tracktype)
{
	_trackType = tracktype;
}

bool Track1::raceTrack1(const std::string& trackType, IVehicle& Car, IVehicle& Motorcycle)
{
	int distance = 50;
	if (trackType == "Auto") {
		double AutoSpeed = 1.1 * Car.getAverageSpeed();
		double MotorSpeed = 0.95 * Motorcycle.getAverageSpeedMoto();
		if (distance / AutoSpeed < distance / MotorSpeed) {

			return 0;
		}

		else

			return 1;
	}
	return false;
}

const std::string& Track1::getTrack2Type() const
{
	return _trackType;
}

void Track1::setTrack2Type(const std::string& tracktype)
{
	return;
}

bool Track1::raceTrack2(const std::string& track2Type, IVehicle& Car, IVehicle& Motorcycle)
{
	return 0;
}
