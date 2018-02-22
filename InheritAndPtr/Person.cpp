#include "stdafx.h"
#include "Person.h"
#include <string>

using namespace std;

Person::Person(string first, string last, int n) 
	: firstname(first), lastname(last), num(n)
{
}

Person::~Person()
{
}

string Person::GetName() const
{
	return firstname + " " + lastname;
}