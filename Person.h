#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Person
{
protected:
	int age;
	string name;
public:
	Person();
	Person(int age, string name);
	virtual ~Person();
	virtual string toString();
};

