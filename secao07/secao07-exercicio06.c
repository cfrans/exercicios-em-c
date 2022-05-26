#include <stdio.h>

int main(){
	int numero, valor;

	printf("Informe um n�mero entre 1 e 10: ");
	scanf("%d", &numero);

	while(numero > 10 || numero < 1){
		printf("O n�mero deve ser entre 1 e 10\n");
		printf("Informe um n�mero: ");
		scanf("%d", &numero);
	}
	printf("Tabuada de %d:\n", numero);
	for(int i = 1; i <= 10; i++){
		valor = numero * i;
		printf("%d X %d = %d\n", numero, i, valor);
	}
}
