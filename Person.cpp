#include "Person.h"

Person::Person()
{
	age = 0;
	name = "";
}

Person::Person(int age, string name)
{
	this->age = age;
	this->name = name;
}

Person::~Person()
{
}

string Person::toString()
{
	stringstream ss;
	ss << "Name: ";
	ss << name;
	ss << "; Age: ";
	ss << age;
	return ss.str();
}


