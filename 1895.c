#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n = 0;
  int t = 0;
  int l = 0;
  scanf("%i %i %i",&n ,&t, &l);


  int alice = 0;
  int bob = 0;
  
  int s = 0;
  int i = 0;
  for (i = 1; n != i; i++){
    scanf("%i", &s);
    
//O abs devolve o valor absoluto do numero, 
//isto é, o valor do numero sem levar em consideracao o sinal.

    if (((abs(t-s)) <= l) && (i % 2 != 0)){
      alice += abs(t-s);
      t = s;
    }
    if (((abs(t-s)) <= l) && (i % 2 == 0)){
      bob += abs(t-s);
      t = s;
    }
  }

   printf("%i %i\n", alice , bob);



  return 0;
}
