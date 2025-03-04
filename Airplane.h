#pragma once
#include "Client.h"
#include "Category.h"

class Flight; 

class Airplane
{
private:
    Client* client;
    string capacity;
    string brand;
    int ClientCapacity;
    bool military;
    string range;
    string category;
    Flight* flight;
    int n;
    int* seat; 
    int id;
	bool status;
public:
    Airplane();
    Airplane(string c);
	virtual ~Airplane();

    void setSeat(int index, int value);
    int getSeat(int index);
    void setAirplane(Client* client);
    virtual string toString();
    string toStringCl();
    Flight* getFlight();
    bool getMilitary();
    string showClientCapacity();
    void setID(int id);
    int getID();
    int getClientCapacity();
	void setClientCapacity(int ClientCapacity);
	int getStatus();
};
