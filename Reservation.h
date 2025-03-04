#pragma once
#include"Flight.h"
#include"Client.h"
#include"Hour.h"
#include"Day.h"
#include"Route.h"
#include"Pilot.h"
#include"StewardessContainer.h"
#include"Interface.h"
class Reservation
{
	
private:

	Flight* flight;
	Client* client;
	Hour* hour;
	Day* day;
	Route* route;
	Pilot* pilot;
	StewardessContainer* stewardessContainer;
	int id;

public:
	Reservation();
	Reservation(Flight* flight, Client* client);
	Reservation(Flight* flight, Client* client, Hour* hour, Day* day, Route* route, Pilot* pilot, StewardessContainer* stewardessContainer);
	virtual ~Reservation();
	virtual string toString();
	Flight* getFlight();
	Client* getClient();
	int getId();
	void setId(int id);
};

