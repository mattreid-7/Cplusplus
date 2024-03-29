// Alex Linker 2017-08-13
// This program prints out facts about a circle given its radius,
// using functions.

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

double area(double radius);
double circumference(double radius);
double diameter(double radius);

// DO NOT CHANGE THIS MAIN FUNCTION
int main(int argc, char *argv[]) {
	double radius;

	cout << "Enter circle radius: ";
	cin >> radius;

	cout << "Area          = " << area(radius) << endl;
	cout << "Circumference = " << circumference(radius) << endl;
	cout << "Diameter      = " << diameter(radius) << endl;

	return 0;
}


// Calculate the area of a circle, given its radius.
double area(double radius) {
	return 3.141592653589793 * (radius * radius);
}

// Calculate the circumference of a circle, given its radius.
double circumference(double radius) {
	return 2 * 3.141592653589793 * radius;
}

// Calculate the diameter of a circle, given its radius.
double diameter(double radius) {
	return radius * 2;
}