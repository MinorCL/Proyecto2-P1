#include "Airplane.h"




void Airplane::setSeat(int index, int value)
{
	if (index >= 0 && index < ClientCapacity)
	{
		seat[index] = value;  
	}
}

int Airplane::getSeat(int index)
{
	if (index >= 0 && index < ClientCapacity)
	{
		return seat[index];
	}
	return -1;
}

Airplane::Airplane() {
	capacity = "";
	brand = "";
	ClientCapacity = 0;
	military = false;
	range = "";
	category = "";
	flight = nullptr;
	client = new Client();
	seat = nullptr;  
}


Airplane::Airplane(string c)
{
	category = c;

	if (category == "AI-19")
	{
		brand = "Airbus319";
		capacity = "27.7m3";
		ClientCapacity = 156;
		military = false;
		range = "7200km";
	}
	else if (category == "AI-20")
	{
		brand = "Airbus320";
		capacity = "37.40m3";
		ClientCapacity = 220;
		military = false;
		range = "3100km";
	}
	else if (category == "BO-73")
	{
		brand = "Boeing737";
		capacity = "52.5m3";
		ClientCapacity = 215;
		military = false;
		range = "10.000km";
	}
	else if (category == "ANT-1")
	{
		brand = "Antonov";
		capacity = "1300m3";
		ClientCapacity = 0;
		military = true;
		range = "4.000km";
	}
	seat = new int[ClientCapacity];

	for (int i = 0; i < ClientCapacity; i++)
	{
		seat[i] = 0;  
	}
}

Airplane::~Airplane()
{
	delete[] seat;
	delete client;
	delete flight;
}


void Airplane::setAirplane(Client* client)
{
	this->client = client;
	n=Category::type();
	switch (n)
	{
	case 1: {
		category = "AI-19";
		brand = "Airbus319";
		capacity = "27.7m3";
		ClientCapacity = 156;
		military = false;
		range = "7200km";
		break;
	}
	case 2: {
		category = "AI-20";
		brand = "Airbus320";
		capacity = "37.40m3";
		ClientCapacity = 220;
		military = false;
		range = "3100km";
		break;
	}
	case 3: {
		category = "BO-73";
		brand = "Boeing737";
		capacity = "52.5m3";
		ClientCapacity = 215;
		military = false;
		range = "10.000km";
		break;
	}
	case 4:
	{
		category = "ANT-1";
		brand = "Antonov";
		capacity = "1300m3";
		ClientCapacity = 0;
		military = true;
		range = "4.000km";
		break;
	}
	default:
		break;
	}
	seat = new int[ClientCapacity];

	
	for (int i = 0; i < ClientCapacity; i++)
	{
		seat[i] = 0;  
	}
}


string Airplane::toString()
{
	stringstream ss;
	ss << "ID: " << id << endl;
	ss << "Category: "<< category<<endl;
	ss << "Brand: "<< brand;
	ss << "Capacity: "<< capacity << endl;
	ss << "Client Capacity: "<< ClientCapacity << endl;
	ss << "Military: " << (military ? "Yes" : "No") << endl;
	ss << "Range: "<< range<<endl<<endl;
	return ss.str();
}

string Airplane::toStringCl()
{
	stringstream ss;
	ss << client->toString() << endl;
	ss << "ID: " << id+1<< endl;
	ss << "Category: " << category << endl;
	ss << "Brand: " << brand;
	ss << "Capacity: " << capacity << endl;
	ss << "Client Capacity: " << ClientCapacity << endl;
	ss << "Military: " << (military ? "Yes" : "No") << endl;
	ss << "Range: " << range << endl << endl;
	return ss.str();
}

Flight* Airplane::getFlight()
{
	return flight;
}

bool Airplane::getMilitary()
{
	return military;
}

string Airplane::showClientCapacity()
{
	stringstream ss;
	ss << "Asientos Disponibles: " << endl;

	for (int i = 1; i < ClientCapacity+1; i++) 
	{
		if (seat[i] == 1) 
		{
			ss << "Asiento: " << i << " Ocupado" << endl;
			status = true;
		}
		else
		{
			ss << "Asiento: " << i << " Libre" << endl;
			status = false;
		}
	}

	return ss.str();
}


void Airplane::setID(int id)
{
	this->id = id;
}

int Airplane::getID()
{
	return id;
}

int Airplane::getClientCapacity()
{
	return ClientCapacity;
}

void Airplane::setClientCapacity(int ClientCapacity) {
	this->ClientCapacity = ClientCapacity;
	delete[] seat; 
	seat = new int[ClientCapacity]; 
	for (int i = 0; i < ClientCapacity; i++) {
		seat[i] = 0;
	}
}


int Airplane::getStatus()
{
	return status;
}




