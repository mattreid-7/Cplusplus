// easter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
start:
	int restart;

	int a, b, c, d, e, f, g, h, i, k, l, m, p;
	int year;
	string EasterMonth;
	int EasterDate;
	int month;

	cout << "Enter Year: ";
	cin >> year;
	a = year % 19;
	b = year / 100;
	c = year % 100;
	d = b / 4;
	e = b % 4;
	f = (b + 8) / 25;
	g = (b - f + 1) / 3;
	h = (19 * a + b - d - g + 15) % 30;
	i = c / 4;
	k = c % 4;
	l = (32 + 2 * e + 2 * i - h - k) % 7;
	m = (a + 11 * h + 22 * l) / 451;
	month = (h + l - 7 * m + 114) / 31;
		if (month == 3)
		{
			EasterMonth = "March";
		}
		if (month == 4)
		{
			EasterMonth = "April";
		}
	p = (h + l - 7 * m + 114) % 31;
	EasterDate = p + 1;

	cout << "Easter is " << EasterMonth << " " << EasterDate << " in " << year << ".";
	cin >> restart;
	goto start;
}

