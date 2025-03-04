#include "StewardessContainer.h"

StewardessContainer::StewardessContainer() :Container()
{
	dummy = new StewardessNodo();

}

StewardessContainer::~StewardessContainer()
{
	delete dummy;
}

string StewardessContainer::toString()
{
	return mostrar();
}

void StewardessContainer::add(Stewardess* sn)
{
	agregar(new StewardessNodo(sn));

}




