#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 1001

int main(){	
	char vetor[MAX];
	int i, m, q;
	
	scanf("%d", &m);
	//memset(vetor, 0, m + 1);
	
	for(i=0; i<m; i++){
		scanf("%d", &q);
		vetor[q] = 1;
	}
	
	for(i=1; i<=m; i++)
		if(!vetor[i])
			break;
			
	printf("%d\n", i);	
	
	return 0;
}
