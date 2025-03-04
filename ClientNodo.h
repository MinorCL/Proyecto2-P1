#pragma once
#include "Nodo.h"
#include "Client.h"
class ClientNodo :public Nodo
{
private:
	Client* client;
public:
	ClientNodo();
	ClientNodo(Client* client);
	virtual ~ClientNodo();
	virtual string toString();
	Client* getClient();
	int getId();
};

