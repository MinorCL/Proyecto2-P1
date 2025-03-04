#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

using namespace std;
class Hour
{
private:
	string arrivalHour;
	string departureHour;
public:
	Hour();
	Hour(string arrivalHour, string departureHour);
	virtual ~Hour();
	virtual string toString();
	string getArrivalHour();
	string getDepartureHour();
	void setArrivalHour(string arrivalHour);
	void setDepartureHour(string departureHour);
};

