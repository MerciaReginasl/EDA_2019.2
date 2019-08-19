#include <stdio.h>
#include <string.h>

int main()
{
    int N, m, i, k;
    char string1[51], string2[51], resulto[101];
    int len_1, len_2;

    scanf("%d", &N);

    for (m = 0; m < N; ++m) {
        scanf("%s %s", string1, string2);

        len_1 = strlen(string1);
        len_2 = strlen(string2);

        for (i = 0, k = 0; i < len_1 && i < len_2; ++i, k += 2) {
            resulto[k] = string1[i];
            resulto[k + 1] = string2[i];
        }

        for (; i < len_1; ++i, ++k)
            resulto[k] = string1[i];

        for (; i < len_2; ++i, ++k)
            resulto[k] = string2[i];

        resulto[k] = '\0'; //para indicar o final da string

        puts(resulto); 
		//puts significa "put string" (colocar string), utilizado para "colocar" uma string na saída de dados.
		
    }

    return 0;
}
