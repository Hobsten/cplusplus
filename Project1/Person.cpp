#include "stdafx.h"
#include "Person.h"
#include <iostream>

//class constructor
Person::Person(std::string first, std::string last, int arbitrary) : firstname(first), lastname(last), arbitrarynumber(arbitrary)
{
	std::cout << "constructing " <<
		firstname << " " << lastname << " " << arbitrarynumber << std::endl;
}
/*
Person::~Person()
{
	std::cout << "destructing " <<
		firstname << " " << lastname << std::endl;
}
*/