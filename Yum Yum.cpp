// Hayden's Assignment

#include <iostream>
#include <string>
#include <time.h>
#define MAX 6

using namespace std;

void total(int roll[MAX]);
void match2(int roll[MAX]);
void match3(int roll[MAX]);
void match4(int roll[MAX]);
void match5(int roll[MAX]);
void match6(int roll[MAX]);
void sequence2(int roll[MAX]);
void sequence3(int roll[MAX]);
void sequence4(int roll[MAX]);
void sequence5(int roll[MAX]);
void sequence6(int roll[MAX]);
void sum2(int roll[MAX]);
void sum3(int roll[MAX]);
void sum4(int roll[MAX]);
void sum5(int roll[MAX]);
void yumyum(int roll[MAX]);
void selSORT(int roll[MAX]);
void bubSORT(int roll[MAX]);

int optimal = 0;
int a, b, c, x, y, z;

int main() {
beginning:
  system("CLS");
  int roll[MAX];
  int i, score, optimal;
  int sum = 0;
  int x = 0, y = 0, z = 0;
  string choice, method;

  cout << "Yum Yum Game!" << endl;
  cout << endl;
  cout << "1) You choose the numbers" << endl;
  cout << "2) You get random numbers" << endl;
  cout << endl;
  cout << "Which game mode would you like to play?  ";
  cin >> choice;
  if (choice == "1")
  {
    goto player;
  }
  if (choice == "2")
  {
    goto computer;
  }
  goto beginning;

computer:
  srand(time(NULL));
  roll[1] = rand () % 9 + 1;
  cin >> choice;
  roll[2] = rand () % 9 + 1;
  cin >> choice;
  roll[3] = rand () % 9 + 1;
  cin >> choice;
  roll[4] = rand () % 9 + 1;
  cin >> choice;
  roll[5] = rand () % 9 + 1;
  cin >> choice;
  roll[6] = rand () % 9 + 1;
  cin >> choice;

  selSORT(roll);
  goto end;

player:
  for (i = 1; i <= MAX; ++i)
  {
    loop:
    cout << "Enter Number:  ";
    cin >> roll[i];
    if (roll[i] < 1 || roll[i] > 9)
    {
      cout << "Invalid input: 6 integers 1..9 in sorted order must be supplied \n";
      goto loop;
    }
    if (roll[i] < roll[i-1])
    {
      cout << "Invalid input: 6 integers 1..9 in sorted order must be supplied \n";
      goto loop;
    }
  }
  goto end;

end:
  system("CLS");
  cout << roll[1] << " " << roll[2] << " " << roll[3] << " " << roll[4] << " " << roll[5] << " " << roll[6] << endl;
  cout << endl;

  total (roll);
  match2 (roll);
  match3 (roll);
  match4 (roll);
  match5 (roll);
  match6 (roll);
  sequence2 (roll);
  sequence3 (roll);
  sequence4 (roll);
  sequence5 (roll);
  sequence6 (roll);
  sum2 (roll);
  sum3 (roll);
  sum4 (roll);
  sum5 (roll);
  yumyum (roll);

  cout << endl;
  cout << endl;
  cout << "Restart?  ";
  system("pause > null");
  goto beginning;

}

void total(int roll[MAX]) {
  int i = 0;
  int sum = 0;
  while ( i <= MAX) {
    sum = sum + roll[i];
    i++;
  }
  cout << "total - " << sum << " " << endl;
}

void match2(int roll[MAX]) {
  int current = 0;
  int sum = 0;
  for (int i = 1; i <= MAX; ++i)
  {
    if (current == roll[i])
    {
      sum = 2 * current + 19;
      x = current;
    }
    current = roll[i];
  }
  cout << "match2 - (" << x << ") " << sum << " " << endl;
}

void match3(int roll[MAX]) {
  int current = 0;
  int sum = 0;
  int prev = 1;
  int next = 2;
  for (int i = 1;  i <= MAX; ++i)
  {
    if (current == prev && current == next)
    {
      sum = 3 * current + 21;
      x = current;
    }
    current = roll[i];
    next = roll[i+1];
    prev = roll[i-1];
  }
  cout << "match3 - (" << x << ") " << sum << " " << endl;
}

void match4(int roll[MAX]) {
  int current = 0;
  int sum = 0;
  int prev = 1;
  int next = 2;
  int next2 = 3;
  for (int i = 1;  i <= MAX; ++i)
  {
    if (current == prev && current == next && current == next2)
    {
      sum = 4 * current + 23;
      x = current;
    }
    current = roll[i];
    next = roll[i+1];
    prev = roll[i-1];
    next2 = roll[i+2];
  }
  cout << "match4 - (" << x << ") " << sum << " " << endl;
}

void match5(int roll[MAX]) {
  int current = 0;
  int sum = 0;
  int prev = 1;
  int next = 2;
  int next2 = 3;
  int prev2 = 4;
  for (int i = 1;  i <= MAX; ++i)
  {
    if (current == prev && current == next && current == next2 && current == prev2)
    {
      sum = 5 * current + 25;
      x = current;
    }
    current = roll[i];
    next = roll[i+1];
    prev = roll[i-1];
    next2 = roll[i+2];
    prev2 = roll[i-2];
  }
  cout << "match5 - (" << x << ") " << sum << " " << endl;
}

void match6(int roll[MAX]) {
  int sum = 0;
  if (roll[1] == roll[2] && roll[2] == roll[3] && roll[3] == roll[4] && roll[4] == roll[5] && roll[5] == roll[6])
  {
    sum = 6 * roll[1] + 27;
    x = roll[1];
  }
  cout << "match6 - (" << x << ") " << sum << " " << endl;
}

void sequence2(int roll[MAX]) {
  int sum = 0;
  for (int i = 1; i <= MAX; ++i)
  {
    for (int j = 1; j <= MAX; ++j)
    {
      if (roll[i] + 1 == roll[j])
      {
        sum = 2 * roll[j] + 17;
      }
    }
  }
  cout << "sequence2 - (" << x <<"+"<< y <<"="<< z << ") " << sum << " " << endl;
}

void sequence3(int roll[MAX]) {
  int sum = 0;
  for (int i = 1; i <= MAX; ++i)
  {
    for (int j = 1; j <= MAX; ++j)
    {
      for (int k = 1; k <= MAX; ++k)
      {
        if (roll[i] + 2 == roll[j] + 1 && roll[j] + 1 == roll[k])
        sum = 3 * roll[k] + 18;
      }
    }
  }
  cout << "sequence3 - (" << x <<"+"<< y <<"="<< z << ") " << sum << " " << endl;
}

void sequence4(int roll[MAX]) {
  int sum = 0;
  for (int i = 1; i <= MAX; ++i)
  {
    for (int j = 1; j <= MAX; ++j)
    {
      for (int k = 1; k <= MAX; ++k)
      {
        for (int l = 1; l <= MAX; ++l)
        {
        if (roll[i] + 3 == roll[j] + 2 && roll[j] + 2 == roll[k] + 1 && roll[k] + 1 == roll[l])
        sum = 4 * roll[l] + 19;
        }
      }
    }
  }
  cout << "sequence4 - (" << x <<"+"<< y <<"="<< z << ") " << sum << " " << endl;
}

void sequence5(int roll[MAX]) {
  int sum = 0;
  for (int i = 1; i <= MAX; ++i)
  {
    for (int j = 1; j <= MAX; ++j)
    {
      for (int k = 1; k <= MAX; ++k)
      {
        for (int l = 1; l <= MAX; ++l)
        {
          for (int m = 1; m <= MAX; ++m)
          {
            if (roll[i] + 4 == roll[j] + 3 && roll[j] + 3 == roll[k] + 2 && roll[k] + 2 == roll[l] + 1 && roll[l] + 1 == roll[m])
            sum = 5 * roll[m] + 20;
          }
        }
      }
    }
  }
  cout << "sequence5 - (" << x <<"+"<< y <<"="<< z << ") " << sum << " " << endl;
}

void sequence6(int roll[MAX]) {
  int sum = 0;
  for (int i = 1; i <= MAX; ++i)
  {
    for (int j = 1; j <= MAX; ++j)
    {
      for (int k = 1; k <= MAX; ++k)
      {
        for (int l = 1; l <= MAX; ++l)
        {
          for (int m = 1; m <= MAX; ++m)
          {
            for (int n = 1; n <= MAX; ++n)
            {
            if (roll[i] + 5 == roll[j] + 4 && roll[j] + 4 == roll[k] + 3 && roll[k] + 3 == roll[l] + 2 && roll[l] + 2 == roll[m] + 1 && roll[m] + 1 == roll[n])
            sum = 6 * roll[n] + 21;
            }
          }
        }
      }
    }
  }
  cout << "sequence6 - (" << x <<"+"<< y <<"="<< z << ") " << sum << " " << endl;
}

void sum2(int roll[MAX]) {
    int sum = 0;
    for (int i = 1; i <= MAX; i++)
    {
      for (int j = i + 1; j <= MAX; j++)
      {
        for (int k = j + 1; k <= MAX; k++)
        {
          if (roll[i] + roll[j] == roll[k])
          {
            sum = roll[i] + roll[k] + 22;
          }
        }
      }
    }
    cout << "sum2 - (" << x <<"+"<< y <<"="<< z << ") " << sum << " " << endl;
  }

void sum3(int roll[MAX]) {
    int sum = 0;
    for (int i = 1; i <= MAX; i++)
    {
      for (int j = i + 1; j <= MAX; j++)
      {
        for (int k = j + 1; k <= MAX; k++)
        {
          for (int l = k + 1; l <= MAX; l++)
          {
            if (roll[i] + roll[j] + roll[k] == roll[l])
            {
              sum = roll[i] + roll[l] + 29;
            }

          }
        }
      }
    }
    cout << "sum3 - (" << x <<"+"<< y <<"="<< z << ") " << sum << " " << endl;
  }

void sum4(int roll[MAX]) {
    int sum = 0;
    for (int i = 1; i <= MAX; i++)
    {
      for (int j = i + 1; j <= MAX; j++)
      {
        for (int k = j + 1; k <= MAX; k++)
        {
          for (int l = k + 1; l <= MAX; l++)
          {
            for (int m = l + 1; m <= MAX; m++)
            {
              if (roll[i] + roll[j] + roll[k] + roll[l] == roll[m])
              {
                sum = roll[i] + roll[m] + 38;
              }
            }
          }
        }
      }
    }
    cout << "sum4 - (" << x <<"+"<< y <<"="<< z << ") " << sum << " " << endl;
  }

void sum5(int roll[MAX]) {
    int sum = 0;
    for (int i = 1; i <= MAX; i++)
    {
      for (int j = i + 1; j <= MAX; j++)
      {
        for (int k = j + 1; k <= MAX; k++)
        {
          for (int l = k + 1; l <= MAX; l++)
          {
            for (int m = l + 1; m <= MAX; m++)
            {
              for (int n = m + 1; n <= MAX; n++)
              {
                if (roll[i] + roll[j] + roll[k] + roll[l] + roll[m] == roll[n])
                {
                  sum = roll[i] + roll[n] + 49;
                }
              }
            }
          }
        }
      }
    }
    cout << "sum5 - (" << x <<"+"<< y <<"="<< z << ") " << sum << " " << endl;;
  }

void yumyum(int roll[MAX]) {
  int sum1 = 0;
  int sum2 = 0;
  int sum = 0;
  int o = 0;
  for (int i = 6; i >= 1; i--)
  {
    for (int j = i - 1; j >= 1; j--)
    {
      for (int k = j - 1; k >= 1; k--)
      {
        if (roll[k] + roll[j] == roll[i])
        {
          for (int l = 1; l <= MAX; l++)
          {
            for (int m = l + 1; m <= MAX; m++)
            {
              for (int n = m + 1; n <= MAX; n++)
              {
                if (roll[l] + roll[m] == roll[n] && (l != i && l != j && l != k) && (m != i && m != j && m != k) && n != i && n != j && n != k)
                {
                  sum1 = 1 * roll[k] + 2 * roll[j] + 3 * roll[i];
                  sum2 = 4 * roll[l] + 5 * roll[m] + 6 * roll[n];
                  sum = sum1 + sum2;
                  int x = roll[k];
                  int y = roll[j];
                  int z = roll[i];
                }
              }
            }
          }
        }
      }
    }
  }
  cout << "yum yum - (" << x <<"+"<< y <<"="<< z << ") " << sum << " " << endl;
}

void selSORT(int roll[MAX]) {
  int posmin, temp;
  for (int i = 1; i <= MAX; i++)
  {
    posmin = i;
    for (int j = i + 1; j <= MAX; j++)
    {
      if (roll[j] < roll[posmin])
      {
        posmin = j;
      }
    }
    if (posmin != i)
    {
      temp = roll[i];
      roll[i] = roll[posmin];
      roll[posmin] = temp;
    }
  }
}

void bubSORT(int roll[MAX]) {
  int temp;
  for (int i = 1; i <= MAX; ++i)
  {
    if (roll[i+1] < roll[i])
    {
      temp = roll[i];
      roll[i] = roll[i+1];
      roll[i+1] = temp;
    }
  }
}
