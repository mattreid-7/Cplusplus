// Tic Tac Toe Game in C++
// Single player against bot and two player head to head.

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
start:
  system("CLS");
  int counter = 0;
  int dice;
  string A1 = ".", A2 = ".", A3 = ".", B1 = ".", B2 = ".", B3 = ".", C1 = ".", C2 = ".", C3 = ".";
  string choice, player, winner, x, y, z;

  cout << "Tic Tac Toe! \n\n";
  cout << "1) Single PLayer \n";
  cout << "2) Two Player \n\n";
  cout << "Which game would you like to play?  ";
  cin >> choice;

  if (choice == "1") {
    goto Single;
  }
  if (choice == "2") {
    goto Two;
  }

Single:
  system("CLS");
  player = "X";
  if (counter == 9) {
    goto tie;
  }
  if (counter == 1 | counter == 3 | counter == 5 | counter == 7) {
    goto bot;
  }
  cout << "Tic Tac Toe! \n";
  cout << endl;
  cout << "   A B C \n";
  cout << " 1 " << A1 << " " << B1 << " " << C1 << endl;
  cout << " 2 " << A2 << " " << B2 << " " << C2 << endl;
  cout << " 3 " << A3 << " " << B3 << " " << C3 << endl;
  cout << endl;
  cout << "Where would you like to make your move? (Column/Row)  ";
  cin >> choice;
  if (choice == "A/1") {
    if (A1 != ".") {
      goto Single;
    }
    A1 = player;
    counter++;
  }
  if (choice == "A/2") {
    if (A2 != ".") {
      goto Single;
    }
    A2 = player;
    counter++;
  }
  if (choice == "A/3") {
    if (A3 != ".") {
      goto Single;
    }
    A3 = player;
    counter++;
  }
  if (choice == "B/1") {
    if (B1 != ".") {
      goto Single;
    }
    B1 = player;
    counter++;
  }
  if (choice == "B/2") {
    if (B2 != ".") {
      goto Single;
    }
    B2 = player;
    counter++;
  }
  if (choice == "B/3") {
    if (B3 != ".") {
      goto Single;
    }
    B3 = player;
    counter++;
  }
  if (choice == "C/1") {
    if (C1 != ".") {
      goto Single;
    }
    C1 = player;
    counter++;
  }
  if (choice == "C/2") {
    if (C2 != ".") {
      goto Single;
    }
    C2 = player;
    counter++;
  }
  if (choice == "C/3") {
    if (C3 != ".") {
      goto Single;
    }
    C3 = player;
    counter++;
  }
  if ((A1 == "X" | A1 == "O") && A1 == A2 && A2 == A3) {
    winner = player;
    x = "A1";
    y = "A2";
    z = "A3";
    goto endscreen;
  }
  if ((B1 == "X" | B1 == "O") && B1 == B2 && B2 == B3) {
    winner = player;
    x = "B1";
    y = "B2";
    z = "B3";
    goto endscreen;
  }
  if ((C1 == "X" | C1 == "O") && C1 == C2 && C2 == C3) {
    winner = player;
    x = "C1";
    y = "C2";
    z = "C3";
    goto endscreen;
  }
  if ((A1 == "X" | A1 == "O") && A1 == B1 && B1 == C1) {
    winner = player;
    x = "A1";
    y = "B1";
    z = "C1";
    goto endscreen;
  }
  if ((A2 == "X" | A2 == "O") && A2 == B2 && B2 == C2) {
    winner = player;
    x = "A2";
    y = "B2";
    z = "C2";
    goto endscreen;
  }
  if ((A3 == "X" | A3 == "O") && A3 == B3 && B3 == C3) {
    winner = player;
    x = "A3";
    y = "B3";
    z = "C3";
    goto endscreen;
  }
  if ((A1 == "X" | A1 == "O") && A1 == B2 && B2 == C3) {
    winner = player;
    x = "A1";
    y = "B2";
    z = "C3";
    goto endscreen;
  }
  if ((A3 == "X" | A3 == "O") && A3 == B2 && B2 == C1) {
    winner = A3;
    x = "A3";
    y = "B2";
    z = "C1";
    goto endscreen;
  }
  goto Single;

bot:
  player = "O";
  srand(time(NULL));
  dice = rand () % 9 + 1;
  if (dice == 1) {
    choice = "A/1";
  }
  if (dice == 2) {
    choice = "A/2";
  }
  if (dice == 3) {
    choice = "A/3";
  }
  if (dice == 4) {
    choice = "B/1";
  }
  if (dice == 5) {
    choice = "B/2";
  }
  if (dice == 6) {
    choice = "B/3";
  }
  if (dice == 7) {
    choice = "C/1";
  }
  if (dice == 8) {
    choice = "C/2";
  }
  if (dice == 9) {
    choice = "C/3";
  }
  if (choice == "A/1") {
    if (A1 != ".") {
      goto Single;
    }
    A1 = player;
    counter++;
  }
  if (choice == "A/2") {
    if (A2 != ".") {
      goto Single;
    }
    A2 = player;
    counter++;
  }
  if (choice == "A/3") {
    if (A3 != ".") {
      goto Single;
    }
    A3 = player;
    counter++;
  }
  if (choice == "B/1") {
    if (B1 != ".") {
      goto Single;
    }
    B1 = player;
    counter++;
  }
  if (choice == "B/2") {
    if (B2 != ".") {
      goto Single;
    }
    B2 = player;
    counter++;
  }
  if (choice == "B/3") {
    if (B3 != ".") {
      goto Single;
    }
    B3 = player;
    counter++;
  }
  if (choice == "C/1") {
    if (C1 != ".") {
      goto Single;
    }
    C1 = player;
    counter++;
  }
  if (choice == "C/2") {
    if (C2 != ".") {
      goto Single;
    }
    C2 = player;
    counter++;
  }
  if (choice == "C/3") {
    if (C3 != ".") {
      goto Single;
    }
    C3 = player;
    counter++;
  }
  if ((A1 == "X" | A1 == "O") && A1 == A2 && A2 == A3) {
    winner = player;
    x = "A1";
    y = "A2";
    z = "A3";
    goto endscreen;
  }
  if ((B1 == "X" | B1 == "O") && B1 == B2 && B2 == B3) {
    winner = player;
    x = "B1";
    y = "B2";
    z = "B3";
    goto endscreen;
  }
  if ((C1 == "X" | C1 == "O") && C1 == C2 && C2 == C3) {
    winner = player;
    x = "C1";
    y = "C2";
    z = "C3";
    goto endscreen;
  }
  if ((A1 == "X" | A1 == "O") && A1 == B1 && B1 == C1) {
    winner = player;
    x = "A1";
    y = "B1";
    z = "C1";
    goto endscreen;
  }
  if ((A2 == "X" | A2 == "O") && A2 == B2 && B2 == C2) {
    winner = player;
    x = "A2";
    y = "B2";
    z = "C2";
    goto endscreen;
  }
  if ((A3 == "X" | A3 == "O") && A3 == B3 && B3 == C3) {
    winner = player;
    x = "A3";
    y = "B3";
    z = "C3";
    goto endscreen;
  }
  if ((A1 == "X" | A1 == "O") && A1 == B2 && B2 == C3) {
    winner = player;
    x = "A1";
    y = "B2";
    z = "C3";
    goto endscreen;
  }
  if ((A3 == "X" | A3 == "O") && A3 == B2 && B2 == C1) {
    winner = A3;
    x = "A3";
    y = "B2";
    z = "C1";
    goto endscreen;
  }
  goto Single;

Two:
  system("CLS");
  if (counter == 9) {
    goto tie;
  }
  cout << "Tic Tac Toe! \n";
  cout << endl;
  cout << "   A B C \n";
  cout << " 1 " << A1 << " " << B1 << " " << C1 << endl;
  cout << " 2 " << A2 << " " << B2 << " " << C2 << endl;
  cout << " 3 " << A3 << " " << B3 << " " << C3 << endl;
  cout << endl;
  cout << "Where would you like to make your move? (Column/Row)  ";
  cin >> choice;
  cout << "Which player are you?  X -or- O?  ";
  cin >> player;
  if (choice == "A/1") {
    if (A1 != ".") {
      goto Two;
    }
    A1 = player;
    counter++;
  }
  if (choice == "A/2") {
    if (A2 != ".") {
      goto Two;
    }
    A2 = player;
    counter++;
  }
  if (choice == "A/3") {
    if (A3 != ".") {
      goto Two;
    }
    A3 = player;
    counter++;
  }
  if (choice == "B/1") {
    if (B1 != ".") {
      goto Two;
    }
    B1 = player;
    counter++;
  }
  if (choice == "B/2") {
    if (B2 != ".") {
      goto Two;
    }
    B2 = player;
    counter++;
  }
  if (choice == "B/3") {
    if (B3 != ".") {
      goto Two;
    }
    B3 = player;
    counter++;
  }
  if (choice == "C/1") {
    if (C1 != ".") {
      goto Two;
    }
    C1 = player;
    counter++;
  }
  if (choice == "C/2") {
    if (C2 != ".") {
      goto Two;
    }
    C2 = player;
    counter++;
  }
  if (choice == "C/3") {
    if (C3 != ".") {
      goto Two;
    }
    C3 = player;
    counter++;
  }
  if ((A1 == "X" | A1 == "O") && A1 == A2 && A2 == A3) {
    winner = player;
    x = "A1";
    y = "A2";
    z = "A3";
    goto endscreen;
  }
  if ((B1 == "X" | B1 == "O") && B1 == B2 && B2 == B3) {
    winner = player;
    x = "B1";
    y = "B2";
    z = "B3";
    goto endscreen;
  }
  if ((C1 == "X" | C1 == "O") && C1 == C2 && C2 == C3) {
    winner = player;
    x = "C1";
    y = "C2";
    z = "C3";
    goto endscreen;
  }
  if ((A1 == "X" | A1 == "O") && A1 == B1 && B1 == C1) {
    winner = player;
    x = "A1";
    y = "B1";
    z = "C1";
    goto endscreen;
  }
  if ((A2 == "X" | A2 == "O") && A2 == B2 && B2 == C2) {
    winner = player;
    x = "A2";
    y = "B2";
    z = "C2";
    goto endscreen;
  }
  if ((A3 == "X" | A3 == "O") && A3 == B3 && B3 == C3) {
    winner = player;
    x = "A3";
    y = "B3";
    z = "C3";
    goto endscreen;
  }
  if ((A1 == "X" | A1 == "O") && A1 == B2 && B2 == C3) {
    winner = player;
    x = "A1";
    y = "B2";
    z = "C3";
    goto endscreen;
  }
  if ((A3 == "X" | A3 == "O") && A3 == B2 && B2 == C1) {
    winner = A3;
    x = "A3";
    y = "B2";
    z = "C1";
    goto endscreen;
  }
  goto Two;


tie:
system("CLS");
cout << "Tic Tac Toe! \n";
cout << endl;
cout << "The game ended in a tie and there is no winner.\n";
cout << endl;
cout << endl;
cout << "Would you like to play another game?  ";
cin >> choice;
goto start;


endscreen:
  system("CLS");
  cout << "Tic Tac Toe! \n";
  cout << endl;
  cout << "Player " << winner << " has won the game!\n\n";
  cout << "   A B C \n";
  cout << " 1 " << A1 << " " << B1 << " " << C1 << endl;
  cout << " 2 " << A2 << " " << B2 << " " << C2 << endl;
  cout << " 3 " << A3 << " " << B3 << " " << C3 << endl;
  cout << endl;
  cout << "Using " << x << ", " << y << ", " << z << " in a line \n";
  cout << endl;
  cout << endl;
  cout << "Would you like to play another game?  ";
  cin >> choice;
  goto start;
}
