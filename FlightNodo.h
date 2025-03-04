#pragma once
#include "Nodo.h"
#include "Flight.h"
class FlightNodo :public Nodo
{
private:
	Flight* flight;
public:
	FlightNodo();
	FlightNodo(Flight* flight);
	virtual string toString();
	Flight* getFlight();
};

