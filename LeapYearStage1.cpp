// LeapYearStage1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
beginning:
	system("CLS");
	int year;
	string a;

	cout << "Enter year:  ";
	cin >> year;
	if (year % 4 != 0)
	{
		cout << year << " is not a leap year. \n";
	}
	else if (year % 100 != 0)
	{
		cout << year << " is a leap year. \n";
	}
	else if (year % 400 != 0)
	{
		cout << year << " is not a leap year. \n";
	}
	else
	{
		cout << year << " is a leap year. \n";
	}

	cin >> a;
	goto beginning;
}


