#include "AbstractSort.h"

//implemente AQUI a funcao sort do SelectionSort
//você DEVE utilizar a função swap para trocar dois elementos de posição

void sort(Elemento** umVetor, int quantidadeDeElmentos){
	int i, j, min_idx;

	for (i = 0; i < quantidadeDeElmentos-1; i++){

		min_idx = i;

		for (j = i+1; j < quantidadeDeElmentos; j++){
			if (umVetor[i]<umVetor[min_idx]){
				min_idx = j;


				//SWAP FUNCTION
				swap(&umVetor[min_idx], &umVetor[i]);

				}
			}
		}
	}

}