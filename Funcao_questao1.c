#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isRealNumber(char *x)
{
  int i, hasPoint = 0, numAfterPoint = 0;
  for (i = 0; x[i] != '\0'; i++)
  {
    if (hasPoint)
      numAfterPoint = 1;
    if (x[i] == '.' && !hasPoint)
      hasPoint = 1;
    else if ((x[i] == '.' && hasPoint) || ((x[i] < '0') || (x[i] > '9')) && (x[i] != '.'))
    {
      return 0;
    }
  }
  if (numAfterPoint || !hasPoint)
    return 1;
  else
    return 0;
}

int isIntNumber(char *x){
  int i;
  for(i=0;x[i]!= '\0';i++) if(x[i] < '0' || x[i] > '9') return 0;
  return 1;
}

int atol2(char *x)
{
  if (!isIntNumber(x))
    return 0;
  else
  {
    int i, sum = 0, pot = 0;
    for (i = strlen(x) - 1; i >= 0; i--)
    {
      sum += (x[i] - '0') * (pow(10, pot)), pot++;
    }
    return sum;
  }
}
int main()
{
  printf("%d\n", isRealNumber("123"));

  printf("%d\n", isRealNumber("123pi"));

  printf("%d\n", atol2("mrsl9"));

  printf("%d\n", atol2("12349"));

  return 0;
}
