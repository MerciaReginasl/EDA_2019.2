#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    double x, y;
} Ponto;

typedef struct{
    double a, b, c;
} Reta;

double dist_DoisPontos(Ponto p, Ponto q){
    double dist = sqrt(pow((p.x - q.x), 2) + pow((p.y - q.y),2));
    return dist;
}

double Linha(Ponto p, Reta r){
    return ((p.x * r.a + p.y * r.b + r.c) == 0);
}

double distPontoLinha(Ponto p, Reta r){
    double dist = abs(r.a * p.x + r.b * p.y + r.c)/sqrt(r.a*r.a + r.b*r.b);
    return dist;
}

void main(){
    Ponto p, q;
    Reta r;
    printf("Digite as coordenadas do 1 ponto:\n");
    scanf("%lf %lf", &p.x, &p.y);
    printf("Digite as coordenadas do 2 ponto:\n");
    scanf("%lf %lf", &q.x, &q.y);
    printf("Digite as coordenadas da reta:\n");
    scanf("%lf %lf %lf", &r.a, &r.b, &r.c);

    printf("Distancia entre os dois pontos: %.2lf\n", dist_DoisPontos(p,q));
    int disPontoLinha = Linha(p, r);
    if(distPontoLinha) printf("O primeiro ponto esta na reta!\n");
    else{
        printf("O primeiro ponto nao esta na reta!\n");

        printf("Distancia do primeiro ponto para a reta: %.2lf\n", dist_PontoLinha(p, r));
    }

}
