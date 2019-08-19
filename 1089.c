#include<stdio.h>

int main(){
	int n, i; //declarando variaveis simples;
	int vetor[3]; //três picos - tamanho do vetor
	int p0; //pico minimo
	int p1; //pico maximo
	int picos;
	
	while(1){
	//sempre entre o loop, toda vez que a condição for testada (no início, e sempre que usar
	//passo terminar) ele vai dar verdadeiro e o loop vai continuar.
		
		scanf("%d", &n);
		
		if(n==0)
			break; //o loop termina nesta condição
			
			picos=0;
			scanf("%d", &vetor[0]); //ler o valor.
			scanf("%d", &vetor[1]);
			
			if(n==2){
				if(vetor[0] != vetor[1])
					picos=2; //se a posição de vetor[0] for diferente de vetor[1] pico recebe 2.
					
			}
			
			else{ //se não recebe as posições encontradas
				
				p0=vetor[0];
				p1=vetor[1];
				
				for(i=2; i<n; i++){ //condição do loop
					scanf("%d", &vetor[2]); //ler o valor de condição de picos.
					
					if((vetor[1]>vetor[0] && vetor[1]>vetor[2]) || ((vetor[1]<vetor[0]) && vetor[1]<vetor[2]))
						++picos; //valor do pico após o incremento.
						
						vetor[0]=vetor[1];
						vetor[1]=vetor[2];
				}
				//condições de picos e vetores
				
				if((p0>p1 && p0>vetor[2]) || (p0<p1 && p0<vetor[2]))
					++picos;
					
				if((vetor[2]>vetor[0] && vetor[2]>p0) || (vetor[2]<vetor[0] && vetor[2]<p0))
					++picos;
			}
			
			printf("%d\n", picos); //copia picos
	}
	return 0;
}
