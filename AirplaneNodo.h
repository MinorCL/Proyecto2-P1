#pragma once
#include"Nodo.h"
#include"Airplane.h"

class AirplaneNodo :public Nodo
{
private:
	Airplane* airplane;
public:
	AirplaneNodo();
	AirplaneNodo(Airplane* airplane);
	virtual string toString();
	Airplane* getAirplane();
	int getID();
};

