// sumIntegers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
start:
	int i;
	double sum = 0;
	string a;


	cin >> a;

	cout << "i   sum \n";
	cout << endl;
	for (i = 1; i < 10; i++)
	{
		sum = sum + i;
		cout << i << "    " << sum << endl;
	}

	for (i = 10; i < 21; i++)
	{
		sum = sum + i;
		cout << i << "   " << sum << endl;
	}
	cout << endl;
	cin >> a;
	system("CLS");
	goto start;

}

