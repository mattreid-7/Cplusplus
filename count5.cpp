// count5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int x;

	cout << "Please enter an integer: \n";	
	cin >> x;
	
	if (x == 1)
	{
		cout << "You entered: \n";
		cout << "one \n";
	}
	if (x == 2)
	{
		cout << "You entered: \n";
		cout << "two \n";
	}
	if (x == 3)
	{
		cout << "You entered: \n";
		cout << "three \n";
	}
	if (x == 4)
	{
		cout << "You entered: \n";
		cout << "four \n";
	}
	if (x == 5)
	{
		cout << "You entered: \n";
		cout << "five \n";
	}
	if (x > 5)
	{
		cout << "You entered: \n";
		cout << "a number greater than five \n";
	}
	if (x < 1)
	{
		cout << "You entered: \n";
		cout << "a number less than one \n";
	}


   
}

