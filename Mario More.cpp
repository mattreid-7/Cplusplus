// Mario More.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int height;

	do
	{
		cout << "Height: ";
		cin >> height;
	}
	while (height > 23 || height < 0);

		for (int i = 0; i < height; i++)
		{
			for (int s = 0; s < height - i - 1; s++)
			{
				cout << " ";
			}
			for (int h = 1; h <= i + 1; h++)
			{
				cout << "#";
			}
			cout << "  ";
			for (int h = 1; h <= i + 1; h++)
			{
				cout << "#";
			}
			for (int s = 0; s < height - i - 1; s++)
			{
				cout << " ";
			}



			cout << "\n";
		}
	
}

