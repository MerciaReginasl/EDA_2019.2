#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, N, tamanho, s, D[61], E[61];
    char pares;

    while( scanf("%d", &N) >= 0) {
        s = 0;

        for( i = 0; i < 61; i++ ) {
            E[i] = 0;
            D[i] = 0;
        }

        while( N-- ) {
        
            scanf("%d %c", &tamanho, &pares ); 

            if( pares == 'E' ) { 
                E[tamanho]++; 
            }

            else { D[tamanho]++; }

            if( E[tamanho] && D[tamanho] ) {
                E[tamanho]--;
                D[tamanho]--;
                s++;
            }
        }
        printf("%d\n", s);
    }

    return 0;
}
