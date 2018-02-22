#include "stdafx.h"
#include "Utility.h"
#include <iostream>
using namespace std;

bool IsPrime(int x)
{
	bool prime = true;
	for (int j = 2; j <= x / j; j = j + 1)
	{
		int factor = x / j;
		if (j * factor == x)
		{
			prime = false;
			cout << x << " is dividable by " << factor << endl;
			break; //or use && prime in the parameters
		}
	}
	return prime;
}

//& takes a reference instead of value
bool Is2MorePrime(int& x)
{
	x = x + 2;
	return IsPrime(x);
}
