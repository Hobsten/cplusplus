#pragma once
#ifndef _Tweeter_H
#define _Tweeter_H

#include "Person.h"
#include <string>

class Tweeter : 
	public Person
{
private:
	std::string twitterhandle;
public:
	Tweeter(std::string first, std::string last, int n, std::string handle);
	~Tweeter(void);
	std::string GetName() const;
};

#endif