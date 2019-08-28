#include <stdio.h>
#include <stdlib.h>

int main() {
    int turma = 1, maior_media = 0, N; 
	scanf("%d", &N);

    while( N != 0) {
        int codigo[N];
		int media[N];
        int i;

        for( i = 0; i < N; i++ ) {
            scanf("%d%d", &codigo[i], &media[i]);
        }

        maior_media = 0;
        for( i = 0; i < N; i++ ) {
            if( media[i] >= maior_media ) maior_media = media[i];
        }

        printf("Turma %d\n", turma);
        for( i = 0; i < N; i++ ) {
            if( media[i] == maior_media ) 
				printf("%d ", codigo[i]);
        }

        printf("\n\n");
        turma++;
        scanf("%d", &N);
    }

    return 0;
}

