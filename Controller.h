#pragma once
#include"Airline.h"
#include"ClientContainer.h"
#include"Interface.h"

class Controller
{
private:
	Airline* airline;
	Airplane* airplane;
	Client* client;
	Flight* flight;
	Reservation* reservation;
	ClientContainer* clientContainer;
	ReservationContainer* reservationContainer;
	AirplaneContainer* airplaneContainer;
public:
	Controller();
	~Controller();
	void start();
};

