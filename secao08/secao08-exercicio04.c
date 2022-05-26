#include <stdio.h>

int main(){
	int soma = 0, vetor[20];

	for(int i = 0; i < 20; i++){
		printf("Digite um valor para o vetor %d/20: ", (i+1));
		scanf("%d", &vetor[i]);
		soma = soma + vetor[i];
	}

	printf("A soma do vetor é: %d", soma);
}
