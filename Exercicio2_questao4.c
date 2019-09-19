Description:  Questão 4: Reescreva esse código e corrija os erros para que ele funcione da maneira esperada. 
 *    Ou seja, deve-se colocar corretamente na saída a média de cada aluno, sabendo que as 4 notas do alunos a2 
 *    equivalem às 4 primeiras notas do aluno a1 subtraídas de 10.
 *    
 *        
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int idade;
    char nome[50];
    int *notas;
} aluno;

int main(){
    aluno a1, a2;
    a1.idade = 10;
    strcpy(a1.nome, "Pedro"); //Creio que o nome Maria seria para a2
    a2.idade = 12;
    strcpy(a2.nome, "Maria");

    a1.notas = (int*)malloc(5*sizeof(int));
    a2.notas = (int*)malloc(4*sizeof(int));
    int i;
    double media = 0;
    for(i = 0; i < 5; i++){
        a1.notas[i] = 100;
        if(i<4) a2.notas[i] = 100;
        media += a1.notas[i];
    }
    media = media/5;
    printf("Media de %s: %.2lf\n", a1.nome, media);

    media = 0;

    for(i = 0; i < 4; i++){
        a2.notas[i]-=10;
        media+=a2.notas[i];
    }
    media = media/4;
    printf("Media de %s: %.2lf\n", a2.nome, media);

    free(a1.notas);
    return 0;
}
