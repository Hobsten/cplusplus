#pragma once
#include <string>
#ifndef _Person_H
#define _Person_H
#include "Resource.h"
#include <memory>


class Person
{

	/*Check MemoryManagement2 to see how to use shared pointers instead
	The following methods and variables will not be needed:
	the copy constructor, operator=, no need to initialize pointer to nullptr anymore, 
	delete statement in constructor, change the addResource() */
private:
	std::string firstname;
	Resource* pResource;
public:
	Person(std::string name);
	//copy constructor for copying 
	Person(const Person& p);
	~Person();
	std::string GetName() { return firstname; };
	void SetName(std::string name) { firstname = name; }
	void addResource();
	Person& operator=(const Person& p);

};
#endif