#pragma once
#include"AirplaneNodo.h"
#include"Container.h"
class AirplaneContainer :public Container
{
private:
	int id;
public:
	AirplaneContainer();
	~AirplaneContainer();
	virtual string toString();
	void add(Airplane* a);
	void setID(int id);
	int getID();
	Airplane* getAirplaneById(int id);
	int getAirplaneById2(int id);
};

