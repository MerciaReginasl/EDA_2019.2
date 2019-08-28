#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int N; 
	scanf("%d", &N); 
	getchar();
	char frase[1001];

	while( N > 0 ) {
        gets(frase);
        int i, m = 0, alfabeto[26] = {0};

        for( i = 0; i < strlen(frase); i++) {
            if( (frase[i] >= 97 && frase[i] <= 122) && (alfabeto[frase[i]-97] == 0) )
                    alfabeto[frase[i]-97]++;
        }

        for( i = 0; i < 26; i++) {
            if( alfabeto[i] > 0 ) m++;
        }

        if( m == 26 ) printf("frase completa\n");
        else if( m >= 13 ) printf("frase quase completa\n");
        else if( m < 13 ) printf("frase mal elaborada\n");

        N--;
	}

	return 0;
}
