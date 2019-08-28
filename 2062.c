#include <stdio.h>
#include <string.h>
#define MAX 10000

int main(){

    int i, tamanho, N; 
	scanf("%d", &N);
    char frase[MAX], nova[MAX];

    getchar();
    gets(frase);
    tamanho = strlen(frase);

    for( i = 0; i < tamanho; ++i )
    {
        if( (i == 0 || frase[i-1] == ' ')
           && (frase[i] == 'O') && (frase[i+1] == 'B')
           && (frase[i+3] == ' ' || frase[i+3] == '\0') )
            {
            frase[i+2] = 'I';
            }

        else if( (i == 0 || frase[i-1] == ' ')
                && (frase[i] == 'U') && (frase[i+1] == 'R')
                && (frase[i+3] == ' ' || frase[i+3] == '\0') )
                {
                frase[i+2] = 'I';
                }
    }

    strncpy(nova, frase, tamanho);

    printf("%s\n", nova);

    return 0;
}
