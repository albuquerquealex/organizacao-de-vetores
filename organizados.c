int main() {
	int vetor[7};
        int i;

	for (i = 0; i < 7; i++) {
		printf("Digite um numero: ");
		scanf("%d", &vetor[i]);
		vetor[i] *= 2;
	}

        printf("Numeros em ordem crescente:\n");
	for (i = 0; i < 7; i++) {
		printf("Posicao %d: %d\n", i, vetor[i]);
	}

        return 0;
}

