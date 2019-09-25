#include<stdio.h>

void main(){
    int n, sum = 0, i;
    while(scanf("%d", &n)!=EOF){
        int notas[n];
        int tps = -1;
        for(i = 0; i < n; i++){
            scanf("%d",&notas[i]);
            sum += notas[i];
        }
        
        if(sum%n==0){
            sum/=n;
            tps = 1;
            for(i = 0; i < n; i++)
                if(notas[i] > sum) tps+=(notas[i]-sum);           
        }
        printf("%d\n", tps);
        tps = 1, sum = 0;
                  
    }
}
