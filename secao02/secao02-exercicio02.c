#include <stdio.h>
// std = standard
// io = input/output

int main(){
	// declaracao de variaveis
	int num1, num2, soma, multiplicacao;

	// entradas
	printf("Informe o primeiro número: ");
	scanf("%d", &num1);

	printf("Informe o segundo número: ");
	scanf("%d", &num2);

	// processamento
	soma = num1 + num2;
	multiplicacao = soma * num1;

	// saida
	printf("O resultado da multiplicação é %d", multiplicacao);
}
