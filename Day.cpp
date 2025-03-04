#include "Day.h"

Day::Day()
{
	date = "";
}

Day::Day(string date)
{
	this->date = date;
}

Day::~Day()
{
}

string Day::toString()
{
	stringstream ss;
	ss << "Date: ";
	ss << date;
	return ss.str();
}

string Day::getDate()
{
	return date;
}

void Day::setDate(string date)
{
	this->date = date;
}


