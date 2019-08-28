#include <stdio.h>

int coral(int cor[], int m, int l){
	
    if(m%l != 0) return -1;
    
    int maior = 0;
    m = m/l;
    for(i = 0; i < l; i++){
            if(cor[i] > m)
                   maior += cor[i] - m;
    }
    return maior+1;
}
int main(){
    int n, aux, soma;
    
    while(scanf("%d", &n) != EOF){
                      int vet[n];
                      aux = 0;
                      soma = 0;
                      while(aux < n){
                                scanf("%d",&vet[aux]);
                                soma += vet[aux];
                                aux++;
                      }
                      printf("%d\n",coral(vet,soma,n));
    }
    return 0;
} 
