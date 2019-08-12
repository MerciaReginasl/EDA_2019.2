#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int x, y, c, prox=1;
	scanf("%d%d", &x,&y);
	
	for(c = 1; c <= y; c++){
		if(prox!=x){
			prox++;
			printf("%d ", c);			
		}else{
			printf("%d\n", c);	
			prox=1;
		}
	}
	
	return 0;
}
