#pragma once
#include "Person.h"
class Stewardess : public Person
{
protected:
	string title;
	string numberTelephone;
	int grade;
	string indentificacion;
public:
	Stewardess();
	Stewardess(int age, string name, string title, string numberTelephone, int grade);

	virtual ~Stewardess();
	virtual string toString();


};

