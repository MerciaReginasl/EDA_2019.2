#include <stdio.h>

int main(void) {
	int num_Suspeitos=0, maior=0, i=0, ind_Maior=0;

	do {
		scanf("%d", &num_Suspeitos);
		int suspeitos[num_Suspeitos];
		maior = -1;

		for(i = 0; i < num_Suspeitos; i++) {
			scanf("%d", &suspeitos[i]);
			if(suspeitos[i] > maior) {
				ind_Maior = i;
			}
			maior = suspeitos[i];
		}

		suspeitos[ind_Maior] = 0;
		maior = -1;
		i = 0, ind_Maior=0; 
		
		for(i = 0; i < num_Suspeitos; i++) {
			if(suspeitos[i] > maior) {
				ind_Maior = i;
			}
			maior = suspeitos[i];
		}

		printf("%d\n", ind_Maior);
		printf("Vet->>>%d\n", suspeitos[ind_Maior]);

	}while(num_Suspeitos != 0);

	return 0;
}
