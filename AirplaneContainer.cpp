#include "AirplaneContainer.h"

AirplaneContainer::AirplaneContainer() :Container()
{
	id = 1;
	AirplaneNodo* dummy = new AirplaneNodo();
}

AirplaneContainer::~AirplaneContainer()
{
	delete dummy;
}

string AirplaneContainer::toString()
{
	stringstream ss;
	ss << "Total de reservaciones : " << endl;
	ss << mostrar();
	return ss.str();
}

void AirplaneContainer::add(Airplane* a)
{
	a->setID(id);
	AirplaneNodo* nodo = new AirplaneNodo(a);
	agregar(nodo);
	id = id + 1;
}

void AirplaneContainer::setID(int id)
{
	this->id = id;
}

int AirplaneContainer::getID()
{
	return id;
}


Airplane* AirplaneContainer::getAirplaneById(int id)
{
	while (true) {
		Nodo* ptr = dummy->getSiguiente();
		while (ptr != nullptr) {
			AirplaneNodo* nodo = (AirplaneNodo*)ptr;
			if (nodo && nodo->getAirplane()->getID() == id) {
				return nodo->getAirplane();
			}
			ptr = ptr->getSiguiente();
		}

		cout << "No se encontró un avión con ID " << id << ". Intente de nuevo: ";
		cin >> id;
	}
}


int AirplaneContainer::getAirplaneById2(int id)
{
	Nodo* ptr = dummy->getSiguiente();
	while (ptr != nullptr)
	{
		AirplaneNodo* nodo = (AirplaneNodo*)ptr;
		if (nodo && nodo->getAirplane()->getID() == id)
		{
			return nodo->getID();
		}
		ptr = ptr->getSiguiente();
	}
	return 0;
}
