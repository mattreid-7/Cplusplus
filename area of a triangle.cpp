// area of a triangle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
start:
	double a;
	double b;
	double c;
	cout << "Enter side 1: ";
	cin >> a;
	cout << "Enter side 2: ";
	cin >> b;
	cout << "Enter side 3: ";
	cin >> c;
	double s = (a + b + c) / 2;
	double area = sqrt(s(s - a)(s - b)(s - c));
	cout << "Area = " << area;
	cout << "\n";
	cout << "Would you like to restart?  ";
	cin << string answer;
	if (answer == yes);
	{
		goto start;
	}

	return 0;
}

