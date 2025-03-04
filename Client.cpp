#include "Client.h"

Client::Client()
{
	this->age = 0;
	this->name = "";
	seatt = nullptr;
	can = 0;
}

Client::Client(string indentification, string name,int age)
{
	this->age = age;
	this->name = name;
	this->indentificacion = indentification;
	seatt= nullptr;
	can = 0;



}

Client::Client(string cedula, string name, int age,int asiento)
{
	this->age = age;
	this->name = name;
	seatt = new int[3];
	seatt[0] = asiento;
	can = 1;
}

Client::Client(int seat)
{
	seatt = new int[3];
	seatt[0] = seat;
	can = 1;

}

Client::~Client()
{
	delete[] seatt;
}

string Client::toString()
{
	stringstream ss;
	ss << "Client ID: " << id;
	ss << " Name: " << name;
	ss << " Age: " << age;
	ss << " Indentificacion: " << indentificacion;
	ss << " Asientos: " << endl;

	bool hasSeats = false;
	for (int i = 0; i < can; i++)
	{
		if (seatt[i] != -1)  
		{
			ss << seatt[i] << endl;
			hasSeats = true;
		}
	}

	if (!hasSeats)
	{
		ss << "Ninguno" << endl;
	}

	return ss.str();
}







void Client::setAsiento(int seat) {

	int* temp = new int[can + 1];

	for (int i = 0; i < can; i++) {
		temp[i] =seatt[i];
	}

	temp[can] =seat;


	delete[] seatt;


	seatt= temp;

	can++;
}

int Client::getCan()
{
	return can;
}


int Client::getId()
{
	return id;
}

void Client::setId(int id)
{
	this->id = id;
}

int Client::getSeat(int index) {
	if (index >= 0 && index < can) {
		return seatt[index];
	}
	return -1; 
}

int* Client::gettAllSeats()
{
	return seatt;
}

void Client::setSeatNull(int index) {
	if (index >= 0 && index < can) {
		seatt[index] = -1;
	}

	bool allNull = true;
	for (int i = 0; i < can; i++) {
		if (seatt[i] != -1) {
			allNull = false;
			break;
		}
	}

	if (allNull) {
		delete[] seatt;
		seatt = nullptr;
		can = 0;
	}
}

void Client::clearSeats()
{
	delete[] seatt;
	seatt = nullptr;
	can = 0;
}








