#include <stdio.h>
#include <math.h>

void main(){
	
    int n, m, i, mt=0, mc;
    scanf("%d %d", &n, &m);
    int pin[n];
    for (i=0;i<n;i++){
        scanf("%d",&pin[i]);
    }
    for(i=0;i<n;i++){
        mc = fabs(pin[i]-m);
        printf("%d\n", mc);
        if(pin[i] > m && i+1<n) pin[i]-=mc,pin[i+1]-=mc;
        else if (pin[i]<m && i+1<n)pin[i]+=mc, pin[i+1]+=mc;
        mt+=mc;
    }
    printf("%d\n", mt);

}
