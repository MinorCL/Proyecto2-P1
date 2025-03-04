#pragma once
#include"ClientNodo.h"
#include"Container.h"
class ClientContainer :public Container
{
private:
	int* seat;
	int can;
	int id;

public:
	ClientContainer();
	~ClientContainer();
	virtual string toString();
	void add(Client* c);
	Client* getClientById(int id);
	void setAsiento(Client* c,int asiento);
};

