// wam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int course1, course2, course3, course4;
	double average;


	cout << "Enter marks for 4 courses enrolled in past semester? \n";
	cin >> course1 >> course2 >> course3 >> course4;
	average = (course1 + course2 + course3 + course4) / 4;

	// %.2f -- the .2 makes sure only two decimal points are printed
	cout << "Your WAM  is: " << average << endl;

	if (average >= 85)
	{
		cout << "Your grade is HD \n";
	}

	if (average >= 75 && average < 85)
	{
		cout << "Your grade is D \n";
	}

	if (average >= 65 && average < 75)
	{
		cout << "Your grade is CR \n";
	}

	if (average >= 50 && average < 65)
	{
		cout << "Your grade is PS \n";
	}

	if (average < 50)
	{
		cout << "Your grade is FL \n";
	}
}

