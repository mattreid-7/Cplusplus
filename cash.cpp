// cash.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	double change;
	double coins = 0;

		do 
		{
		cout << "Change Owed: ";
		cin >> change;
		}	while (change < 0);
		double cents = change * 100;
	
		while (cents >= 25)
		{
			cents = cents - 25;
			coins++;
		}
		while (cents >= 10)
		{
			cents = cents - 10;
			coins++;
		}
		while (cents >= 5)
		{
			cents = cents - 5;
			coins++;
		}
		while (cents >= 1)
		{
		cents = cents - 1;
		coins++;
		}
		cout << coins;
}
