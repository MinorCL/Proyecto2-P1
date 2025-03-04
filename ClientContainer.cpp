#include "ClientContainer.h"

ClientContainer::ClientContainer() :Container()
{
	id = 1;

	ClientNodo* dummy = new ClientNodo();

}

ClientContainer::~ClientContainer()
{
	delete dummy;
}

string ClientContainer::toString()
{
	return mostrar();
}




void ClientContainer::add(Client* c)
{

	c->setId(id);
	ClientNodo* nuevo = new ClientNodo(c);
	agregar(nuevo);
	id = id + 1;
}

Client* ClientContainer::getClientById(int id)
{
	Nodo* ptr = dummy->getSiguiente();
	while (ptr != nullptr)
	{
		ClientNodo* nodo = (ClientNodo*)ptr;
		if (nodo && nodo->getClient()->getId() == id)
		{
			return nodo->getClient();
		}
		ptr = ptr->getSiguiente();
	}
	cout << "No se encontró un cliente con ID " << id << ". Intente de nuevo: ";
	cin >> id;
}

void ClientContainer::setAsiento(Client* c,int asiento)
{
	c->setAsiento(asiento);

}

