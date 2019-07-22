#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(int argc, string argv[]) {
  string p;
  int n, i;

  if (argc != 2)
  {
    cout << "Usage:: ./Caesar k\n";
    return 1;
  }


  int key = stoi(argv[1]);
  cout << "Plain Text:  ";
  cin >> p;
  cout << "Cypher Text:  ";

  for (int i = 0, n = string::length(p); i < n; i++)
  {
    if (isaplha(p[i]))
    {
      if (isupper(p[i]))
      {
        char AsciiU = p[i];
        int indexU = AsciiU - 65;
        int cypherU = (indexU + key) % 26;
        char newAsciiU = cypherU + 65;
        cout << newAsciiU;
      }
      if (islower(p[i]))
      {
        char AsciiL = p[i];
        int indexL = AsciiL - 97;
        int cypherL = (indexL + key) % 26;
        char newAsciiL = cypherL + 97;
        cout << newAsciiL;
      }

      else
      {
        cout << p[i];
      }
    }
  }
  cout << endl;
  return 0;
}
