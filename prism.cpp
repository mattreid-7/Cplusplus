// prism.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


using namespace std;

int main()
{
	int x;
	int y;
	int z;
	int a;
	cout << "Please enter prism length: ";
	cin >> x;
	cout << "Please enter prism width: ";
	cin >> y;
	cout << "Please enter prism height: ";
	cin >> z;
	cout << "A prism with sides " << x << " " << y << " " << z << " has:\n";
	int vol = x * y * z;
	int area = 2 * (x*y + x * z + y * z);
	int el = 4 * (x + y + z);
	cout << "Volume      = " << vol << "\n";
	cout << "Area        = " << area << "\n";
	cout << "Edge Length = " << el << "\n";
	cin >> a;

}

