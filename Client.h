#pragma once
#include "Person.h"
class Client : public Person
{
protected:
	int* seatt;
	int can;
	int id;
	string indentificacion;
public:
	Client();
	Client(string indentification, string name, int age);
	Client(string indentification, string name, int age, int seat);
	Client(int seat);
	virtual ~Client();
	virtual string toString();
	void setAsiento(int seat);	
	int getCan();

	int getId();
	void setId(int id);
	int getSeat(int index);
	int* gettAllSeats();
	void setSeatNull(int index);
	void clearSeats();


};

