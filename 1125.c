#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int G=1,P,S;
    scanf("%d %d",&G,&P);
    while(G!=0)
    {
        int pilot[100][100],ponto[10][101],vet[100],vence[100];
        int max=0;
		int aux=0;
		int i=0,j=0,k=0,t=0;
		
        for(i=0;i<10;i++)
        {
            for(j=0;j<100;j++)
            {
                ponto[i][j]=0;
                vet[j]=vence[j]=0;
            }
        }
        for(i=0;i<G;i++)
        {
            for(j=0;j<P;j++)
            {
                scanf("%d",&pilot[i][j]);
            }
        }
        scanf("%d",&S);
        for(i=0;i<S;i++)
        {
            scanf("%d",&ponto[i][0]);
            for(j=1;j<(ponto[i][0]+1);j++)
            {
                scanf("%d",&ponto[i][j]);   
            } 
        }
        for(t=0;t<S;t++)
        {
            for(j=0;j<100;j++)
            {
                vet[j]=vence[j]=0;
            }
            for(i=0;i<G;i++)
            {
                for(j=0;j<(ponto[t][0]+1);j++)
                {
                    aux=pilot[i][j];
                    vet[j]+=ponto[t][aux];
                }
            }
            max=k=0;
            for(j=0;j<P;j++)
            {
                if(vet[j]>=max)
                {
                    max=vet[j];
                }
            }
            for(j=0;j<P;j++)
            {
                if(vet[j]==max)
                {
                    vence[k]=j+1;
                    k++;
                }
            }
            if(k==1)
            {
                printf("%d",vence[0]);
            }
            else
            {
                for(j=0;j<k-1;j++)
                {
                    printf("%d ",vence[j]);
                }
                printf("%d",vence[j]);
            }
            printf("\n");
        }
        scanf("%d%d",&G,&P);
    }
    return 0;
}
