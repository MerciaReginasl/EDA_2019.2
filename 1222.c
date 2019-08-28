#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
     int numPalavras, linhas, paginas, caracter, i;
     short maxLinhas, maxCaracter;
     char palavra[71];

     while(scanf("%d %hd %hd", &numPalavras, &maxLinhas, &maxCaracter) != EOF){
     	for(i = 1, linhas = paginas = caracter = 0; i <= numPalavras; i++){
     		scanf("%s", &palavra);
     		
     		caracter += strlen(palavra);
     
            if(caracter == maxCaracter){
            	caracter = 0;
            	linhas++;
            }
     		else if(caracter > maxCaracter){
                caracter = strlen(palavra) + 1;
                linhas++;
     		}
     		 		 
     		else if(i < numPalavras){
     		     caracter++;

	     		 if(caracter == maxCaracter){
	            	caracter = 0;
	            	linhas++;
	            }
	        }

     		if(linhas == maxLinhas){
     			linhas = 0;
     			paginas++;
     		}
     	}

     	if(linhas > 0 || caracter > 0) paginas++;
     	printf("%d\n", paginas);
     }

	 return 0;
}
