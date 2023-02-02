#pragma once
#include <string>
#include"ITrack.h"
class Track2 : public ITrack
{
public:
	Track2(const std::string& track2Type);
	const std::string& getTrack2Type() const override;

	void setTrack2Type(const std::string& tracktype) override;

	bool raceTrack2(const std::string& track2Type, IVehicle& Car, IVehicle& Motorcycle) override;

	const std::string& getTrackType() const override;
	 void setTrackType(const std::string& tracktype) override;
	 bool raceTrack1 (const std::string& trackType, class IVehicle& Car, class IVehicle& Motorcycle) override;


private:
	std::string _track2Type;
};

