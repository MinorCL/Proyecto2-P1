#pragma once
#include"ClientContainer.h"
#include"FlightContainer.h"
#include"AirplaneContainer.h"
#include"ReservationContainer.h"
class Airline
{
private:
	ClientContainer* clientContainer;
	FlightContainer* flightContainer;
	AirplaneContainer* airplaneContainer;
	ReservationContainer* reservationContainer;
	StewardessContainer* stewardesContainer;
	Pilot* pilot;
	Client* client;
	Flight* flight;
	Airplane* airplane;
	Hour* hour;
	Route* route;
	Day* day;

	int id;
public:
	Airline();
	virtual ~Airline();
	virtual string toString();
	void doNewAirplane();
	void showReservations();
	void showClients();
	void showTripulacion();
	void getAirplaneById();
	void doNewSchedule();
	void showSchedule();
	void doNewReservation();
	void showAirplanes();
	void doNewClient();
	void deleteReservation();
};

