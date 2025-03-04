#pragma once
#include "ReservationNodo.h"
#include "Container.h"
#include"AirplaneContainer.h"
class ReservationContainer :public Container
{
private:
	int id;
	Airplane* airplane;
public:
	ReservationContainer();
	~ReservationContainer();
	virtual string toString();
	void add(Reservation* r);
	void deleteReservation(int id);

};

