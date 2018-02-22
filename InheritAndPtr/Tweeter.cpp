#include "stdafx.h"
#include "Tweeter.h"
#include <iostream>
#include <string>

using namespace std;

Tweeter::Tweeter(std::string first, 
	std::string last, int n, std::string handle) : 
		Person(first, last, n), 
		twitterhandle(handle)
{
}

Tweeter::~Tweeter()
{
}

std::string Tweeter::GetName() const
{
	//to avoid using protected variables
	//return firstname + " " + lastname + " " + twitterhandle;
	return Person::GetName() + twitterhandle;
}