#include "ClientNodo.h"

ClientNodo::ClientNodo() :Nodo()
{
	this->client = new Client();
}


ClientNodo::ClientNodo(Client* client) :Nodo()
{
	this->client = client;
}

ClientNodo::~ClientNodo()
{

}

string ClientNodo::toString()
{
	stringstream ss;
	ss << client->toString();
	return ss.str();
}

Client* ClientNodo::getClient()
{
	return client;
}

int ClientNodo::getId()
{
	return client->getId();
}


