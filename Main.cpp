//Этот проект создан с помощью классического шаблона
#include <iostream>
#include "ITrack.h"
#include "IVehicle.h"
#include <vector>
#include "Car.h"
#include "Motorcycle.h"
#include "Track1.h"
#include "Track2.h"


int main() {
	setlocale(LC_ALL, "Russian");

	std::vector<IVehicle*> vehicles;
	std::vector<ITrack*> tracks;



	IVehicle* A = new Car(100);
	IVehicle* B = new Motorcycle(100);
	vehicles.push_back(A);
	vehicles.push_back(B);

	ITrack* TrackA = new Track1("Auto");
	ITrack* TrackB = new Track2("Moto");
	tracks.push_back(TrackA);
	tracks.push_back(TrackB);

	
	std::cout << "Average speed of car: " << std::endl;
	std::cout << A->getAverageSpeed() << std::endl;
	
	std::cout << "Average speed of moto: " << std::endl;
	std::cout << B->getAverageSpeed() << std::endl;

	std::cout << "Type of Track 1 is " << TrackA->getTrackType() << std::endl;
	std::cout << "Type of Track 2 is " << TrackB->getTrack2Type() << std::endl;

	std::cout << "Winner in Track A is ( 0 - Auto, 1 - Moto:" << std::endl;
	std::cout << TrackA->raceTrack1("Auto", *A, *B) << std::endl;

	std::cout << "Winner in Track A is ( 0 - Auto, 1 - Moto:" << std::endl;
	std::cout << TrackB->raceTrack2("Moto", *A, *B) << std::endl;

	delete A;
	delete B;
	delete TrackA;
	delete TrackB;
	

	return 0;
}