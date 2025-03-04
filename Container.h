#pragma once
#include"Nodo.h"
class Container
{
protected:
	Nodo* dummy;
public:
    Container();
    virtual string toString() = 0;

    virtual string mostrar();


    virtual void agregar(Nodo* nodo);
};

