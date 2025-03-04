#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class Route
{
private:
	string route;
	string Airportorigin;
	string Airportdestination;
	string hours;
	string minutes;
	int canScale;
	int cost;

public:
	Route();
	Route(string Airportorigin, string Airportdestination, string route, int canScale, int cost,string h,string m);
	virtual ~Route();
	virtual string toString();
	string getAirportorigin();
	string getAirportdestination();

};

