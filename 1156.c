#include<stdio.h>

int main(){
  int cont;
  int c=1;
  double soma=0.0;

  for(cont=1; cont<=39; cont+=2, c*=2){
    soma=soma+(float)cont/c;
  }

  printf("%.2f\n", soma);

  return 0;
  
}
