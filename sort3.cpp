// sort3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	start:
	int x, y, z;
	int a, b, c;
	int restart;

	cout << "Please enter three integers: ";
	cin >> x >> y >> z;

	if (x >= y && x >= z)
	{
		a = x;
		if (y >= z)
		{
			b = y;
			c = z;
		}
		if (z >= y)
		{
			b = z;
			c = y;
		}
	}
	if (y >= x && y >= z)
	{
		a = y;
		if (x >= z)
		{
			b = x;
			c = z;
		}
		if (z >= x)
		{
			b = z;
			c = x;
		}
	}
	if (z >= y && z >= x)
	{
		a = z;
		if (x >= y)
		{
			b = x;
			c = y;
		}
		if (y >= x)
		{
			b = y;
			c = x;
		}
	}

	cout << "Your integers after sorting: \n";
	cout << a << " " << b << " " << c << "\n";
	cin >> restart;
	goto start;

}

