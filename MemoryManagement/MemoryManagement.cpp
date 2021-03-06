// MemoryManagement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Resource.h"
#include <string>
#include "Person.h"
using namespace std;


int main()
{
	{
		Resource localResource("local");
		string localString = localResource.GetName();
	}
	Resource* pResource = new Resource("created with new");
	string newString = pResource->GetName();
	//int j = 3;
	//if (j == 3)
	//{
	//	//causes the pointer to be constructed, but not
	//	//deleted - memory leak
	//	return 0;
	//}
	Resource* p2 = pResource;
	string string2 = p2->GetName();
	delete pResource;
	/*first crash as pResource has been deleted and cleaned up*/
	//string string3 = pResource->GetName();
	//pResource = nullptr;
	//delete pResource;
	/*this is deleting twice, as p2 is pointing to the same
	place as pResource*/
	//delete p2;

	Person kate("Kate");
	//potential memory leak, however we already added a 
	//delete statement in the destructor of Person - fine.
	kate.addResource();
	kate.SetName("Kate2");
	//memory leak, only gets deleted once
	//fixed with delete in addresource method
	kate.addResource();

	//the compiler will construct a Kate2 object and copy
	//each member variable over from Kate to Kate2
	//this will cause a delete two times (deconstrucor runs for kate and kate2)
	//and crash. it will get the same pointer
	//However we later implemented a copy constructor which fixes this
	Person kate2 = kate;

	//the copy constructor does not do this, the assignment operator does
	//its a bitwise copy and it will crash because they have the same pointer
	kate = kate2;
    return 0;
}

