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
