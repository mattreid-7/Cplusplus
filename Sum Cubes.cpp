// sumCubes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
start:
	int i;
	double cube = 0;
	double sum = 0;
	string a;


	cin >> a;

	cout << "i   cube \n";
	cout << endl;
	for (i = 1; i < 21; i++)
	{
		cube = i * i * i;
		sum = sum + cube;
		cout << i << "    " << sum << endl;
	}

	
	cout << endl;
	cin >> a;
	system("CLS");
	goto start;

}

