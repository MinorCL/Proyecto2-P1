#include "Route.h"

Route::Route()
{
	Airportorigin = "";
	Airportdestination = "";
	route = "";
	canScale = 0;
	cost = 0;
	hours = "";
	minutes = "";

}

Route::Route(string Airportorigin, string Airportdestination, string route, int canScale, int cost,string h,string m )
{
	this->Airportorigin = Airportorigin;
	this->Airportdestination = Airportdestination;
	this->route = route;
	this->canScale = canScale;
	this->cost = cost;
	hours = h;
	minutes = m;
}




Route::~Route()
{

}

string Route::toString()
{
	stringstream ss;
	ss << " Airport Origin: ";
	ss << Airportorigin;
	ss << " Airport Destination: ";
	ss << Airportdestination;
	ss << " Route: ";
	ss << route;
	ss << " Can Scale: ";
	ss << canScale;
	ss << " Cost: ";
	ss << cost;
	ss << "Time: " << hours << "h: " << minutes<<"m ";


	return ss.str();
}

string Route::getAirportorigin()
{
	return Airportorigin;
}

string Route::getAirportdestination()
{
	return Airportdestination;
}


