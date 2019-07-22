// LeapYearStage1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int isLeapYear(int year);

int main()
{
beginning:
	system("CLS");
	int year;
	string a;

	cout << "Enter year:  ";
	cin >> year;

	if (isLeapYear(year) == 0)
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


int isLeapYear(int year)
{
	if (year % 4 != 0)
	{
		return 0;
	}
	else if (year % 100 != 0)
	{
		return 1;
	}
	else if (year % 400 != 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}