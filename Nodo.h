#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class Nodo
{
protected:
	Nodo* siguiente;
public:
	Nodo();
	Nodo(Nodo* siguiente);
	virtual ~Nodo();
	virtual string toString();
	Nodo* getSiguiente();
	void setSiguiente(Nodo* siguiente);

};

