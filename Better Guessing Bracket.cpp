// Bracketing Search.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>

using namespace std;


int main()
{
start:
	int menuchoice;
	char a;
	int correct;
	int count = 0;
	int choice;
	int max = 100;
	int min = 1;
	string highlow;

	cout << "Number Game! \n";
	cout << "\n";
	cout << "1) You choose the secret number and the computer guesses \n";
	cout << "2) The computer chooses the secret number and you have to guess it \n";
	cout << "\n";
	cout << "Your choice:  ";
	cin >> menuchoice;

	if (menuchoice == 1)
	{
		goto YourGame;
	}

	if (menuchoice == 2)
	{
		goto CompGame;
	}
	
	cout << "Invalid choice, returning to menu";
	cin >> a;
	goto start;


YourGame:
	system("CLS");
	cout << "Now, pick a number between 1 - 100. What would you like the number to be?  ";
	cin >> correct;

	cout << "\n";
	count++;
	cout << "                                 Number of Guesses: " << count << endl;
	cout << "\n";
	choice = 50;
	if (choice == correct)
	{
		goto endYOUR;
	}

	cout << "The computer guessed " << choice << "\n";
	cout << "Is your number higher or lower than this?  ";
	cin >> highlow;
	if (highlow == "higher" || highlow == "Higher")
	{
		goto higher;
	}

	if (highlow == "lower" || highlow == "Lower")
	{
		goto lower;
	}

higher:
	count++;
	min = choice;
	choice = (max + choice) / 2;
	
	if (choice == correct)
	{
		goto endYOUR;
	}
	cout << "                                 Number of Guesses: " << count << endl;
	cout << "The computer guessed " << choice << "\n";
	cout << "Is your number higher or lower than this?  ";
	cin >> highlow;
	cout << "\n";
	if (highlow == "higher" || highlow == "Higher")
	{
		goto higher;
	}

	if (highlow == "lower" || highlow == "Lower")
	{
		goto lower;
	}


lower:
	count++;
	max = choice;
	choice = (choice + min) / 2;
	
	if (choice == correct)
	{
		goto endYOUR;
	}
	cout << "                                 Number of Guesses: " << count << endl;
	cout << "The computer guessed " << choice << "\n";
	cout << "Is your number higher or lower than this?  ";
	cin >> highlow;
	cout << "\n";
	if (highlow == "higher" || highlow == "Higher")
	{
		goto higher;
	}

	if (highlow == "lower" || highlow == "Lower")
	{
		goto lower;
	}



CompGame:
	system("CLS");
	srand(time(NULL));
	correct = rand() % 100 + 1;

	cout << "I have chosen a number between 1 - 100 for you to guess, \n";
	cout << "I'll record how many attempts it takes you to correctly \n";
	cout << "find the number and I'll give you hints along the way. \n";
	cout << "\n";
	cout << "Good Luck. \n";

loopCOMP:
	cout << "                                 Number of Guesses: " << count << endl;
	cout << "What is your guess?  ";
	cin >> choice;
	if (choice == correct)
	{
		goto end;
	}

	if (choice > correct)
	{
		cout << "The correct number is lower than your last guess \n";
		count++;
		cout << "\n";
	}

	if (choice < correct)
	{
		cout << "The correct number is higher than your last guess \n";
		count++;
		cout << "\n";
	}

	goto loopCOMP;

endYOUR:
	system("CLS");
	cout << "The computer guessed correctly! \n";
	cout << "The correct number was " << correct << " and it took them " << count << " attempts. \n";
	cout << "\n";
	cin >> a;
	system("CLS");
	goto start;


end:
	system("CLS");
	cout << "You guessed correctly! \n";
	cout << "The correct number was " << correct << " and it took you " << count << " attempts. \n";
	cout << "\n";
	cin >> a;
	system("CLS");
	goto start;



}

