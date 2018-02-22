#include "stdafx.h"
#include "Person.h"
#include "Resource.h"
#include <string>

using namespace std;


//pResource(nullptr) is here because it is optional
//it is not in the header file.
//when you dont have a pointer it sets to nullptr, or 
//else it sets to the pointer that you add
Person::Person(string name) : firstname(name), pResource(nullptr)
{
}

Person::Person(const Person& p) : firstname(p.firstname), pResource(new Resource(p.pResource->GetName()))
{
}

Person::~Person()
{
	//this is not problematic, because it either point to 
	//something or is a nullptr.
	delete pResource;
}


//creates a resource and puts the pointer as a member variable
void Person::addResource()
{
	//deletes the pointer if it already exists
	//fail proof cus pointer is defined to point
	//somewhere or be nullptr
	delete pResource;
	pResource = new Resource("Resource for " + GetName());
}

//the person object that's before = is accessed and given
//the values of the object before = which is const and shouldnt be changed anyway
//since we're just copying values over
Person& Person::operator=(const Person& p)
{
	//the member variables' get filled with the proper values
	firstname = p.firstname;
	//if the object/variable being assigned already has a pointer
	//this is the last chance you get to delete it before it is
	//overridden and causing a memory leak
	delete pResource;
	//pResource becomes a seperate pointer with the same content
	pResource = new Resource(p.pResource->GetName());
	//represents the object itself, dereferences it
	return *this;
}