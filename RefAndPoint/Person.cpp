#include "stdafx.h"
#include "Person.h"
#include <iostream>
using namespace std;

//class constructor
Person::Person(std::string first, std::string last, int arbitrary)
	: firstname(first), lastname(last), arbitrarynumber(arbitrary)
{
	std::cout << "constructing " << GetName() << " " << arbitrarynumber << std::endl;
}

//class destructor
Person::~Person()
{
	cout << "destructing " << GetName() << endl;
}

string Person::GetName() const
{
	return firstname + " " + lastname;
}

bool Person::operator<(const Person& p) const
{
	return arbitrarynumber < p.arbitrarynumber;
}

bool Person::operator<(int i) const
{
	return arbitrarynumber < i;
}

bool operator<(int i, Person& p)
{
	//works because the free function has been labeled 'friend'
	//use public functions instead when these are available!
	return i < p.arbitrarynumber;
}