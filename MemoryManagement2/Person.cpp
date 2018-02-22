#include "stdafx.h"
#include "Person.h"
#include "Resource.h"
#include <string>

using namespace std;


//shared pointers initialize themselves to empty, so theres
//no need for pResource(nullptr) in the constructor
Person::Person(string name) : firstname(name)//, pResource(nullptr)
{
}


//copy constructor not needed for shared pointers
//Person::Person(const Person& p) : firstname(p.firstname), pResource(new Resource(p.pResource->GetName()))
//{
//}

Person::~Person()
{
	//not needed with shared pointers
	//all member variables will be cleaned up and the shared_ptr 
	//destructor will go off
	//delete pResource;
}


//addResource modified to work with shared pointers
void Person::addResource()
{
	//use reset instead of delete
	pResource.reset();
	//pResource = new Resource("Resource for " + GetName());
	//use the built in shared ptr method instead
	pResource = std::make_shared<Resource>("Resource for " + GetName());
}	


//assignment operator not needed for shared pointers
//Person& Person::operator=(const Person& p)
//{
//	//the member variables' get filled with the proper values
//	firstname = p.firstname;
//	//if the object/variable being assigned already has a pointer
//	//this is the last chance you get to delete it before it is
//	//overridden and causing a memory leak
//	delete pResource;
//	//pResource becomes a seperate pointer with the same content
//	pResource = new Resource(p.pResource->GetName());
//	//represents the object itself, dereferences it
//	return *this;
//}