// marioless.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int height;
	int a;
	do
	{
		cout << "Height: ";
		cin >> height;
	} while (height > 23 || height < 0);

	for (int i = 0; i < height; i++)
	{
		for (int s = 0; s < height - i - 1; s++)
		{
			cout << " ";
		}
		for (int h = 1; h <= i + 2; h++)
		{
			cout << "#";
		}
		cout << "\n";
	}
	cin >> a;
}


