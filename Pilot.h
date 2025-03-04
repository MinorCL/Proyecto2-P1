#pragma once
#include "Person.h"
class Pilot : public Person
{
private:
	string gmail;
	char gender;
public:
	Pilot();
	Pilot(int age, string name, string gmail, char gender);
	virtual ~Pilot();
	virtual string toString();
};

