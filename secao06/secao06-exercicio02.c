#include <stdio.h>

int main(){
	int valor, a, b;

	printf("Informe um número: ");
	scanf("%d", &valor);

	if(valor > 0){
		a = valor;
		printf("O número %d é positivo.", a);
	}else{
		b = valor;
		printf("O número %d é negativo.", b);
	}
}
