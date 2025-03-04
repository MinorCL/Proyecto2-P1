#pragma once
#include "StewardessNodo.h"
#include"Container.h"
class StewardessContainer :public Container

{
public:
	StewardessContainer();
	~StewardessContainer();
	virtual string toString();
	void add(Stewardess* sn);
};

