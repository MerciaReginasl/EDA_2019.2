#include <stdio.h>

int main(void) {
	int N=1, jogadas, mary=0, john=0;

	while(N != 0) {
		scanf("%d", &N);

		if(N == 0) {
			return 0;
		}

		while(N--) {
			scanf("%d", &jogadas);

			if(jogadas == 0) {
				mary++;
			}
	
			else {
				john++;
			}
		}
		
		printf("Mary won %d times and John won %d times\n", mary, john);
		mary = 0;
		john = 0;
	}

	return 0;
}
