#pragma once
#include <string>
#include"ITrack.h"
class Track1 : public ITrack
{
public:
	Track1(const std::string& trackType);
	const std::string& getTrackType() const override;
	void setTrackType(const std::string &tracktype) override;

	bool raceTrack1(const std::string& trackType, IVehicle& Car, IVehicle& Motorcycle) override;

	const std::string& getTrack2Type() const override;
	 void setTrack2Type(const std::string& tracktype) override;
	 bool raceTrack2(const std::string& track2Type, class IVehicle& Car, class IVehicle& Motorcycle) override;
private:
	std::string _trackType;

};

