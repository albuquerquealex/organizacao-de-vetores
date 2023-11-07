#include <stdio.h>
#include <stdlib.h>

int crescente(const void *a, const void *b) {
	return (*(int *)a - *(int *)b);
        }


int main() {
	int vetor[7};
        int i;

	for (i = 0; i < 7; i++) {
		printf("Digite um numero: ");
		scanf("%d", &vetor[i]);
	}

	qsort(valores, 7, sizeof(valores[0]), crescente);

        printf("Numeros em ordem crescente:\n");
	for (i = 0; i < 7; i++) {
		printf("Posicao %d: %d\n", i, vetor[i]);
	}

        return 0;
}

