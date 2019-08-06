#include<stdio.h>

int main(){
  int N, n, i, cont, a;

  scanf("%d", &N);

  for(n=1; n<=N; n++){
    scanf("%d", &a);
    cont=0;

    for(i=2; i<=a/2; i++){
      if(a%i==0){
        cont++;
        break;
      }
    }

    if(cont==0 && a!=1)
    printf("%d eh primo\n", a);
    else
    printf("%d nao eh primo\n", a);
  }

  return 0;
}
