#pragma once
#include "FlightNodo.h"
#include "Container.h"
class FlightContainer :public Container
{
private:
	int id;
	int id2;
	int capacity;
public:
	FlightContainer();
	~FlightContainer();
	virtual string toString();
	void add(Flight* f);
	Flight* getFlightById(int id);
	void setID(int id2);
	void setcapacity(int capacity);
	int getcapacity();
};

