#include "FlightNodo.h"

FlightNodo::FlightNodo() :Nodo()
{
	flight = new Flight();
}

FlightNodo::FlightNodo(Flight* flight)
{
	this->flight = flight;
}

string FlightNodo::toString()
{
	return flight->toString();
}

Flight* FlightNodo::getFlight()
{
	return flight;
}




