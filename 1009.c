#include<stdio.h>

int main(){
	char nome [100];
	scanf("%s", nome);

	double salario;
	scanf("%lf", &salario);

	double vendas;
	scanf("%lf", &vendas);

	double sal_final = salario + (vendas * 0.15);

	printf("TOTAL = R$ %.2lf\n", sal_final);

	return 0;

}
