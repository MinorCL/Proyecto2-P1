#include "FlightContainer.h"

FlightContainer::FlightContainer() :Container()
{
	id = 1;
	capacity = 0;
	id2 = 0;
	FlightNodo* dummy = new FlightNodo();

}

FlightContainer::~FlightContainer()
{
	delete dummy;

}

string FlightContainer::toString()
{
	return mostrar();
}

void FlightContainer::add(Flight* f)
{
	f->setID(id);
	FlightNodo* nuevo = new FlightNodo(f);
	agregar(nuevo);
	id = id+1;
}

Flight* FlightContainer::getFlightById(int id)
{
	Nodo* ptr = dummy->getSiguiente();
	while (ptr != nullptr)
	{
		FlightNodo* nodo = (FlightNodo*)ptr;
		if (nodo && nodo->getFlight()->getID() == id)
		{
			return nodo->getFlight();
		}
		ptr = ptr->getSiguiente();
	}
	cout << "No se encontró un Vuelo con ID " << id << ". Intente de nuevo: ";
	cin >> id;
}

void FlightContainer::setID(int id2)
{
	this->id2 = id2;
}

void FlightContainer::setcapacity(int capacity)
{
	this->capacity = capacity;
}

int FlightContainer::getcapacity()
{
	return capacity;
}



