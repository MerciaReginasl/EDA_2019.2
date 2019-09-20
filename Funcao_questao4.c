#include <stdio.h>
#include <math.h>

//Fatorial recursiva
double fatorialRec(int n)
{
    if (n == 1)
        return 1.0;
    else
        return (double) n * fatorialRec(n - 1.0);
}

//Fatorial iterativa
double fatorialItr(int n)
{
    int i;
    double res = 1.0;
    for (i = 2; i <= n; i++)
        res = res * i;
    return res;
}

//seno iterativo
long double senoItr(double x, int qtd)
{
    int i;
    long double res = x, tmp;
    for (i = 1; i < qtd; i++)
    {
        tmp = pow(x, 2*i+1) / fatorialItr((2*i)+1);
        res = (i % 2) ? res - tmp : res + tmp;
        }
    return res;
}
//seno recursivo
long double senoRec(double x, int qtd)
{
    int t = qtd * 2 - 1;
    if (qtd == 1)
        return x;
    else if (qtd % 2 == 0)
        return senoRec(x, qtd - 1) - (pow(x, t) / fatorialRec(t));
    else
        return senoRec(x, qtd - 1) + (pow(x, t) / fatorialRec(t));
}

void main()
{
    // Testes das funções fatoriais
    printf("Fatorial de 5 na recursiva: %lf\n", fatorialRec(5));

    printf("Fatorial de 5 na iterativa: %lf\n", fatorialItr(5));
    
    //Testes das funções seno
    printf("Seno de 3.14 na iterativa: %Lf\n",  senoItr(3.14, 8));

    printf("Seno de 3.14 na recursiva: %Lf\n", senoRec(3.14, 8));

    printf("Seno de 3.14 no metodo sin(): %lf\n", sin(3.14));
}
