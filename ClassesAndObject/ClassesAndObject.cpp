// ClassesAndObject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include "Tweeter.h"
#include <iostream>
#include "status.h"
#include "Accum.h"

//these make it so that you don't need to 
//type std:: everytime
using std::cout;
using std::endl;
//makes it so that every function from 
//the std library doesn't need the std:: prefix
using namespace std;

template <class T> 
T max(T& t1, T& t2)
{
	return t1 < t2 ? t2 : t1;
}

int main(int argc, char* argv[])
{
	//destructor cleans up p1 first because it hit a closed brace bracket (out of scope)
	
	Person p1("Johnny", "B.", 123);
	Person p2("Someone", "Else", 456);
	{
		Tweeter t1("Benny", "Bass", 333, "@Bennyy");
	}
	cout << "after innermost block" << endl;
	cout << "p1: " << p1.GetName() << endl;
	Status s = Pending;
	
	////////////////////////////////////////////////////////////////////////////////

	cout << "p1 is ";
	if (!(p1 < p2))
		cout << "not ";
	cout << "less than p2" << endl;

	cout << "p1 is ";
	if (!(p1 < 300))
		cout << "not " << endl;
	cout << "less than 300" << endl;

	cout << "300 is ";
	if (!(300 < p1))
		cout << "not ";
	cout << "less than p1" << endl;


	//////////////////////////////////////////////////////////////////////////
	cout << "templates............." << endl;
	int as = 33;
	int bs = 44;
	//this only works if the template function doesn't take arguments by reference
	//cout << "max of 33 and 44 is " << max(33, 44) << endl;

	cout << "max of 33 and 44 is " << max(as, bs) << endl;

	cout << "max of " << p1.GetName() << " and " << p2.GetName() 
		<< " is " << max(p1, p2).GetName() << endl;

	string first = "hellooo";
	string second = "world!";
	cout << max(first, second) << endl;
	
	//when you instantiate a template class you explicitly specify the type
	Accum<int> integers(0);
	integers += 3;
	integers += 7;
	cout << integers.GetTotal() << endl;

	Accum<string> strings("");
	strings += "hello";
	strings += " world!";
	cout << strings.GetTotal() << endl;


	//using the specialized template to add 
	//persons together with their number
	Accum<Person> people(0);
	people += p1;
	people += p2;
	cout << "Accum<Person> GetTotal: " << people.GetTotal() << endl;

	return 0;
}
