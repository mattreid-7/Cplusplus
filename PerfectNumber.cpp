// PerfectNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
start:
	int a;
	int sum;
	int i;
	int b;

	cout << "Enter number:  ";
	cin >> a;

	i = 1;
	sum = 0;

	cout << "The factors of " << a << " are: \n";
	while (i <= a)
	{
		if (a % i == 0)
		{
			cout << i << endl;
			sum = sum + i;
		}
		i = i + 1;
	}
	cout << "Sum of factors = " << sum << endl;


	b = sum / 2;
	if (b == a)
	{
		cout << a << " is a perfect number \n";
	}
	if (b != a)
	{
		cout << a << " is not a perfect number \n";

	}

}

