#include <stdio.h>

#define MAX 4500

void add(char p[], char q[], char ans[])
{
  int carry = 0;
  for (int i = MAX - 1; i >= 0; i--)
  {
    int digit = (p[i] - '0') + (q[i] - '0') + carry;
    ans[i] = (digit % 10) + '0';
    carry = digit / 10;
  }
}

void fibonacci(char p[], char q[])
{
  for (int i = MAX - 1; i >= 0; i--)
    p[i] = q[i];
}

char fun1[MAX];
char fun2[MAX];
char ans[MAX];

int main()
{

  for (int i = 0; i < MAX; i++)
  {
    fun1[i] = fun2[i] = ans[i] = '0';
  }
  fun2[MAX - 1] = '1';

  int n;
  scanf("%d", &n);

  if (n == 0 || n == 1)
  {
    printf("%c", n + '0');
  }
  else
  {
    for (int i = 2; i <= n; i++)
    {
      add(fun1, fun2, ans);
      fibonacci(fun1, fun2);
      fibonacci(fun2, ans);
    }

    int n = 0;
    for (int i = 0; i < MAX; i++)
    {
      if (n == 0 && ans[i] == '0')
        continue;

      if (n == 0 && ans[i] != '0')
        n = 1;
      printf("%c", ans[i]);
    }
    printf("\n");
  }
  return 0;
}
