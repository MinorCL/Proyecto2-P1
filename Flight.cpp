#include"Flight.h"
#include"Airplane.h"

Flight::Flight()
{
	stewardesses = new StewardessContainer();
	stewardess = new Stewardess();
	pilot = new Pilot();
	hour = new Hour();
	route = new Route();
	airplane = new Airplane();
	day = new Day();
	id = 0;
	id2 = 0;
	clientCapacity = 0;

}

Flight::Flight(Hour* hour, Route* route, Day* day)
{
	this->hour = hour;
	this->route = route;
	this->day = day;
}

Flight::Flight(StewardessContainer* stewardesses, Pilot* pilot, Hour* hour, Route* route, Day* day)
{
	this->stewardesses = stewardesses;
	this->pilot = pilot;
	this->hour = hour;
	this->route = route;
	this->day = day;
}

Flight::Flight(int id2, StewardessContainer* stewardesses, Pilot* pilot, Hour* hour, Route* route, Day* day)
{
	this->id2 = id2;
	this->stewardesses = stewardesses;
	this->pilot = pilot;
	this->hour = hour;
	this->route = route;
	this->day = day;
}

Flight::Flight(int c, int id2, StewardessContainer* stewardesses, Pilot* pilot, Hour* hour, Route* route, Day* day)
{
	this->clientCapacity = c;
	this->id2 = id2;
	this->stewardesses = stewardesses;
	this->pilot = pilot;
	this->hour = hour;
	this->route = route;
	this->day = day;
}

Flight::~Flight() {
	delete stewardesses;
	delete pilot;
	delete hour;
	delete route;
	delete day;
	delete stewardess;
	delete airplane;
}


string Flight::toString()
{
	stringstream ss;

	ss << "Flight: " << id << endl;
	ss <<  day->toString() << endl;
	ss <<  hour->toString() << endl;
	ss <<  route->toString() << endl;
	ss << pilot->toString() << endl;
	ss << stewardesses->toString() << endl;
	ss << "En el avion de id: " << id2 << endl;
	return ss.str();
}

StewardessContainer* Flight::getStewardesses()
{
	return stewardesses;
}

Pilot* Flight::getPilot()
{
	return pilot;
}

Hour* Flight::getHour()
{
	return hour;
}

Route* Flight::getRoute()
{
	return route;
}

Day* Flight::getDay()
{
	return day;
}

void Flight::setID(int id)
{
	this->id = id;
}

int Flight::getID()
{
	return id;
}

void Flight::setID2(int id2)
{
	this->id2 = id2;
}

void Flight::setClientCapacity(int c)
{
	this->clientCapacity = c;
}

int Flight::getClientCapacity()
{
	return clientCapacity;
}

void Flight::setAirplane(Airplane* airplane) {
	if (this->airplane != nullptr) {
		delete this->airplane; // Evita fugas de memoria eliminando el avión anterior
	}
	this->airplane = airplane;
}


Airplane* Flight::getAirplane()
{
	return airplane;
}


