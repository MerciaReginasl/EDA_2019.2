#include <stdio.h>
#include <string.h>

int procuraEspecie(int *, int numero, int tam);

int main ()
{


	int qtsLinhas, ordem, i;
	int linha, coluna;
	int qtsEspecies, aux;

	while (scanf("%d", &ordem) != EOF)
	{

		// Declaração de uma matriz onde a quantidade de linhas e colunas
		// Tem uma unidade a mais, pois a questão considera a primeira linha e coluna
		// Como sendo 1 e não 0 como é o padrão;
		int floresta[ordem + 1][ordem + 1];
		// Vetor onde irão ficar as espécies já vistas;
		int especiesVistas[ordem * ordem];

		aux = ordem + 1;
		// Inicializa a matriz com todos os valores como 0;
		
		// Preenche a matriz;
		for (linha = 1; linha < aux; linha++)
			for (coluna = 1; coluna < aux; coluna++)
				scanf("%d", &floresta[linha][coluna]);

		i = 0;
		qtsEspecies = 0;
		qtsLinhas = ordem * 2;
		
		while (qtsLinhas--)
		{

			scanf("%d %d", &linha, &coluna);

			// Se a especie achada ainda não foi vista, a quantidade de espécies
			// Capturadas incrementa e a especie atual é colocada no vetor de
			// Espécies já vistas;
			if (!procuraEspecie(especiesVistas, floresta[linha][coluna], i))
			{
				qtsEspecies++;
				especiesVistas[i++] = floresta[linha][coluna];
			}

		}

		printf("%d\n", qtsEspecies);

	}

}

// Função que procura uma espécie no vetor de espécies;
int procuraEspecie(int *especiesVistas, int numero, int tam)
{

	int i;
	for (i = 0; i < tam; i++)
		if (especiesVistas[i] == numero)
			return 1;

	return 0;

}
