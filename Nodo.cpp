#include "Nodo.h"

Nodo::Nodo()
{
}

Nodo::Nodo(Nodo* siguiente)
{
	this->siguiente = siguiente;
}

Nodo::~Nodo()
{
}

string Nodo::toString()
{
	stringstream ss;
	ss << "Siguiente: ";
	ss << siguiente;
	return ss.str();
}

Nodo* Nodo::getSiguiente()
{
	return siguiente;
}

void Nodo::setSiguiente(Nodo* siguiente)
{
	this->siguiente = siguiente;
}


