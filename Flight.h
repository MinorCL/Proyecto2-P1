#pragma once
#include"StewardessContainer.h"
#include"Pilot.h"
#include"Hour.h"
#include"Route.h"
#include"Day.h"
class Airplane;

class Flight
{
private:
	StewardessContainer* stewardesses;
	Stewardess* stewardess;
	Pilot* pilot;
	Hour* hour;
	Route* route;
	Day* day;
	Airplane* airplane;

	int id;
	int id2;
	int clientCapacity;

public:
	Flight();
	Flight(Hour* hour, Route* route, Day* day);
	Flight(StewardessContainer* stewardesses, Pilot* pilot, Hour* hour, Route* route, Day* day);
	Flight(int id2,StewardessContainer* stewardesses, Pilot* pilot, Hour* hour, Route* route, Day* day);
	Flight(int c,int id2, StewardessContainer* stewardesses, Pilot* pilot, Hour* hour, Route* route, Day* day);

	virtual ~Flight();
	virtual string toString();
	StewardessContainer* getStewardesses();
	Pilot* getPilot();
	Hour* getHour();
	Route* getRoute();
	Day* getDay();
	void setID(int id);
	int getID();
	void setID2(int id2);
	void setClientCapacity(int c);	
	int getClientCapacity();

	void setAirplane(Airplane* airplane);
	Airplane* getAirplane();



};

