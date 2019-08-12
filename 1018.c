#include<stdio.h>

int main(){
	int N, Q;
	scanf("%d", &N);
	printf("%d", N);
	
	Q = N / 100;
	printf("%d nota(s) de R$ 100,00\n", Q);
	N = N - Q * 100;
	
	Q = N / 50;
	printf("%d nota(s) de R$ 50,00\n", Q);
	N = N - Q * 50;
	
	Q = N / 20;
	printf("%d nota(s) de R$ 20,00\n", Q);
	N = N - Q * 20;
	
	Q = N / 10;
	printf("%d nota(s) de R$ 10,00\n", Q);
	N = N - Q * 10;
	
	Q = N / 5;
	printf("%d nota(s) de R$ 5,00\n", Q);
	N = N - Q * 5;
	
	Q = N / 2;
	printf("%d nota(s) de R$ 2,00\n", Q);
	N = N - Q * 2;
	
	Q = N / 1;
	printf("%d nota(s) de R$ 1,00\n", Q);
	N = N - Q * 1;
	
	return 0;
}
