// Flow.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Utility.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	///////////////////////////////////////////////////
	// if 
	///////////////////////////////////////////////////
	int a = 5;

	if (a > 3) cout << "single line" << endl;

	if (a > 4)
	{
		cout << "multiple" << endl;
		cout << "lines" << endl;
	}
	int x, y;
	cout << "Enter two numbers " << endl;
	cin >> x >> y;
	if (x > y)
	{
		cout << "x is greater than y" << endl;
	}
	else
	{
		cout << "y is equal or greater than x" << endl;
	}

	if (x+y > 10) 
		cout << "the sum of x and y are greater than 10" << endl;

	///////////////////////////////////////////////////
	// immediate if 
	///////////////////////////////////////////////////
	
	int result;
	bool something = true;

	//regular if-else that can be longer than needed
	if (something)
		result = 302;
	else
		result = 7;

	cout << "result: " << result << endl;

	//immediate ifs are shorter and can do the same
	result = something ? 7 : 302;
	cout << "result: " << result << endl;


	///////////////////////////////////////////////////
	// while
	///////////////////////////////////////////////////

	int xy = 99;
	while (xy > 0)
	{
		cout << "Type a number, less than 0 to cancel: " << endl;
		cin >> xy;
		string sign = xy > 0 ? "positive" : "0 or negative";
		cout << xy << " is " << sign << endl;

	}

	
	bool prime = true;
	int num;
	int i = 2;
	cout << "Primegame (whileloop): type a number " << endl;
	cin >> num;

	while (i <= num / i)
	{
		int div = num / i;
		if (i * div == num)
		{
			prime = false;
			cout << num << " is dividable by " << div << endl;
			break; //or use && prime in the parameters
		}
		i = i + 1;
	}

	///////////////////////////////////////////////////
	// for
	///////////////////////////////////////////////////
	bool prime2 = true;
	cout << "Primegame (forloop): type a number " << endl;
	int num2;
	cin >> num2;

	for (int j = 2; j <= num2/j; j = j + 1)
	{
		int factor = num2 / j;
		if (j * factor == num2)
		{
			prime2 = false;
			cout << num2 << " is dividable by " << factor << endl;
			break; //or use && prime in the parameters
		}
	}

	///////////////////////////////////////////////////
	// switch
	///////////////////////////////////////////////////
	int input = 1;

	while (input > 0)
	{
	cout << "Enter a number, 0 to quit." << endl;
	cin >> input;
	switch (input)
	{
	case 1:
		cout << "you entered 1" << endl;
		break;
	case 2:
	case 3:
		cout << "you entered 2 or 3" << endl;
		break;
	case 4:
		cout << "you entered 4" << endl;
		break;
	case 5:
		cout << "you entered 5" << endl;
		break;
	default:
		cout << "you entered a number other than 1-5" << endl;
	}
	}


	cout << "-------------------------------------------------------------" << endl;

	int b;
	cout << "Type a number to check if prime" << endl;
	cin >> b;
	if (IsPrime(b))
		cout << b << " is prime" << endl;
	else
		cout << b << " is not prime" << endl;

	//the reference permanently changed the value in b
	if (Is2MorePrime(b))
		cout << b << "+2 is prime (??)" << endl;
	else
		cout << b << "+2 is not prime (??)" << endl;

	
	



    return 0;
}

