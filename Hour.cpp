#include "Hour.h"

Hour::Hour()
{
	arrivalHour = "";
	departureHour = "";
}

Hour::Hour(string arrivalHour, string departureHour)
{
	this->arrivalHour = arrivalHour;
	this->departureHour = departureHour;
}

Hour::~Hour()
{
}

string Hour::toString()
{
	stringstream ss;
	ss << " Arrival Hour: ";
	ss << arrivalHour;
	ss << " Departure Hour: ";
	ss << departureHour;
	return ss.str();
}

string Hour::getArrivalHour()
{
	return arrivalHour;
}

string Hour::getDepartureHour()
{
	return departureHour;
}

void Hour::setArrivalHour(string arrivalHour)
{
	this->arrivalHour = arrivalHour;
}

void Hour::setDepartureHour(string departureHour)
{
	this->departureHour = departureHour;
}


