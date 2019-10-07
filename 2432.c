#include <stdlib.h>
#include <stdio.h>
#include <math.h>
typedef struct
{
    long long int x, y;
} Tiro;

int main()
{
    long long int c, t, i, pontuacao = 0;
    scanf("%lld %lld", &c, &t);
    Tiro tiros[t];
    long long int circs[c];
    for (i = 0; i < c; i++)
        scanf("%lld", &circs[i]);
    for (i = 0; i < t; i++)
        scanf("%lld %lld", &tiros[i].x, &tiros[i].y);
    for (i = 0; i < t; i++)
    {
        double dist_tiro_centro = sqrt((tiros[i].x * tiros[i].x) + (tiros[i].y * tiros[i].y));
        // Aplicar busca binaria para verificar se está dentro de algum circulo
        int m, j = 0, f = c - 1, ponto = 0;

        while (j <= f)
        {
            m = (j + f) / 2;

            if (dist_tiro_centro <= circs[m])
            {
                ponto = c - m;
                f = m - 1;
            }

            else if (dist_tiro_centro > circs[m])
                j = m + 1;

            else
                f = m - 1;
        }

        pontuacao += ponto;
    }
    printf("%lld\n", pontuacao);
    return 0;
}
