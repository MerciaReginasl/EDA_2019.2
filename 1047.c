#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d%d%d", &a, &e, &b, &f);
    if(a==f && b==f && f==e)
    {
        c=e-f;
        d=24+a-b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, c);
    }
    else if(a==b && f>e)
    {
        c=f-e;
        d=a-b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, c);
    }
    else if(a==b && e>f)
    {
        c=60-e+f;
        d=24-a+b-1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, c);
    }
    else if(e==f && a<b)
    {
        c=0;
        d=b-a;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, c);
    }
    else if(e==f && a>b)
    {
        c=0;
        d=24-a+b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, c);
    }
    else if(b>a && f>e)
    {
        c=f-e;
        d=b-a;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, c);
    }
    else if(a<b && e>f)
    {
        c=60-e+f;
        d=b-a-1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, c);
    }
    else if(a>b && e<f)
    {
        c=f-e;
        d=24-a-1+b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, c);
    }
    else if(a>b && e>f)
    {
        c=60+f-e;
        d=24+b-a-1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, c);
    }
    return 0;
}
