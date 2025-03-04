#include "StewardessNodo.h"

StewardessNodo::StewardessNodo() :Nodo()
{
	stewardess = new Stewardess();
}

StewardessNodo::StewardessNodo(Stewardess* stewardess) :Nodo()
{
	this->stewardess = stewardess;
}

string StewardessNodo::toString()
{
	return stewardess->toString();
}

Stewardess* StewardessNodo::getStewardess()
{
	return stewardess;
}


