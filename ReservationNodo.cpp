#include "ReservationNodo.h"

ReservationNodo::ReservationNodo():Nodo()
{
	reservation = new Reservation();
}

ReservationNodo::ReservationNodo(Reservation* reservation) :Nodo()
{
	this->reservation = reservation;
}

string ReservationNodo::toString()
{
	return reservation->toString();
}

Reservation* ReservationNodo::getReservation()
{
	return reservation;
}



