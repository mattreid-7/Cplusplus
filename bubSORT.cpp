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
