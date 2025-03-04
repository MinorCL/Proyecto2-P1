#pragma once
#include "Reservation.h"
#include "Nodo.h"
class ReservationNodo :public Nodo
{
private:
	Reservation* reservation;
public:
	ReservationNodo();
	ReservationNodo(Reservation* reservation);
	virtual string toString();
	Reservation* getReservation();

};

