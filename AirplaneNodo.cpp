#include "AirplaneNodo.h"

AirplaneNodo::AirplaneNodo() :Nodo()
{
	this->airplane = new Airplane();
}
AirplaneNodo::AirplaneNodo(Airplane* airplane) :Nodo()
{
	this->airplane = airplane;
}


string AirplaneNodo::toString() {
	return airplane->toString();
}

Airplane* AirplaneNodo::getAirplane()
{
	return airplane;
}

int AirplaneNodo::getID()
{
	return airplane->getID();
}
