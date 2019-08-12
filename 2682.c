#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main (){	
	
	int inicio = 0, n, in=0, out;
	
	while(scanf("%d", &n) != EOF){
		if(!inicio && n < in){
			inicio=1;
			out = in + 1;			
		}
		in = n;
	}
	
	if(!inicio)
		out = in + 1;

	printf("%d\n", out);
	
	return 0;
}
