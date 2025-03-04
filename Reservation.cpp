#include "Reservation.h"

Reservation::Reservation()
{
	flight = new Flight();
	client = new Client();
	hour = new Hour();
	day = new Day();
	route = new Route();
	pilot = new Pilot();
	stewardessContainer = new StewardessContainer();
	id = 0;

}

Reservation::Reservation(Flight* flight, Client* client)
{
	this->flight = flight;
	this->client = client;
}

Reservation::Reservation(Flight* flight, Client* client, Hour* hour, Day* day, Route* route, Pilot* pilot, StewardessContainer* stewardessContainer)
{
	this->flight = flight;
	this->client = client;
	this->hour = hour;
	this->day = day;
	this->route = route;
	this->pilot = pilot;
	this->stewardessContainer = stewardessContainer;
}

Reservation::~Reservation()
{
}

string Reservation::toString()
{
	stringstream ss;
	ss << "Reservation numero: "<< id << endl;
	ss << client->toString() << " En el vuelo: " << flight->toString();

	return ss.str();

}


Flight* Reservation::getFlight()
{
	return flight;
}

Client* Reservation::getClient()
{
	return client;
}

int Reservation::getId()
{
	return id;
}

void Reservation::setId(int id)
{
	this->id = id;
}

