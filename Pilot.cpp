#include "Pilot.h"

Pilot::Pilot()
{
	this->age = 0;
	this->name = "";
	this->gmail = "";
	this->gender = ' ';	
}

Pilot::Pilot(int age, string name, string gmail, char gender)
{
	this->age = age;
	this->name = name;
	this->gmail = gmail;
	this->gender = gender;
}


Pilot::~Pilot()
{

}

string Pilot::toString()
{
	stringstream ss;
	ss << " Pilot Name: ";
	ss << name;
	ss << " Age: ";
	ss << age;
	ss << " Gmail: ";
	ss << gmail;
	ss << " Gender: ";
	ss << gender;
	return ss.str();
}


