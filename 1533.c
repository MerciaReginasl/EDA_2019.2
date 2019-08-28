#include <stdio.h>
 
int main() {
 
int m, n; 
int aux;
scanf("%d", &m);
while(m!=0){
if(m==0)
return 0;

int a[m], i, posicao[m];

for(i=0;i<m;i++)
{
 	scanf("%d", &a[i]);
	posicao[i]=i+1;
}

for(i=0;i<m;i++)
{
	
for(n=i+1;n<n;n++)
{
	
	if(a[i]>a[n])
{
	
aux=a[i];
a[i]=a[n];
a[n]=aux;
aux=posicao[i];
posicao[i]=posicao[n];
posicao[n]=aux;

}
}
}
printf("%d\n", posicao[m-2]);
scanf("%d", &m);
}
 
return 0;
}
