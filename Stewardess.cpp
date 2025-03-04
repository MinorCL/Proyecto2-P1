#include "Stewardess.h"

Stewardess::Stewardess()
{
	this->age = 0;
	this->name = "";
	this->title = "";
	this->numberTelephone = "";
	this->grade = 0;

}

Stewardess::Stewardess(int age, string name, string title, string numberTelephone, int grade)
{
	this->age = age;
	this->name = name;
	this->title = title;
	this->numberTelephone = numberTelephone;
	this->grade = grade;
}


Stewardess::~Stewardess()
{

}

string Stewardess::toString()
{
	stringstream ss;
	ss << " Name: ";
	ss << name;
	ss << " Age: ";
	ss << age;
	ss << " Title: ";
	ss << title;
	ss << " Number Telephone: ";
	ss << numberTelephone;
	ss << " Grade: ";
	ss << grade;

	return ss.str();
}
