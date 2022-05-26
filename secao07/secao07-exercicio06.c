#include <stdio.h>

int main(){
	int numero, valor;

	printf("Informe um número entre 1 e 10: ");
	scanf("%d", &numero);

	while(numero > 10 || numero < 1){
		printf("O número deve ser entre 1 e 10\n");
		printf("Informe um número: ");
		scanf("%d", &numero);
	}
	printf("Tabuada de %d:\n", numero);
	for(int i = 1; i <= 10; i++){
		valor = numero * i;
		printf("%d X %d = %d\n", numero, i, valor);
	}
}
