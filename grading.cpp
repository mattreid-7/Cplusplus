// grading.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	int grade;
	string G;
	cout << "Enter Grade:  ";
	cin >> grade;

	if (grade >= 90 && grade <= 100)
	{
		G = "A";
	}
	cout << "Your grade equates to: " << G;

}

