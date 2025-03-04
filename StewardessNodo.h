#pragma once
#include "Stewardess.h"
#include"Nodo.h"
class StewardessNodo:public Nodo
{
private:
	Stewardess* stewardess;
public:
	StewardessNodo();
	StewardessNodo(Stewardess* stewardess);
	virtual string toString();
	Stewardess* getStewardess();
};

