#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	int vetor[2000];
	int N, i, maior = 0; //N é lido na estrada
		
	scanf("%d", &N); //as demais  variáveis  também são lidas.
	
	for(i=0; i<2000; i++)
		vetor[i]=0;
	
	while(N>=1){
		scanf("%d", &i);
		if(i>maior)
			maior=i;
			
		vetor[i-1]++;
		N--; //decrementa N
		
		}
		
		for(N=0; N<=maior; N++)
			if(vetor[N]>=1)
				printf("%d aparece %d vez(es)\n", N+1, vetor[N]);
				
		return 0;
}
