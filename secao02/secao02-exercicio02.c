#include <stdio.h>
// std = standard
// io = input/output

int main(){
	// declaracao de variaveis
	int num1, num2, soma, multiplicacao;

	// entradas
	printf("Informe o primeiro n�mero: ");
	scanf("%d", &num1);

	printf("Informe o segundo n�mero: ");
	scanf("%d", &num2);

	// processamento
	soma = num1 + num2;
	multiplicacao = soma * num1;

	// saida
	printf("O resultado da multiplica��o � %d", multiplicacao);
}
