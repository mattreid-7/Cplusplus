// cm2feetandinches.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
#define CM_IN_INCH		2.54;
#define INCH_IN_FOOT	12;

int main()
{
	int cm;
	int a;
	cout << "Enter your height in centimetres; ";
	cin >> cm;
	int inch = cm / CM_IN_INCH;
	int foot = inch / INCH_IN_FOOT;
	inch = inch - (foot * 12);
	cout << "Your height is " << foot << " feet " << inch << " inches \n";
	cin >> a;
	return 0;
}

