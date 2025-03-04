#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class Day
{
private:
	string date;
public:
	Day();
	Day(string date);
	virtual ~Day();
	virtual string toString();
	string getDate();
	void setDate(string date);
};

